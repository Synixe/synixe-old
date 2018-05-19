/*
  Author: Josef Zemanek
  Edited by: Kalthramis

  Description:
  Timer, as used in Firing Drills and VR Training

  Parameter(s):
  0: INT - Timer duration in seconds

  1: STRING (Optional) - Timer colour in HTML format

  Defaults is white.
  If "#CC8000", overwrites to white for time being.
  For BlueFor Dialogue Blue: "#00ccff"

  suggested:
  waitUntil { scriptDone "synixe_fnc_countdownTimer.sqf" };

  Public: Yes

  Returns:
  true

  [300, "#00ccff"] spawn synixe_scripts_fnc_countdownTimer;
*/

private _color = _this param [1,(["IGUI", "WARNING_RGB"] call BIS_fnc_displayColorGet) call BIS_fnc_colorRGBtoHTML,[""]];

//Default color is white
if(_color == "#CC8000") then {
  _color = "#FFFFFF";
};

private _startTime = _this param [0];
BIS_stopTimer = FALSE;
RscFiringDrillTime_done = FALSE;
if (isNil "BIS_interruptable") then {
  BIS_interruptable = TRUE;
};

1 cutRsc ["RscFiringDrillTime", "PLAIN"];

if(isMultiplayer) then
{
   _startTime = _startTime + serverTime;

  while {(_startTime - serverTime) > 0} do {
    private _t = _startTime - serverTime;
    private _timeNowFormat = [_t, "MM:SS.MS", TRUE] call BIS_fnc_secondsToString;
    private _text = "<t align='left' color='" + _color + "'>";

    private _textCurrent = "";
    private _colorCurrent = _color;
    private _iconCurrent = "A3\Modules_F_Beta\data\FiringDrills\timer_ca";

    _textCurrent = _textCurrent + "<img image='" + _iconCurrent + "' /> ";
    _textCurrent = _textCurrent + (format ["%1:%2<t size='0.8'>.%3</t>", _timeNowFormat select 0, _timeNowFormat select 1, _timeNowFormat select 2]);
    _textCurrent = _textCurrent + "</t>";

    _text  = _text + _textCurrent;

    RscFiringDrillTime_current = parseText _text;

    sleep 0.01;
  };
}
else
{
   _startTime = _startTime + time;

  while {(_startTime - time) > 0} do {
    private _t = _startTime - time;
    private _timeNowFormat = [_t, "MM:SS.MS", TRUE] call BIS_fnc_secondsToString;
    private _text = "<t align='left' color='" + _color + "'>";

    private _textCurrent = "";
    private _colorCurrent = _color;
    private _iconCurrent = "A3\Modules_F_Beta\data\FiringDrills\timer_ca";

    _textCurrent = _textCurrent + "<img image='" + _iconCurrent + "' /> ";
    _textCurrent = _textCurrent + (format ["%1:%2<t size='0.8'>.%3</t>", _timeNowFormat select 0, _timeNowFormat select 1, _timeNowFormat select 2]);
    _textCurrent = _textCurrent + "</t>";

    _text  = _text + _textCurrent;

    RscFiringDrillTime_current = parseText _text;

    sleep 0.01;
  };
};
sleep 1;

RscFiringDrillTime_done = TRUE;

TRUE
