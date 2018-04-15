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
        _ctrl = (findDisplay 49) displayCtrl 1010;
        _ctrl ctrlEnable false;
        sleep 0.5;
      };
    }
  };
}];

//Disable BIS Revive
player setVariable ["BIS_revive_disableRevive",false];

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
