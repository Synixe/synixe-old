/*
 * Author: Brett
 * Setup the player's radios
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * 0 call synixe_main_fnc_tfar
 *
 * Public: Yes
 */

if (call TFAR_fnc_haveSWRadio) then {

  private _radio = call TFAR_fnc_activeSwRadio;
  private _major = "40";
  private _group = toLower (groupId ( group player)) splitString " ";

  [_radio, 1, "31"] call TFAR_fnc_setChannelFrequency;
  [_radio, 2, "32"] call TFAR_fnc_setChannelFrequency;
  [_radio, 3, "33"] call TFAR_fnc_setChannelFrequency;
  [_radio, 4, "34"] call TFAR_fnc_setChannelFrequency;
  [_radio, 5, "35"] call TFAR_fnc_setChannelFrequency;
  [_radio, 6, "36"] call TFAR_fnc_setChannelFrequency;
  [_radio, 7, "30"] call TFAR_fnc_setChannelFrequency;

  switch (_group select 0) do {
    //NATO
    case "alpha":     { [_radio, 0] call TFAR_fnc_setSwChannel; _major = "31"; };
    case "bravo":     { [_radio, 1] call TFAR_fnc_setSwChannel; _major = "32"; };
    case "charlie":   { [_radio, 2] call TFAR_fnc_setSwChannel; _major = "33"; };
    case "delta":     { [_radio, 3] call TFAR_fnc_setSwChannel; _major = "34"; };
    case "echo":      { [_radio, 4] call TFAR_fnc_setSwChannel; _major = "35"; };
    case "foxtrot":   { [_radio, 5] call TFAR_fnc_setSwChannel; _major = "36"; };

    case "goliath":   { [_radio, 7] call TFAR_fnc_setSwChannel; _major = "40"; };

    //Jets Freq. 51
    case "cougar":    { [_radio, 7] call TFAR_fnc_setSwChannel; _major = "51"; }; //CF-18 CFB Cold Lake
    case "torch":     { [_radio, 7] call TFAR_fnc_setSwChannel; _major = "51"; }; //F-22 Joint Base Langley–Eustis

    //C130 52
    case "atlas":     { [_radio, 7] call TFAR_fnc_setSwChannel; _major = "52"; }; //CC-130H CFB Winnipeg
    case "viking":    { [_radio, 7] call TFAR_fnc_setSwChannel; _major = "52"; }; //C-130 934th Airlift Wing

    //Russian
    case "anna":     { [_radio, 0] call TFAR_fnc_setSwChannel; _major = "31"; };
    case "boris":    { [_radio, 1] call TFAR_fnc_setSwChannel; _major = "32"; };
    case "vasily":   { [_radio, 2] call TFAR_fnc_setSwChannel; _major = "33"; };
    case "gregory":  { [_radio, 3] call TFAR_fnc_setSwChannel; _major = "34"; };
    case "dmitri":   { [_radio, 4] call TFAR_fnc_setSwChannel; _major = "35"; };
    case "yelena":   { [_radio, 5] call TFAR_fnc_setSwChannel; _major = "36"; };
  };

  [_radio, 8, _major] call TFAR_fnc_setChannelFrequency;

  if (count _group == 2 && {(_group select 1) find "-" == -1}) then {
    0 spawn {
      private _group = group player;
      {
        if (side _group == side _x) then {
          private _parent = _x;
          private _name = (groupId _group) splitString " ";
          private _root = _name select 0;
          if (_root == groupId _x && {(_name select 1) find "-" == -1}) then {
            [player] joinSilent _parent;
            sleep 0.2;
            switch (_name select 1) do {
              case "1": { [player, "RED"] call ace_interaction_fnc_joinTeam; };
              case "2": { [player, "GREEN"] call ace_interaction_fnc_joinTeam; };
              case "3": { [player, "BLUE"] call ace_interaction_fnc_joinTeam; };
              case "4": { [player, "YELLOW"] call ace_interaction_fnc_joinTeam; };
            };
          };
        };
      } forEach allGroups;
    };

    private _minor = _group select 1;

    if (player getVariable ["SGC_SQUAD_POSITION", "0"] == 1) then {
      [_radio, (call TFAR_fnc_getSwChannel)] call TFAR_fnc_setAdditionalSwChannel;

      [_radio, 8, (format ["%1.%2", _major, _minor])] call TFAR_fnc_setChannelFrequency;

      [_radio, 1] call TFAR_fnc_setSwStereo;
      [_radio, 2] call TFAR_fnc_setAdditionalSwStereo;
    } else {
      [_radio, 8, (format ["%1.%2", _major, _minor])] call TFAR_fnc_setChannelFrequency;
    };

    [_radio, 7] call TFAR_fnc_setSwChannel;
  } else {
    [_radio, 7] call TFAR_fnc_setSwChannel;
  };

};

if (call TFAR_fnc_haveLRRadio) then {
  [(call TFAR_fnc_activeLrRadio), 1, "31"] call TFAR_fnc_setChannelFrequency;
  [(call TFAR_fnc_activeLrRadio), 2, "32"] call TFAR_fnc_setChannelFrequency;
  [(call TFAR_fnc_activeLrRadio), 3, "33"] call TFAR_fnc_setChannelFrequency;
  [(call TFAR_fnc_activeLrRadio), 4, "34"] call TFAR_fnc_setChannelFrequency;
  [(call TFAR_fnc_activeLrRadio), 5, "35"] call TFAR_fnc_setChannelFrequency;
  [(call TFAR_fnc_activeLrRadio), 6, "36"] call TFAR_fnc_setChannelFrequency;
  [(call TFAR_fnc_activeLrRadio), 7, "30"] call TFAR_fnc_setChannelFrequency;
  [(call TFAR_fnc_activeLrRadio), 8, "40"] call TFAR_fnc_setChannelFrequency;
  [(call TFAR_fnc_activeLrRadio), 9, "41"] call TFAR_fnc_setChannelFrequency;
  //Set 30 active on LR by default
  [(call TFAR_fnc_activeLrRadio), 6] call TFAR_fnc_setLrChannel;
};
