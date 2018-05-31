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

player spawn FUNC(earplugs);
0 spawn FUNC(setFace);

player addEventHandler ["Respawn", {
  [true] call ace_spectator_fnc_setSpectator;
  [] spawn {
    while {true} do {
      ((findDisplay 49) displayCtrl 1010) ctrlEnable false;
      sleep 0.5;
    };
  };
}];

/*["ace_arsenal_displayOpened", {
  player setVariable ["synixe_enter_radio", (call TFAR_fnc_activeSwRadio)];
}] call CBA_fnc_addEventHandler;

["ace_arsenal_displayClosed", {
  if (player getVariable ["synixe_enter_radio", ""] != call TFAR_fnc_activeSwRadio) then {
    0 spawn FUNC(tfar);
  };
}] call CBA_fnc_addEventHandler;*/

//Disable BIS Revive
player setVariable ["BIS_revive_disableRevive",true];

if (side player != sideLogic) then {
  private _safedWeapons = player getVariable ["ace_safemode_safedWeapons", []];
  _safedWeapons pushBack (currentWeapon player);
  player setVariable ["ace_safemode_safedWeapons", _safedWeapons];
};

[] spawn FUNC(disableChat);
[] spawn FUNC(discord);
