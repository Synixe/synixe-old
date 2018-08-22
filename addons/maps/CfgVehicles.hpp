class CfgVehicles {
  class Man;
  class CAManBase: Man {
    class ACE_Actions {
      class ACE_MainActions {
        class Synixe_Map {
          displayName = "Map";
          icon = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_off_ca.paa";
          condition = "(_target call synixe_maps_fnc_canMapInteract) && {_target call synixe_maps_fnc_hasUniqueMap}";
          class Synixe_Map_Peek {
            displayName = "Peek";
            statement = "(_target call synixe_maps_fnc_getMap) call synixe_maps_fnc_peek";
          };
          class Synixe_Map_Copy {
            displayName = "Copy Markers";
            statement = "(_target call synixe_maps_fnc_getMap) call synixe_maps_fnc_copy";
          };
          class Synixe_Map_Take {
            displayName = "Take";
            condition = "!(alive _target)";
            statement = "_target call synixe_maps_fnc_take";
          };
        };
      };
    };
    class ACE_SelfActions {
      class Synixe_Map {
        displayName = "Get Unique Map";
        icon = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_off_ca.paa";
        condition = "(""itemMap"" in (assignedItems player)) && { !(ace_player call synixe_maps_fnc_hasUniqueMap) }";
        statement = "call synixe_maps_fnc_request";
      };
    };
  };

  /*class Thing;
  class ThingX: Thing {
    class ACE_Actions {
      class ACE_MainActions {
        codition = QUOTE(true);
        class Synixe_Map {
          displayName = "Map";
          icon = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_off_ca.paa";
          condition = "_target call synixe_maps_fnc_hasUniqueMap";
          class Synixe_Map_Peek {
            displayName = "Peek";
            statement = "(_target call synixe_maps_fnc_getMap) call synixe_maps_fnc_peek";
          };
          class Synixe_Map_Copy {
            displayName = "Copy Markers";
            statement = "(_target call synixe_maps_fnc_getMap) call synixe_maps_fnc_copy";
          };
          class Synixe_Map_Take {
            displayName = "Take";
            condition = "(_target isKindOf ""CAManBase"") && {!(alive _target)}";
            statement = "(_target call synixe_maps_fnc_getMap) call synixe_maps_fnc_take";
          };
        };
      };
    };
  };*/
};
