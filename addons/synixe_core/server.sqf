//Check if mission already has a ACE Revive Module, create one if missing
if (count (entities "ACE_moduleReviveSettings") > 1) then {
  systemChat "ACE Revive Found";
} else {
  ACE_group = createGroup sideLogic;
  ACEReviveModule = ACE_group createunit["ACE_moduleReviveSettings", [0,90,90], [], 0.5, "NONE"];
  publicVariable "ACEReviveModule";
  ACEReviveModule setVariable ["maxReviveTime", 600];
  ACEReviveModule setVariable ["amountOfReviveLives", 3];
  ACEReviveModule setVariable ["enableRevive", 1];
  systemChat "ACE Revive Created";
};

[] spawn {
  [   {time > 5},
      Synixe_fnc_ZeusInit
  ] call CBA_fnc_waitUntilAndExecute;
};

[] spawn {
  while {true} do {
    sleep 1;
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
