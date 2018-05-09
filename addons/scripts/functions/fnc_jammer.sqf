/*
Jam Radios script for TFAR created by Asherion and Rebel
Version 0.1.0
Available from: https://forums.bistudio.com/forums/topic/203810-release-radio-jamming-script-for-task-force-radio/

This script will jam radios for all players within a given radius of a jamming vehicle
Jamming is stronger nearer to the vehicle, while less strong at the edges of the radius
NOTE: It is recommended to call this script from initPlayerLocal.sqf if you want to run the script from mission start.

Parameter(s):
0: ARRAY of object(s) (Required)- Entity(s) that will cause the radios to be jammed.
1: NUMBER (Optional)- Range of the jammer in Meters. Default is 1000.
2: NUMBER (Optional)- Strength of the jammer. Default is 100.
Example: jamRadios = [[JAMMER],500] execVM "TFARjamRadios.sqf";
*/

if (!hasInterface) exitwith {};
waituntil {!isnull player};

_currentUnit = player;
//TODO see if this could be replaced with TFAR's currentunit
["unit", {
	_currentUnit = (_this select 0);
}, true] call CBA_fnc_addPlayerEventHandler;

//Define the variables along with their default values.
_jammers = param [0, [objNull], [[objNull]]];
_rad = param [1, 1000, [0]];
_strength = param [2, 100, [0]] - 1; // Minus one so that radio interference never goes below 1 near the edge of the radius (which is the default for TFAR).

//compare distances between jammers and player to find nearest jammer and set it as _jammer
_jammerDist = {
	_jammer = objNull;
	_closestDist = 1000000;
	{
		if (_x distance _currentUnit < _closestdist) then {
			_jammer = _x;
			_closestDist = _x distance _currentUnit;
		};
	} foreach _jammers;
	_jammer;
};
_jammer = call _jammerDist;

// While the Jamming Vehicle is not destroyed, loop every 5 seconds
while {alive _jammer} do
{
  // Set variables
  _dist = _currentUnit distance _jammer;
  _distPercent = _dist / _rad;
  _interference = 1;

  if (_dist < _rad) then {
	_interference = _strength - (_distPercent * _strength) + 1;
  };
  // Set the TF receiving and transmitting distance multipliers
  _currentUnit setVariable ["tf_receivingDistanceMultiplicator", _interference];
	//_currentUnit setVariable ["tf_transmittingDistanceMultiplicator", _interference];

  // Sleep 3 seconds before running again
  sleep 3.0;

	//Only run this if there are multiple jammers.
	if (count _jammers > 1) then {
		//Check if all of the jammers are still alive. If not, remove it from _jammers.
		{
			if (!alive _x AND count _jammers > 1) then {_jammers = _jammers - [_x]};
		} foreach _jammers;

		//Check for closest jammer
		_jammer = call _jammerDist;
	};
};

//Set TFR settings back to normal before exiting the script
_currentUnit setVariable ["tf_receivingDistanceMultiplicator", 1];
//_currentUnit setVariable ["tf_transmittingDistanceMultiplicator", 1];
