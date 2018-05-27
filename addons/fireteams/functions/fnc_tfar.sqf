/*
 * Author: Brett
 * Setup the local player's radios for fireteams
 *
 * Example:
 * call synixe_fireteams_fnc_tfar
 *
 * Public: No
 */

#include "script_component.hpp"

if (call TFAR_fnc_haveSWRadio) then {
  private _radio = call TFAR_fnc_activeSwRadio;

  private _callsign = (groupId group player);

  private _major = _callsign call synixe_common_fnc_callsignFreq;

  [_radio, 1, "31"] call TFAR_fnc_setChannelFrequency;
  [_radio, 2, "32"] call TFAR_fnc_setChannelFrequency;
  [_radio, 3, "33"] call TFAR_fnc_setChannelFrequency;
  [_radio, 4, "34"] call TFAR_fnc_setChannelFrequency;
  [_radio, 5, "35"] call TFAR_fnc_setChannelFrequency;
  [_radio, 6, "36"] call TFAR_fnc_setChannelFrequency;
  [_radio, 7, "30"] call TFAR_fnc_setChannelFrequency;

  [_radio, 8, _major] call TFAR_fnc_setChannelFrequency;

  switch (player getVariable [QGVAR(role), ""]) do {
    case "SL": {
      //Set the primary channel to the Squad Net
      [_radio, (_callsign call synixe_common_fnc_callsignChannel) - 1] call TFAR_fnc_setSwChannel;
      if (assignedTeam player == "MAIN") then { //The SL has not joined a team
        //Set channel 8 to the default frequency
        [_radio, 8, _major] call TFAR_fnc_setChannelFrequency;
        //Disable the additional channel
        [_radio, 0] call TFAR_fnc_setAdditionalSwChannel;
      } else { //The SL has joined a team
        //Set channel 8 to the team net frequency
        [_radio, 8, (format ["%1.%2", _major, (assignedTeam player) call FUNC(teamNumber)])] call TFAR_fnc_setChannelFrequency;
        //Set the additional channel to Squad Net (Channel 8)
        [_radio, 8] call TFAR_fnc_setAdditionalSwChannel;
      };
    };
    case "TL": {
      //Set the additional channel to the Squad Net
      [_radio, (_callsign call synixe_common_fnc_callsignChannel) - 1] call TFAR_fnc_setAdditionalSwChannel;
      //Set the primary channel to the Team Net (Channel 8)
      [_radio, 7] call TFAR_fnc_setSwChannel;
      //Set Channel 8 to the team net frequency
      [_radio, 8, (format ["%1.%2", _major, (assignedTeam player) call FUNC(teamNumber)])] call TFAR_fnc_setChannelFrequency;
      //Primary Channel (Team Net) to left ear
      [_radio, 1] call TFAR_fnc_setSwStereo;
      //Secondary Channel (Squad Net) to right ear
      [_radio, 2] call TFAR_fnc_setAdditionalSwStereo;
    };
    default {
      //Set the primary channel to the Team Net (Channel 8)
      [_radio, 7] call TFAR_fnc_setSwChannel;
      //Set Channel 8 to the team net frequency
      [_radio, 8, (format ["%1.%2", _major, (assignedTeam player) call FUNC(teamNumber)])] call TFAR_fnc_setChannelFrequency;
    };
  };
};

//In the future, maybe change the LR setup for TL's
if (call TFAR_fnc_haveLRRadio) then {
  [(call TFAR_fnc_activeLrRadio), 1, "30"] call TFAR_fnc_setChannelFrequency;
  [(call TFAR_fnc_activeLrRadio), 2, "41"] call TFAR_fnc_setChannelFrequency;
  [(call TFAR_fnc_activeLrRadio), 3, "42"] call TFAR_fnc_setChannelFrequency;
  [(call TFAR_fnc_activeLrRadio), 4, "43"] call TFAR_fnc_setChannelFrequency;
  [(call TFAR_fnc_activeLrRadio), 5, "44"] call TFAR_fnc_setChannelFrequency;
  [(call TFAR_fnc_activeLrRadio), 6, "45"] call TFAR_fnc_setChannelFrequency;
  [(call TFAR_fnc_activeLrRadio), 7, "46"] call TFAR_fnc_setChannelFrequency;
  [(call TFAR_fnc_activeLrRadio), 8, "50"] call TFAR_fnc_setChannelFrequency;
  [(call TFAR_fnc_activeLrRadio), 9, "51"] call TFAR_fnc_setChannelFrequency;
  //Set 30 active on LR by default
  [(call TFAR_fnc_activeLrRadio), 0] call TFAR_fnc_setLrChannel;
};
