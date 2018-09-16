#include "script_component.hpp"

add3DENEventHandler ["OnMissionNew", {
  0 spawn {
    sleep 1;
    systemChat "New Mission Eh";
  };
}];
