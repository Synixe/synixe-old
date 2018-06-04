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

 /*
  * Pulled alot of callsigns from 'records' documented to have been used in WWII and Vietnam for
  * US forces. Some were made up, I tried to make them as variable but close sounding as possible.
  * -Reign
 */ 

private _major = 40;

switch (toLower _this) do {
  //NATO
  //Squads... Squad leaders will be 'actual' while team leaders would be <Squadname 1, Squadname 2> etc. 
  //Squad leaders will call themselves <Squadname> over the command net
  case "alpha":     { _major = 31; };
  case "bravo":     { _major = 32; };
  case "charlie":   { _major = 33; };
  case "delta":     { _major = 34; };
  case "echo":      { _major = 35; };
  case "foxtrot":   { _major = 36; };

// High Command.
  case "goliath":   { _major = 40; };
  case "titan":     { _major = 40; };
  case "mama bear": { _major = 40; };

  //Generic Support 50. Anything that does NOT fall into one of the categories below. 
  // Medevacs / SAR would fall under Helo Trans
  case "jester":    { _major = 50; };
  case "spectre":   { _major = 50; };
  case "phoenix":   { _major = 50; }; 

  //Jets Freq. 51
  case "cougar":    { _major = 51; }; //CF-18 CFB Cold Lake
  case "torch":     { _major = 51; }; //F-22 Joint Base Langley–Eustis
  case "raptor":    { _major = 51; }; //Fits.

  //AC130 Gunships 52
  case "atlas":     { _major = 52; }; //CC-130H CFB Winnipeg
  case "spooky":    { _major = 52; }; //AC-130 callword.
  case "poseidon":  { _major = 52; }; 

  //Helo CAS 53
  case "vulcan":    { _major = 53; };
  case "hornet":    { _major = 53; };
  case "brutal":    { _major = 53; };

  //Helo Trans 54
  case "guardian":  { _major = 54; };
  case "hefty":     { _major = 54; };
  case "dustoff":   { _major = 54; };
  
  //Drones 55. For either helo or plane drones. 
  case "spectre":   { _major = 55; };
  case "hawkeye":   { _major = 55; }; //General AWACS callsign for overatch and C2
  case "raven":     { _major = 55; };

  //Armor 56, tanks or mechanized. We can split these up if we need to.
  case "warpig":    { _major = 56; };
  case "savage":    { _major = 56; };  
  case "gridiron":  { _major = 56; };

  //AA|AAA unit, this is armored units. 57
  case "patriot":   { _major = 57; };
  case "badger":    { _major = 57; };
  case "buzzsaw":   { _major = 57; };

  //Artillery, can be used for a mortar squad or actuall artillery units. 58
  case "rainmaker": { _major = 58; };
  case "hammer":    { _major = 58; };
  case "anvil":     { _major = 58; };

  //Russian
  case "anna":      { _major = 31; };
  case "boris":     { _major = 32; };
  case "vasily":    { _major = 33; };
  case "gregory":   { _major = 34; };
  case "dmitri":    { _major = 35; };
  case "yelena":    { _major = 36; };
};

_major;
