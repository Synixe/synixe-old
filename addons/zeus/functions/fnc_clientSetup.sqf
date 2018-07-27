#include "script_component.hpp"

//Add some info to the player's unit globally
[{
  player setVariable [QGVAR(fps), floor diag_fps, true];
  if (isClass(configFile >> "CfgPatches" >> "acre_main")) then {
    player setVariable [QGVAR(radios), call acre_api_fnc_getCurrentRadioList, true];
  };
  if (isClass(configFile >> "CfgPatches" >> "tfar_core")) then {
    player setVariable [QGVAR(psw), call TFAR_fnc_currentSwFrequency, true];
    player setVariable [QGVAR(asw), [(call TFAR_fnc_activeSwRadio), ((call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getAdditionalSwChannel) + 1] call TFAR_fnc_getChannelFrequency, true];
  };
  player setVariable [QGVAR(spectator), player getVariable ["ace_spectator_isSet", false], true];
  player setVariable [QGVAR(team), assignedTeam player, true];
}, 1] call CBA_fnc_addPerFrameHandler;

GVAR(placementPreview) = objNull;

[{
  if (call EFUNC(common,inZeus)) then {
    if !(GVAR(placementPreview) isEqualTo objNull) then {
      {
        GVAR(placementPreview) disableCollisionWith _x;
        [GVAR(placementPreview), _x] remoteExecCall ["disableCollisionWith", _x, _x];
      } forEach (nearestObjects [getPos GVAR(placementPreview), [], 50]);
    };
    if (side player isEqualTo sideLogic) then {
      player setPos (getPos curatorCamera);
    };
  };
}] call CBA_fnc_addPerFrameHandler;

addMissionEventHandler ["Draw3D", {
  if (call EFUNC(common,inZeus)) then {
    call FUNC(updatePlayerInfo);
    if (player getVariable [QGVAR(visibilityIndicator), false]) then {
      call FUNC(updateVisibility);
    };
    if (player getVariable [QGVAR(objectPreview), false]) then {
      call FUNC(updatePreview);
    };
  };
}];

0 spawn {
  waitUntil {!isNull (getAssignedCuratorLogic player)};
  (getAssignedCuratorLogic player) addEventHandler ["CuratorObjectPlaced", {
    if (player getVariable [QGVAR(properPlacement), false]) then {
      (_this select 1) allowDamage false;
      {
        _x allowDamage false;
      } forEach crew (_this select 1);
      if (player getVariable [QGVAR(objectPreview), false]) then {
        deleteVehicle GVAR(placementPreview);
      };
      (_this select 1) spawn {
        _this setPosASL [0,0,100];
        private _pos = AGLtoASL screenToWorld getMousePosition;
        private _intersections = lineIntersectsSurfaces [getPosASL curatorCamera, _pos];
        if((count _intersections) != 0) then {
          private _placePos = ((_intersections select 0) select 0);
          _this setPosASL [_placePos select 0, _placePos select 1, (_placePos select 2) + 0.2];
        } else {
          _this setPosASL [_pos select 0, _pos select 1, (_pos select 2) + 0.2];
        };
        sleep 1;
        _this allowDamage true;
        {
          _x allowDamage true;
        } forEach crew _this;
      };
    };
  }];
};
