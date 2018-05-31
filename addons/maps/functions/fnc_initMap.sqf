/*
 * Author: Brett
 * Setup a unique map
 *
 * Arguments:
 * 0: Map class <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * _map call synixe_maps_fnc_initMap
 *
 * Public: No
 */

#include "script_component.hpp"

params ["_map"];

ace_player unlinkItem "ItemMap";
ace_player linkItem _map;
