#include "script_component.hpp"

if (hasInterface) then {
  //Breath
  [] spawn {
    [{time > 0 && !(isNull player)}, //Wait for player to be loaded
      FUNC(breath)
    ] call CBA_fnc_waitUntilAndExecute;
  };
};
