/*
 * Author: Brett
 * Get the class of a unit's map
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Map Class <STRING>
 *
 * Example:
 * _player call synixe_maps_fnc_getMap
 *
 * Public: Yes
 */

#include "script_component.hpp"

params [["_unit", ace_player, [objNull]]];

if (_unit call FUNC(hasUniqueMap)) exitWith { (assignedItems _unit) select 0 };
""
