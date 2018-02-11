#include "script_component.hpp"

if (isServer) then {
  call FUNC(zeus);
};

if (hasInterface) then {
  [] spawn {
    [   {time > 0 && !(isNull player)}, //Wait for player to be loaded
        FUNC(clientSetup)
    ] call CBA_fnc_waitUntilAndExecute;
  };
};
