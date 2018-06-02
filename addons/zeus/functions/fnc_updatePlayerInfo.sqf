/*
 * Author: Brett
 * Updates the 3D player info display
 *
 * Public: No
 */

#include "script_component.hpp"

{
  private _distance = curatorCamera distance _x;
  if (_distance < 15 && {[objNull, "VIEW"] checkVisibility [eyePos curatorCamera, aimPos _x] > 0.25}) then {
    _x setVariable [QGVAR(offset), -10];
    if (player getVariable [QGVAR(displayName), false]) then {
      [_x, name _x, [1,1,1,1]] call FUNC(drawInfo);
    };
    if (player getVariable [QGVAR(displayRole), false] && {!(roleDescription _x isEqualTo "")}) then {
      [_x, roleDescription _x, [1,1,1,1]] call FUNC(drawInfo);
    };
    if (player getVariable [QGVAR(displayFps), false]) then {
      [_x, format ["FPS: %1", str (_x getVariable [QGVAR(fps), 0])], [1,1,1,1]] call FUNC(drawInfo);
    };
    if (player getVariable [QGVAR(displayTeam), false]) then {
      private _color = ((assignedTeam _x) call synixe_fireteams_fnc_teamNumber) call synixe_fireteams_fnc_teamColorValues;
      [_x, assignedTeam _x, _color] call FUNC(drawInfo);
    };
    if (_x getVariable QGVAR(spectator)) then {
      [_x, "Spectating", [1,1,1,1]] call FUNC(drawInfo);
    } else {
      if (player getVariable [QGVAR(displayTFAR), false]) then {
        private _asw = _x getVariable [QGVAR(asw), ""];
        if (_asw isEqualTo "") then {
          [_x, _x getVariable [QGVAR(psw), "No Radio"], [1,1,1,1]] call FUNC(drawInfo);
        } else {
          [_x, format ["%1 (%2)", _x getVariable [QGVAR(psw), "NA"], _asw], [1,1,1,1]] call FUNC(drawInfo);
        };
      };
      if (player getVariable [QGVAR(displayMedical), false]) then {
        if (_x getVariable ["ACE_isUnconscious", false]) then {
          [_x, "Unconscious", [1,0.5,0.5,1]] call FUNC(drawInfo);
        } else {
          if (_x getVariable ["ace_medical_isBleeding", false]) then {
            [_x, "Injured", [1,0.5,0.5,1]] call FUNC(drawInfo);
          } else {
            if (_x getVariable ["ace_medical_hasLostBlood", 0] > 0) then {
              [_x, format ["Blood Loss: %1", _x getVariable ["ace_medical_hasLostBlood", 0]], [1,0.5,0.5,1]] call FUNC(drawInfo);
            } else {
              if (_x getVariable["ace_medical_hasPain", false]) then {
                [_x, "In Pain", [1,0.5,0.5,1]] call FUNC(drawInfo);
              } else {
                [_x, "Healthy", [1,1,1,1]] call FUNC(drawInfo);
              };
            };
          };
        };
      };
    };
  };
} forEach allPlayers;
