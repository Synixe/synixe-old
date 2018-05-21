/*
 * Author: Brett
 * Return the channel used by a callsign
 *
 * Arguments:
 * 0: _callsign <STRING>
 *
 * Return Value:
 * channel <NUMBER>
 *
 * Example:
 * callsign call synixe_common_fnc_callsignChannel
 *
 * Public: Yes
 */

private _major = 8;

switch (toLower _this) do {
  //NATO
  case "alpha":     { _major = 1; };
  case "bravo":     { _major = 2; };
  case "charlie":   { _major = 3; };
  case "delta":     { _major = 4; };
  case "echo":      { _major = 5; };
  case "foxtrot":   { _major = 6; };

  //Russian
  case "anna":     { _major = 1; };
  case "boris":    { _major = 2; };
  case "vasily":   { _major = 3; };
  case "gregory":  { _major = 4; };
  case "dmitri":   { _major = 5; };
  case "yelena":   { _major = 6; };
};

_major;
