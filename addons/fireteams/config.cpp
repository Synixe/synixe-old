#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = COMPONENT;
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"ace_common", "synixe_main", "synixe_common"};
    author = "";
    authors[] = {"Brett"};
    authorUrl = "http://synixe.com";
    VERSION_CONFIG;
  };
};

#include "CfgEventHandlers.hpp"
