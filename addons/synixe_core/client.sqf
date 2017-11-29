
[] spawn {
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

  //Earplugs
  if (!("ACE_EarPlugs" in items player)) then {
    player addItem "ACE_EarPlugs";
  };
};
