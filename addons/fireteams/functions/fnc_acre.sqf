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

if (count ([] call acre_api_fnc_getCurrentRadioList) == 0) then {
  0 spawn FUNC(doneLoading);
} else {
  uiNamespace getVariable [QGVAR(loadingStatus), 0] ctrlSetText "Waiting for ACRE to be ready";
  [{
    call acre_api_fnc_isInitialized
  }, { 0 spawn {
    player assignTeam ((player getVariable [QGVAR(originalTeam), 0]) call FUNC(teamColor));
    call FUNC(acre_setup);
    0 spawn FUNC(doneLoading);
  }}, _this] call CBA_fnc_waitUntilAndExecute;
};
