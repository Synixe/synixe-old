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

private _ret = 0;

switch (_this) do {
  case "RED":     {_ret = 1;};
  case "GREEN":   {_ret = 2;};
  case "BLUE":    {_ret = 3;};
  case "YELLOW":  {_ret = 4;};
};

_ret;
