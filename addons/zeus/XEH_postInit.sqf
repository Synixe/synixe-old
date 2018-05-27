#include "script_component.hpp"

if (missionName == "SZTv2") then {
  if (isServer) then {
      missionNamespace setVariable [QGVAR(faction), -1, true];
  };
  if (hasInterface) then {
      call FUNC(szt);
  }
};
