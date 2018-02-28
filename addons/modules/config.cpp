#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"Synixe_Module_Loadout", "Synixe_Module_Earplugs"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"synixe_main", "achilles_modules_f_ares"};
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

class CfgFactionClasses {
  class NO_CATEGORY;
  class SYNIXE: NO_CATEGORY {
    displayName = "Synixe";
  };
};

class CfgVehicleClasses {
  class SYNIXE_Vehicles {
    displayName = "Synixe Vehicles";
  };
};

#include "CfgVehiclesModules.hpp"