#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = COMPONENT;
    requiredVersion = REQUIRED_VERSION;
    author = "";
    authors[] = {"Brett"};
    authorUrl = "http://synixe.com";
    VERSION_CONFIG;

    requiredAddons[] = { "A3_Weapons_F_Items", "A3_Characters_F", "A3_Data_F", "A3_Soft_F", "Taliban_fighters", "CuratorOnly_Characters_F_OPFOR", "rhsusf_c_troops", "A3_Characters_F_Exp", "A3_Characters_F_Orange", "rhs_c_troops", "A3_Characters_F_Tacops", "rhs_cti_insurgents", "A3_Characters_F_Tank_Uniforms", "ace_medical"};
    units[] = {};
    weapons[] = {};

  };
};

#include "CfgVehicles.hpp"
