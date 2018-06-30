#include "script_component.hpp"

if (isMultiplayer && { hasInterface }) then {
  if (isClass(configFile >> "CfgPatches" >> "tfar_core")) then {
    [] spawn {
      systemChat "Using TFAR";
      [{time > 0 && !(isNull player)},
        FUNC(tfar_init)
      ] call CBA_fnc_waitUntilAndExecute;
    };
  } else {
    if (isClass(configFile >> "CfgPatches" >> "acre_main")) then {
      [] spawn {
        systemChat "Using ACRE";
        [{time > 0 && !(isNull player)},
          FUNC(acre_init)
        ] call CBA_fnc_waitUntilAndExecute;
      };
    };
  };
};
