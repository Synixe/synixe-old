/*
 * Author: Brett
 * Setup EH and one time settings
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */

#include "script_component.hpp"

if (missionName == "SZTv2") then {
  call FUNC(szt);
} else {
  player spawn FUNC(earplugs);
};

call FUNC(setFace);

player addEventHandler ["Respawn", {
  [] spawn {
    [true] call ace_spectator_fnc_setSpectator;
    [] spawn {
      while {true} do {
        ((findDisplay 49) displayCtrl 1010) ctrlEnable false;
        sleep 0.5;
      };
    }
  };
}];

["ace_arsenal_displayOpened", {
  player setVariable ["synixe_enter_radio", (call TFAR_fnc_activeSwRadio)];
}] call CBA_fnc_addEventHandler;

["ace_arsenal_displayClosed", {
  if (player getVariable ["synixe_enter_radio", ""] != call TFAR_fnc_activeSwRadio) then {
    0 spawn FUNC(tfar);
  };
}] call CBA_fnc_addEventHandler;

//Disable BIS Revive
player setVariable ["BIS_revive_disableRevive",true];

if (side player != sideLogic) then {
  [player, currentWeapon player, currentMuzzle player] call ace_safemode_fnc_lockSafety;
};

[] spawn FUNC(disableChat);
[] spawn FUNC(discord);
[] spawn FUNC(breath);

[] spawn {
  sleep 8;
  call FUNC(tfar);
};
