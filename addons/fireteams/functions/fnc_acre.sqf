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

[{
  call acre_api_fnc_isInitialized
}, { 0 spawn {

  sleep 3;

  player assignTeam ((player getVariable [QGVAR(originalTeam), 0]) call FUNC(teamColor));

  private _callsign = (groupId group player) splitString "-" select 0;
  private _teamRadio = [RIFLEMAN_RADIO] call acre_api_fnc_getRadioByType;
  private _block = _callsign call EFUNC(common,callsignBlock);

  [_teamRadio, ((_block - 1) * 16) + ((assignedTeam player) call FUNC(teamNumber))] call acre_api_fnc_setRadioChannel;

  switch (player getVariable [QGVAR(role), ""]) do {
    case "SL": {
      waitUntil {[player, SQUAD_RADIO] call acre_api_fnc_hasKindOfRadio};

      if ([player, SQUAD_RADIO] call acre_api_fnc_hasKindOfRadio) then {
        private _squadRadio = [SQUAD_RADIO] call acre_api_fnc_getRadioByType;
        [_squadRadio, _block] call acre_api_fnc_setRadioChannel;
        [_squadRadio, "RIGHT" ] call acre_api_fnc_setRadioSpatial;
      };

      if ([player, LONGRANGE_RADIO] call acre_api_fnc_hasKindOfRadio) then {
        private _longRadio = [LONGRANGE_RADIO] call acre_api_fnc_getRadioByType;
        [_longRadio, ("COMMAND" call EFUNC(common,callsignBlock))] call acre_api_fnc_setRadioChannel;
      };
    };
    case "TL": {
      if ([player, SQUAD_RADIO] call acre_api_fnc_hasKindOfRadio) then {
        private _squadRadio = [SQUAD_RADIO] call acre_api_fnc_getRadioByType;
        [_squadRadio, _block] call acre_api_fnc_setRadioChannel;
        [_squadRadio, "RIGHT" ] call acre_api_fnc_setRadioSpatial;
        [_teamRadio, _squadRadio] call acre_api_fnc_setMultiPushToTalkAssignment;
      };
    };
  };
  disableUserInput false;
}}, _this] call CBA_fnc_waitUntilAndExecute;
