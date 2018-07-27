#include "script_component.hpp"

if (hasInterface) then {
  0 spawn {
    [{time > 0 && !(isNull player)}, //Wait for player to be loaded
      FUNC(clientSetup)
    ] call CBA_fnc_waitUntilAndExecute;
  };
};

if (isServer) then {
  missionNamespace setVariable [QEGVAR(loading,loaded), 0, true];
  missionNamespace setVariable [QEGVAR(loading,ready), 0, true];
};
