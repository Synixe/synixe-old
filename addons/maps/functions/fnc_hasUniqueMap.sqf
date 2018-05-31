/*
 * Author: Brett
 * Check if a unit has a unique map
 *
 * Arguments:
 * 0: unit <OBJECT>
 *
 * Return Value:
 * Has map <BOOLEAN>
 *
 * Example:
 * _unit call synixe_maps_fnc_hasUniqueMap
 *
 * Public: Yes
 */

#include "script_component.hpp"

params [["_unit", ace_player, [objNull]]];

((assignedItems _unit) select 0) call FUNC(isUnique)
