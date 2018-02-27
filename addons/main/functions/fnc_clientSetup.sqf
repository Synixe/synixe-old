#include "script_component.hpp"

if (missionName == "SynixeZeusTemplate") then {
  if (player == curator) then { //Let Zeus select faction
    [] spawn FUNC(factionSelect);
  };
} else {
  [player] spawn FUNC(earplugs);
};

[] spawn FUNC(disableChat);
[] spawn FUNC(discord);
[] spawn FUNC(breath);

[] spawn {
  sleep 8;
  call FUNC(tfar);
};
