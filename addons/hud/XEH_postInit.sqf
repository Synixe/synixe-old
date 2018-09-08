#include "script_component.hpp"

GVAR(showRadar) = true;

[{time > 0 && !(isNull player)},
  FUNC(initRadar)
] call CBA_fnc_waitUntilAndExecute;

[{time > 0 && !(isNull player)},
  FUNC(initIndicators)
] call CBA_fnc_waitUntilAndExecute;
