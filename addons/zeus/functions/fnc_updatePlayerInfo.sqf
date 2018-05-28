/*
 * Author: Brett
 * Updates the 3D player info display
 *
 * Arguments:
 * 0: Argument Name <TYPE>
 *
 * Return Value:
 * Return Name <TYPE>
 *
 * Example:
 * ["example"] call ace_[module]_fnc_[functionName]
 *
 * Public: [Yes/No]
 */

#include "script_component.hpp"

{
  private _distance = curatorCamera distance _x;
  if (_distance < 15 && {[objNull, "VIEW"] checkVisibility [eyePos curatorCamera, aimPos _x] > 0.25}) then {
    private _drawInfo = {
      params ["_color", "_text", "_height"];
      drawIcon3D
      [
        "",//Path to image displayed near text
        _color,//color of the text using RGBA
        ASLToAGL getPosASL _x,//position of the text _x referring to the player in 'allPlayers'
        1,//Width
        _height,//height from position, below
        0,//angle
        _text,//text to be displayed
        2,//shadow on text, 0=none,1=shadow,2=outline
        0.05,//text size
        "PuristaMedium",//text font
        "center"//align text left, right, or center
      ];
    };
    private _offset = -10;
    if (player getVariable [QGVAR(displayName), false]) then {
      [[1,1,1,1], name _x, _offset] call _drawInfo;
      _offset = _offset + 1.5;
    };
    if (player getVariable [QGVAR(displayRole), false] && {!(roleDescription _x isEqualTo "")}) then {
      [[1,1,1,1], roleDescription _x, _offset] call _drawInfo;
      _offset = _offset + 1.5;
    };
    if (player getVariable [QGVAR(displayFps), false]) then {
      [[1,1,1,1], format ["FPS: %1", str (_x getVariable [QGVAR(fps), 0])], _offset] call _drawInfo;
      _offset = _offset + 1.5;
    };
    if (_x getVariable QGVAR(spectator)) then {
      [[1,1,1,1], "Spectating", -8.5] call _drawInfo;
    } else {
      if (player getVariable [QGVAR(displayTeam), false]) then {
        [((assignedTeam _x) call synixe_fireteams_fnc_teamNumber) call synixe_fireteams_fnc_teamColorValues, assignedTeam _x, _offset] call _drawInfo;
        _offset = _offset + 1.5;
      };
      if (player getVariable [QGVAR(displayTFAR), false]) then {
        private _asw = _x getVariable [QGVAR(asw), ""];
        if (_asw isEqualTo "") then {
          [[1,1,1,1], _x getVariable [QGVAR(psw), "No Radio"], _offset] call _drawInfo;
        } else {
          [[1,1,1,1], format ["%1 (%2)", _x getVariable [QGVAR(psw), "NA"], _asw], _offset] call _drawInfo;
        };
        _offset = _offset + 1.5;
      };
      if (player getVariable [QGVAR(displayMedical), false]) then {
        if (_x getVariable ["ACE_isUnconscious", false]) then {
          [[1,0.5,0.5,1], "Unconscious", _offset] call _drawInfo;
        } else {
          if (_x getVariable ["ace_medical_isBleeding", false]) then {
            [[1,0.5,0.5,1], "Injured", _offset] call _drawInfo;
          } else {
            if (_x getVariable ["ace_medical_hasLostBlood", 0] > 0) then {
              [[1,0.5,0.5,1], format ["Blood Loss: %1", _x getVariable ["ace_medical_hasLostBlood", 0]], _offset] call _drawInfo;
            } else {
              if (_x getVariable["ace_medical_hasPain", false]) then {
                [[1,0.5,0.5,1], "In Pain", _offset] call _drawInfo;
              } else {
                [[1,1,1,1], "Healthy", _offset] call _drawInfo;
              };
            };
          };
        };
        _offset = _offset + 1.5;
      };
    };
  };
} forEach allPlayers;
