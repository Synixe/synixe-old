#include "script_component.hpp"

if (hasInterface) then {
  EGVAR(loading,loaded) = 0;
  EGVAR(loading,ready) = 0;
  0 spawn {
    [{time > 0 && !(isNull player)}, //Wait for player to be loaded
      FUNC(clientSetup)
    ] call CBA_fnc_waitUntilAndExecute;
  };
};
