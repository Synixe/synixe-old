/*
 * Author: Brett
 * Instantly turn a vehicle into a wreck via Zeus
 *
 * Public: No
 */

#include "\achilles\modules_f_ares\module_header.h"
#include "script_component.hpp"

private _unitUnderCursor = [_logic, false] call Ares_fnc_GetUnitUnderCursor;

if !(isNull _unitUnderCursor) then {
  _unitUnderCursor call EFUNC(scripts,wreck);
};

#include "\achilles\modules_f_ares\module_footer.h"
