#include "script_component.hpp"

if !([player, RIFLEMAN_RADIO] call acre_api_fnc_hasKindOfRadio) then {
  player addItem RIFLEMAN_RADIO;
};

switch (player getVariable [QGVAR(role), ""]) do {
  case "SL": {
    if !([player, SQUAD_RADIO] call acre_api_fnc_hasKindOfRadio) then {
      player addItem SQUAD_RADIO;
    };
    if !([player, LONGRANGE_RADIO] call acre_api_fnc_hasKindOfRadio) then {
      player addItem LONGRANGE_RADIO;
    };
  };
  case "TL": {
    if !([player, SQUAD_RADIO] call acre_api_fnc_hasKindOfRadio) then {
      player addItem SQUAD_RADIO;
    };
  };
};

uiNamespace getVariable [QGVAR(loadingStatus), 0] ctrlSetText "Waiting for ACRE to be ready";

[{
  call acre_api_fnc_isInitialized
}, { 0 spawn {

  sleep 1;

  player assignTeam ((player getVariable [QGVAR(originalTeam), 0]) call FUNC(teamColor));

  call FUNC(acre_setup);

  [-2, {
    0 spawn {
      sleep 1;
      INC(EGVAR(loading,ready));
    };
  }] call CBA_fnc_globalExecute;
  waitUntil {
    uiNamespace getVariable [QGVAR(loadingStatus), 0] ctrlSetText format [
      "%1 / %2 Players Ready",
      EGVAR(loading,ready),
      count allPlayers
    ];
    (count allPlayers) isEqualTo EGVAR(loading,ready)
  };
  sleep 1;
  uiNamespace getVariable [QGVAR(loadingScreen), 0] closeDisplay 1;
  disableUserInput false;
  ["synixe_ready"] call CBA_fnc_localEvent;
}}, _this] call CBA_fnc_waitUntilAndExecute;
