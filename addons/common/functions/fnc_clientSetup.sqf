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
  params ["", "_corpse"];
  player setVariable ["synixe_zeus_corpse", _corpse, true];
  private _pos = getPosASL player;
  player setPosASL [0,0,5];
  player enableSimulation false;
  [true] call ace_spectator_fnc_setSpectator;
  [{
    private _pauseMenu = findDisplay 49;
    if !(isNull _pauseMenu) then {
      (_pauseMenu displayCtrl 1010) ctrlEnable false;
    };
  }] call CBA_fnc_addPerFrameHandler;
  _pos spawn {
    sleep 0.2;
    ace_spectator_camera setPosASL _this;
  };
}];

[{
  private _pauseMenu = findDisplay 49;
  if !(isNull _pauseMenu) then {
    (_pauseMenu displayCtrl 1010) ctrlSetText "Lose will to live (Specate)";
  };
}] call CBA_fnc_addPerFrameHandler;

//Disable BIS Revive
player setVariable ["BIS_revive_disableRevive", true];

if (side player != sideLogic) then {
  [player, currentWeapon player, currentMuzzle player] call ace_safemode_fnc_lockSafety;
};

[] spawn FUNC(disableChat);
[] spawn FUNC(discord);
player spawn FUNC(earplugs);
