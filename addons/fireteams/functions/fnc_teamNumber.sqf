/*
 * Author: Brett
 * Returns the number of a colored team
 *
 * Arguments:
 * 0: _color <STRING>
 *
 * Return Value:
 * team <NUMBER>
 *
 * Example:
 * "RED" call synixe_fireteam_fnc_teamNumber
 *
 * Public: Yes
 */

private _ret = 1;

switch (_this) do {
  case "RED":     {_ret = 2;};
  case "GREEN":   {_ret = 3;};
  case "BLUE":    {_ret = 4;};
  case "YELLOW":  {_ret = 5;};
};

_ret
