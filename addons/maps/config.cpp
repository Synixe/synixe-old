#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = COMPONENT;
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"ace_common", "ace_markers", "synixe_main", "synixe_common"};
    author = "";
    authors[] = {"Brett"};
    authorUrl = "http://synixe.com";
    VERSION_CONFIG;
  };
};

class RscDisplayInsertMarker {
  onLoad = "_this call ace_markers_fnc_initInsertMarker; _this call synixe_maps_fnc_checkPeek;";
  onUnload = "_this call synixe_maps_fnc_placeMarker;";
};

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
