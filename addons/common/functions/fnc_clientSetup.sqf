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

player addEventHandler ["Respawn", {
  [true] call ace_spectator_fnc_setSpectator;
  [] spawn {
    while {true} do {
      ((findDisplay 49) displayCtrl 1010) ctrlEnable false;
      sleep 0.5;
    };
  };
}];

//Disable BIS Revive
player setVariable ["BIS_revive_disableRevive", true];

if (side player != sideLogic) then {
  [player, currentWeapon player, currentMuzzle player] call ace_safemode_fnc_lockSafety;
};

[] spawn FUNC(disableChat);
[] spawn FUNC(discord);
player spawn FUNC(earplugs);
