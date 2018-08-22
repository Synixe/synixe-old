if (isServer) then {
  [_this, "Fin_random_F"] spawn {
    params ["_guy","_class"];
    _guy = _guy select 0;
    private _dog = createAgent [_class, getPos _guy, [], 0, "CAN_COLLIDE"];
    _dog setVariable ["BIS_fnc_animalBehaviour_disable", true];
    _dog attachTo [_guy,[0,0,0]];
    _guy hideObjectGlobal true;

    if (_guy isEqualTo player) then {
      [_guy, _dog] spawn {
        params ["_guy","_dog"];
        while {alive _guy && alive _dog} do {
          removeAllItems _guy;
          removeAllWeapons _guy;
          if(cameraView == "INTERNAL" || cameraView == "GROUP") then {
            vehicle player switchCamera "EXTERNAL";
          };
          if (!isNull findDisplay 602) then {closeDialog 602};
          sleep 0.01;
        };
      };
    };

    while {alive _guy && alive _dog} do {
      if (speed _guy > 10) then {
        _dog playMoveNow "Dog_Sprint";
      } else {
        if (speed _guy > 6) then {
          _dog playMoveNow "Dog_Run";
        } else {
          if ((speed _guy > 2) || (speed _guy < -2)) then {
            _dog playMoveNow "Dog_Walk";
          } else {
            if !(_guy getVariable ["bark",false]) then {
              if ((stance _guy) == "STAND") then {
                _dog playMoveNow "Dog_Stop";
              } else {
                if ((stance _guy) == "PRONE") then {
                  _dog playMoveNow "Dog_Sit";
                } else {
                  _dog playMoveNow "Dog_Idle_Stop";
                };
              };
            };
          };
        };
      };
      sleep 0.05;
    };
    deleteVehicle _guy;
  };
};
