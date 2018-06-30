/*
 * Author: Brett
 * Contributor: Reign0fDeath
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

private _block = 16;

switch (toLower _this) do {
  //NATO

  //Squad leaders will be 'actual' while team leaders would be <Squadname-1, Squadname-2> etc.
  //Squad leaders will call themselves <Squadname> over the command net.

  case "alpha":     { _block = 1; };
  case "bravo":     { _block = 2; };
  case "charlie":   { _block = 3; };
  case "delta":     { _block = 4; };
  case "echo":      { _block = 5; };
  case "foxtrot":   { _block = 6; };

  // COMMAND.
  case "command":   { _block = 7; };
  case "goliath":   { _block = 7; };
  case "titan":     { _block = 7; };

  // INTEL
  case "intel":     { _block = 8; };
  case "hawkeye":   { _block = 8; };
  case "spectre":   { _block = 8; };

  // AIR TRANSPORT
  case "atlas":     { _block = 9; };
  case "vulcan":    { _block = 9; };

  // LAND TRANSPORT
  case "coyote":    { _block = 10; };
  case "badger":    { _block = 10; };

  // NAVAL TRANSPORT
  case "sparrow":   { _block = 11; };
  case "bumpy":     { _block = 11; };

  // AIR CONTROL
  case "torch":     { _block = 12; };
  case "cougar":    { _block = 12; };

  // LAND SUPPORT
  case "panther":   { _block = 13; };
  case "spear":     { _block = 13; };

  // NAVAL SUPPORT
  case "dauntless": { _block = 14; };
  case "keystone":  { _block = 14; };

  // ARTILLERY SUPPORT
  case "hammer":    { _block = 15; };
  case "anvil":     { _block = 15; };

  // MEDICAL
  case "medical":   { _block = 16; };
  case "angel":     { _block = 16; };
  case "guardian":  { _block = 16; };


  //APCO Project 2
  case "adam":      { _block = 1; };
  case "boy":       { _block = 2; };
  case "charles":   { _block = 3; };
  case "david":     { _block = 4; };
  case "edward":    { _block = 5; };
  case "frank":     { _block = 6; };

  //Russian
  case "anna":      { _block = 1; };
  case "boris":     { _block = 2; };
  case "vasily":    { _block = 3; };
  case "gregory":   { _block = 4; };
  case "dmitri":    { _block = 5; };
  case "yelena":    { _block = 6; };
};

_block;
