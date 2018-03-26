#include "script_component.hpp"

if (missionName == "SZTv2") then {
  call FUNC(szt);
} else {
  player spawn FUNC(earplugs);
};

call FUNC(setFace);

//Disable BIS Revive
player setVariable ["BIS_revive_disableRevive",false];

if (player isKindOf "CABaseMan") then {
  //Start with safety on
  [player, currentWeapon player, currentMuzzle player] call ace_safemode_fnc_lockSafety;
};

[] spawn FUNC(disableChat);
[] spawn FUNC(discord);
[] spawn FUNC(breath);

[] spawn {
  sleep 8;
  call FUNC(tfar);
};
