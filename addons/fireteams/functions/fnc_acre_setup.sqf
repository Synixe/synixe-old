/*
 * Author: Brett
 * Sets the radios to the correct setup for the players current team
 *
 * Example:
 * call synixe_fireteams_fnc_acre_setup
 *
 * Public: No
 */

#include "script_component.hpp"

private _callsign = (groupId group player) splitString "-" select 0;
private _teamRadio = [RIFLEMAN_RADIO] call acre_api_fnc_getRadioByType;
private _block = _callsign call EFUNC(common,callsignBlock);

[_teamRadio, ((_block - 1) * 16) + ((assignedTeam player) call FUNC(teamNumber))] call acre_api_fnc_setRadioChannel;

switch (player getVariable [QGVAR(role), ""]) do {
  case "SL": {
    waitUntil {[player, SQUAD_RADIO] call acre_api_fnc_hasKindOfRadio};

    if ([player, SQUAD_RADIO] call acre_api_fnc_hasKindOfRadio) then {
      private _squadRadio = [SQUAD_RADIO] call acre_api_fnc_getRadioByType;
      if (getMissionConfigValue QGVAR(singleSquadnet)) then {
        [_squadRadio, 1] call acre_api_fnc_setRadioChannel;
      } else {
        [_squadRadio, _block] call acre_api_fnc_setRadioChannel;
      };
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
