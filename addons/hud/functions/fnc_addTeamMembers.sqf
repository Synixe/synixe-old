#include "script_component.hpp"

private _actions = [];

{
  private _unit = _x;

  if !(_unit isEqualTo ace_player) then {
    _actions pushBack [
      [
        format ["%1", _unit],
        [_unit, true] call ace_common_fnc_getName,
        _unit call FUNC(getIcon),
        { true }, //Statement
        { true }, //Condition
        {
          if (ace_interact_menu_selectedTarget isEqualTo _target) then {
            _this call FUNC(addTeamMemberActions)
          } else {
            []
          };
        }, //Children
        [_unit],
        {[0, 0, 0]},
        0,
        [false, false, false, true, false] //Run on hover
      ] call ace_interact_menu_fnc_createAction,
      [],
      _unit
    ];
  };
} forEach ([group ace_player, assignedTeam ace_player] call EFUNC(fireteams,teamMembers));

_actions
