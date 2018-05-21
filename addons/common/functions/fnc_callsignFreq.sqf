/*
 * Author: Brett
 * Return the frequency used by a callsign
 *
 * Arguments:
 * 0: _callsign <STRING>
 *
 * Return Value:
 * frequency <NUMBER>
 *
 * Example:
 * callsign call synixe_common_fnc_callsignFreq
 *
 * Public: Yes
 */

private _major = 40;

switch (toLower _this) do {
  //NATO
  case "alpha":     { _major = 31; };
  case "bravo":     { _major = 32; };
  case "charlie":   { _major = 33; };
  case "delta":     { _major = 34; };
  case "echo":      { _major = 35; };
  case "foxtrot":   { _major = 36; };

  case "goliath":   { _major = 40; };

  //Generic Support will be 50, but does not have any defined callsigns

  //Jets Freq. 51
  case "cougar":    { _major = 51; }; //CF-18 CFB Cold Lake
  case "torch":     { _major = 51; }; //F-22 Joint Base Langley–Eustis

  //C130 52
  case "atlas":     { _major = 52; }; //CC-130H CFB Winnipeg
  case "viking":    { _major = 52; }; //C-130 934th Airlift Wing

  //Russian
  case "anna":     { _major = 31; };
  case "boris":    { _major = 32; };
  case "vasily":   { _major = 33; };
  case "gregory":  { _major = 34; };
  case "dmitri":   { _major = 35; };
  case "yelena":   { _major = 36; };
};

_major;
