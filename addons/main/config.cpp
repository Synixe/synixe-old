#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = COMPONENT;
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"ace_common"};
    author = "";
    authors[] = {"Brett"};
    authorUrl = "http://synixe.com";
    VERSION_CONFIG;
  };
};

class Extended_DisplayLoad_EventHandlers {
  class RscCustomInfoMiniMap {
    synixe_nogps = "params ['_display']; { if (isNull objectParent ACE_player) then { _x ctrlShow false; } } forEach allControls _display;";
  };
};
