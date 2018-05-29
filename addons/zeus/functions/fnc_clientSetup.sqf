#include "script_component.hpp"

//Add some info to the player's unit globally
[{
  player setVariable [QGVAR(fps), floor diag_fps, true];
  player setVariable [QGVAR(psw), call TFAR_fnc_currentSwFrequency, true];
  player setVariable [QGVAR(asw), [(call TFAR_fnc_activeSwRadio), ((call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getAdditionalSwChannel) + 1] call TFAR_fnc_getChannelFrequency, true];
  player setVariable [QGVAR(spectator), player getVariable ["ace_spectator_isSet", false], true];
}, 1] call CBA_fnc_addPerFrameHandler;

GVAR(placementPreview) = objNull;

[{
  if (call synixe_common_fnc_inZeus) then {
    if !(GVAR(placementPreview) isEqualTo objNull) then {
      {
        GVAR(placementPreview) disableCollisionWith _x;
        [GVAR(placementPreview), _x] remoteExecCall ["disableCollisionWith", _x, _x];
      } forEach (nearestObjects [getPos GVAR(placementPreview), [], 50])
    };
  };
}] call CBA_fnc_addPerFrameHandler;

addMissionEventHandler ["Draw3D", {
  if (call synixe_common_fnc_inZeus) then {
    call FUNC(updatePlayerInfo);
    if (player getVariable [QGVAR(advancedPlacement), false]) then {
      call FUNC(updateVisibility);
    };
  };
}];

0 spawn {
  waitUntil {!isNull (getAssignedCuratorLogic player)};
  (getAssignedCuratorLogic player) addEventHandler ["CuratorObjectPlaced", {
    if (player getVariable [QGVAR(advancedPlacement), false]) then {
      (_this select 1) allowDamage false;
      deleteVehicle GVAR(placementPreview);
      (_this select 1) spawn {
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
      };
    };
  }];
};
