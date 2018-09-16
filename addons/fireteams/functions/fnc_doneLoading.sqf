#include "script_component.hpp"

[0, {
  missionNamespace setVariable [QEGVAR(loading,ready), (missionNamespace getVariable [QEGVAR(loading,ready), 0]) + 1, true];
}] call CBA_fnc_globalExecute;

waitUntil {
  private _ready = missionNamespace getVariable [QEGVAR(loading,ready), 0];
  uiNamespace getVariable [QGVAR(loadingStatus), 0] ctrlSetText format [
    "%1 / %2 Players Ready",
    _ready,
    call EFUNC(common,totalPlayers)
  ];
  private _done = false;
  if (uiNamespace getVariable [QGVAR(skipLoading), false]) then {
    _done = true;
  } else {
    _done = (call EFUNC(common,totalPlayers)) isEqualTo _ready;
  };
  _done
};
sleep 0.5;
uiNamespace getVariable [QGVAR(loadingScreen), 0] closeDisplay 1;
disableUserInput false;
["synixe_ready"] call CBA_fnc_localEvent;
["synixe_loading_done"] call CBA_fnc_serverEvent;
