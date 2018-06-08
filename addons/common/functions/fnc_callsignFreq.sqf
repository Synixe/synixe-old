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

private _major = 40;

switch (toLower _this) do {
  //NATO
  
  //Squad leaders will be 'actual' while team leaders would be <Squadname 1, Squadname 2> etc. 
  //Squad leaders will call themselves <Squadname> over the command net.

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

  //Generic Support | 50 | 
  //Anything that does NOT fall into one of the categories below. Medevacs && SAR would fall under Helo (Trans)
  case "jester":    { _major = 50; };
  case "spectre":   { _major = 50; };
  case "phoenix":   { _major = 50; }; 

  //Jets (CAS) | 51
  case "cougar":    { _major = 51; }; //CF-18 CFB Cold Lake
  case "torch":     { _major = 51; }; //F-22 Joint Base Langley–Eustis
  case "raptor":    { _major = 51; }; //Fits.
  
  //C-130 (Transport) | 52 
  case "angel":     { _major = 52; };//7th Wing, Dyess AFB, TX 
  case "bixby":     { _major = 52; };//C-130E 23rd Wing, Pope AFB, NC
  case "atlas":     { _major = 53; }; //CC-130H CFB Winnipeg

  //AC-130 (Gunship) | 53
  case "spooky":    { _major = 53; }; //AC-130 callword.
  case "poseidon":  { _major = 53; }; 

  //Helo (CAS) | 54
  case "vulcan":    { _major = 54; };
  case "hornet":    { _major = 54; };
  case "brutal":    { _major = 54; };

  //Helo (Trans) | 55 
  case "guardian":  { _major = 55; };
  case "jolly":     { _major = 55; };//Blackhawk 	USAF
  case "dustoff":   { _major = 55; };//Blackhawk callsigns, USArmy
  
  //Drones | 56 | For either helo or plane drones. 
  case "spectre":   { _major = 56; };
  case "hawkeye":   { _major = 56; }; //General AWACS callsign for overatch and C2
  case "raven":     { _major = 56; };

  //IFVs & APCs | 60 
  case "panther":   { _major = 60; };
  case "spear":     { _major = 60; };
  case "coyote":    { _major = 60; };

  //Tanks | 61 
  case "warpig":    { _major = 61; };
  case "savage":    { _major = 61; };  
  case "gridiron":  { _major = 61; };

  //AA or AAA | 62
  case "patriot":   { _major = 62; };
  case "badger":    { _major = 62; };
  case "buzzsaw":   { _major = 62; };

  //Artillery | 63 | Can be used for a mortar squad or actual artillery units. 
  case "rainmaker": { _major = 63; };
  case "hammer":    { _major = 63; };
  case "anvil":     { _major = 63; };

  //Russian
  case "anna":      { _major = 31; };
  case "boris":     { _major = 32; };
  case "vasily":    { _major = 33; };
  case "gregory":   { _major = 34; };
  case "dmitri":    { _major = 35; };
  case "yelena":    { _major = 36; };
};

_major;
