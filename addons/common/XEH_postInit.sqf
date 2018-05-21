#include "script_component.hpp"

if (isServer) then {
  if (missionName == "SZTv2") then {
    missionNamespace setVariable ["SZT_FACTION", -1, true];
  };
};

if (hasInterface) then {
  [] spawn {
    [   {time > 0 && !(isNull player)}, //Wait for player to be loaded
        FUNC(clientSetup)
    ] call CBA_fnc_waitUntilAndExecute;
  };
};
