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
  missionNamespace setVariable [QEGVAR(loading,done), false];
  ["synixe_loading_done", {
    private _done = missionNamespace getVariable [QEGVAR(loading,done), false];
    if !(_done) then {
      missionNamespace setVariable [QEGVAR(loading,done), true];
      ["synixe_start"] call CBA_fnc_globalEvent;
    };
  }] call CBA_fnc_addEventHandler;
  addMissionEventHandler ["PlayerDisconnected", {
    private _loaded = (missionNamespace getVariable [QEGVAR(loading,loaded), 0]) - 1;
    private _ready = (missionNamespace getVariable [QEGVAR(loading,ready), 0]) - 1;
    missionNamespace setVariable [QEGVAR(loading,loaded), _loaded, true];
    missionNamespace setVariable [QEGVAR(loading,ready), _ready, true];
  }];
};
