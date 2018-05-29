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
    [] spawn {
      [{time > 0 && !(isNull player)}, //Wait for player to be loaded
        FUNC(clientSetup)
      ] call CBA_fnc_waitUntilAndExecute;
    };
  };
};
