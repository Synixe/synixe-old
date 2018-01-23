[] spawn {

  //Earplugs
  if (!("ACE_EarPlugs" in items player)) then {
    player addItem "ACE_EarPlugs";
  };

  //Disable chat
  0 enableChannel [true, false];  //Global - Text Only
  1 enableChannel [true, false];  //Side   - Text Only
  2 enableChannel false;          //Command
  3 enableChannel false;          //Group
  4 enableChannel false;          //Vehicle
  5 enableChannel false;          //Direct
  setCurrentChannel 0;            //Change to Global

  sleep 8; //TODO Find a way to wait for TFAR to be ready
  //TFAR Settings
  if (call TFAR_fnc_haveSWRadio) then {
    [(call TFAR_fnc_activeSwRadio), 1, "31"] call TFAR_fnc_setChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 2, "32"] call TFAR_fnc_setChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 3, "33"] call TFAR_fnc_setChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 4, "34"] call TFAR_fnc_setChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 5, "35"] call TFAR_fnc_setChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 6, "36"] call TFAR_fnc_setChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 7, "30"] call TFAR_fnc_setChannelFrequency;
    [(call TFAR_fnc_activeSwRadio), 8, "40"] call TFAR_fnc_setChannelFrequency;

    switch (toLower(groupId(group player))) do {
      case "alpha":     { [(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwChannel; };
      case "bravo":     { [(call TFAR_fnc_activeSwRadio), 1] call TFAR_fnc_setSwChannel; };
      case "charlie":   { [(call TFAR_fnc_activeSwRadio), 2] call TFAR_fnc_setSwChannel; };
      case "delta":     { [(call TFAR_fnc_activeSwRadio), 3] call TFAR_fnc_setSwChannel; };
      case "echo":      { [(call TFAR_fnc_activeSwRadio), 4] call TFAR_fnc_setSwChannel; };
      case "foxtrot":   { [(call TFAR_fnc_activeSwRadio), 5] call TFAR_fnc_setSwChannel; };
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
    [call TFAR_fnc_activeLrRadio, 6] call TFAR_fnc_setLrChannel;
  };
};
