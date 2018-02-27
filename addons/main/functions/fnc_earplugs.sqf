//Gives the unit earplugs if they don't already have them

params [
  ["_unit", objNull]
];

if (_unit == objNull) exitWith {};

if (!("ACE_EarPlugs" in items _unit)) then {
  _unit addItem "ACE_EarPlugs";
};
