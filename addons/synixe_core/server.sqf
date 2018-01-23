[] spawn {
  [   {time > 2},
      Synixe_fnc_ZeusInit
  ] call CBA_fnc_waitUntilAndExecute;
};

[] spawn {
  while {true} do {
    sleep 1;
    //Zeus edit zone
    if (!isNil "SynixeCur") then {
      removeAllCuratorEditingAreas SynixeCur;
      _y = 0;
      {
        if (isPlayer _x) then
        {
          _y = _y + 1;
          SynixeCur addCuratorEditingArea [_y,position _x,100];
        };
      } forEach playableUnits;
    };
  };
};

/*
[] spawn {
  while {true} do {
    sleep 3;
    //VCOM Changes
    {
      _x setVariable ["VCOM_NOPATHING_Unit",true];
    } forEach allUnits;
  }
}
*/
