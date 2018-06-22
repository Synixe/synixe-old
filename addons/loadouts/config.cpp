#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"synixe_main", "synixe_common"};
        author = "Kalthramis";
        authors[] = {""};
        VERSION_CONFIG;
    };
};
#define STANDARD_KIT_MEDICAL "FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"

#define STANDARD_KIT(COLOR) "MiniGrenade","ACE_MapTools","ACE_Flashlight_XL50","SmokeShell","SmokeShell",QUOTE(Chemlight_##COLOR)
 
#include "SynixeCfgVehicles.hpp"
//#include "_WEST.hpp"
//#include "_IND.hpp"
