#include "script_component.hpp"

if (isServer) then {
  if (missionName == "SZTv2") then {
    missionNamespace setVariable ["SZT_FACTION", -1, true];
  } else {
    0 spawn {
      waitUntil {time > 10};
      {
        private _group = _x;
        {
          if (side _group == side _x) then {
            private _parent = _x;
            private _name = (groupId _group) splitString " ";
            private _root = _name select 0;
            if (_root == groupId _x && {(_name select 1) find "-" == -1}) then {
              {
                [_x] joinSilent _parent;
                sleep 0.2;
                switch (_name select 1) do {
                  case "1": { _x assignTeam "RED"; };
                  case "2": { _x assignTeam "GREEN"; };
                  case "3": { _x assignTeam "BLUE"; };
                  case "4": { _x assignTeam "YELLOW"; };
                };
              } forEach units _group;
            };
          };
        } forEach allGroups;
      } forEach allGroups;
    };
  };
};

if (hasInterface) then {
  [] spawn {
    [   {time > 0 && !(isNull player)}, //Wait for player to be loaded
        FUNC(clientSetup)
    ] call CBA_fnc_waitUntilAndExecute;
  };
};
