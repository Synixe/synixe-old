#include "script_component.hpp"

[] spawn FUNC(disableChat);
[] spawn FUNC(earplugs);
[] spawn FUNC(discord);

[] spawn {
  [player, 0.1] call FUNC(breath);
};

[] spawn {
  sleep 8;
  call FUNC(tfar);
};
