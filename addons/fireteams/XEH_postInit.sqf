#include "script_component.hpp"

if (hasInterface) then {
  [] spawn {
    [{time > 0 && !(isNull player)}, //Wait for player to be loaded
      FUNC(init)
    ] call CBA_fnc_waitUntilAndExecute;
  };
};
