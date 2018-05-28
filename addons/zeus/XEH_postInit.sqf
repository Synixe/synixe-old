#include "script_component.hpp"

if (missionName == "SZTv2") then {
  if (isServer) then {
    missionNamespace setVariable [QGVAR(faction), -1, true];
  };
  if (hasInterface) then {
    0 spawn FUNC(szt);
  }
};

if (hasInterface) then {
  if (isMultiplayer) then {
    //Add some info to the player's unit globally
    [{
      player setVariable [QGVAR(fps), floor diag_fps, true];
      player setVariable [QGVAR(psw), call TFAR_fnc_currentSwFrequency, true];
      player setVariable [QGVAR(asw), [(call TFAR_fnc_activeSwRadio), ((call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getAdditionalSwChannel) + 1] call TFAR_fnc_getChannelFrequency, true];
      player setVariable [QGVAR(spectator), player getVariable ["ace_spectator_isSet", false], true];
    }, 1] call CBA_fnc_addPerFrameHandler;

    addMissionEventHandler ["Draw3D", {
      if (call synixe_common_fnc_inZeus) then {
        call FUNC(updatePlayerInfo);
        call FUNC(updateVisibility);
      };
    }];
  };
};
