// Foggy breath 20110122
//Credits: http://www.armaholic.com/page.php?id=13307

private ["_unit"];
_unit = _this select 0;
_int = _this select 1; //intensity of fog (0 to 1)

while {alive _unit} do {
  sleep (2 + random 2); // random time between breaths

  if ((((getPosASL player) select 2) call ace_weather_fnc_calculateTemperatureAtHeight) < 7.3) then {
    //TODO Make this work...
    //[_unit, _int] remoteExec ["sgc_mod_main_fnc_fog"];
    [_unit, _int] spawn FUNC(fog);
  };
};
