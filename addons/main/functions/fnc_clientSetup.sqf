#include "script_component.hpp"

if (missionName == "SynixeZeusTemplate") {
  _faction = paramsArray select 0;
  _un = paramsArray select 1 == 1;
  [player, _faction, _un] spawn FUNC(loadout);
}

[] spawn FUNC(disableChat);
[] spawn FUNC(earplugs);
[] spawn FUNC(discord);

[] spawn FUNC(breath);

[] spawn {
  sleep 8;
  call FUNC(tfar);
};
