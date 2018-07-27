/*
 * Author: Brett
 * Returns the color of numerical team
 *
 * Arguments:
 * 0: _team <NUMBER>
 *
 * Return Value:
 * color <STRING>
 *
 * Example:
 * 2 call synixe_fireteams_fnc_teamColor
 *
 * Public: Yes
 */

private _ret = [1,1,1,1];

switch (_this) do {
  case 2: {_ret = [1,0,0,1];};
  case 3: {_ret = [0,1,0,1];};
  case 4: {_ret = [0.2,0.2,1,1];};
  case 5: {_ret = [1,1,0,1];};
};

_ret
