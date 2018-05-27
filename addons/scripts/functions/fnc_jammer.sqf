/*
 * Author: Asherion and Rebel
 * This script will jam radios for all players within a given radius of a jamming object
 *
 * Arguments:
 * 0: _jammers [<OBJECT>]
 * 1: _radius <NUMBER> - Radius of jamming, default 1000
 * 2: _strength <NUMBER> - Strength of jamming, default 100
 *
 * Return Value:
 * Return Name <TYPE>
 *
 * Example:
 * [jammer1] call synixe_scripts_fnc_jammer
 *
 * Public: Yes
 */

if (!hasInterface) exitwith {};
waituntil {!isnull player};

private _currentUnit = player;
//TODO see if this could be replaced with TFAR's currentunit
["unit", {
  _currentUnit = (_this select 0);
}, true] call CBA_fnc_addPlayerEventHandler;

//Define the variables along with their default values.
private _jammers = param [0, [objNull], [[objNull]]];
private _radius = param [1, 1000, [0]];
private _strength = param [2, 100, [0]] - 1; // Minus one so that radio interference never goes below 1 near the edge of the radius (which is the default for TFAR).

//compare distances between jammers and player to find nearest jammer and set it as _jammer
private _jammerDist = {
  private _jammer = objNull;
  private _closestDist = 1000000;
  {
    if (_x distance _currentUnit < _closestdist) then {
      _jammer = _x;
      _closestDist = _x distance _currentUnit;
    };
  } foreach _jammers;
  _jammer;
};
private _jammer = call _jammerDist;

// While the Jamming Vehicle is not destroyed, loop every 5 seconds
while {alive _jammer} do
{
  // Set variables
  private _dist = _currentUnit distance _jammer;
  private _interference = 1;

  if (_dist < _radius) then {
    _interference = _strength - ((_dist / _radius) * _strength) + 1;
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
