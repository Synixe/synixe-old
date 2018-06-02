#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"synixe_main", "synixe_common"};
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
