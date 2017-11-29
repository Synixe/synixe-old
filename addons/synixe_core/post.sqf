if (isServer) then {
  call Synixe_fnc_ServerInit;
};

if (hasInterface) then {
  [] spawn {
    [   {time > 0 && !(isNull player)}, //Wait for player to be loaded
        Synixe_fnc_ClientInit
    ] call CBA_fnc_waitUntilAndExecute;
  };
};
