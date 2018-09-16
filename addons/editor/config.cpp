#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = COMPONENT_NAME;
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"synixe_common", "synixe_main"};
    author = "";
    authors[] = {""};
    VERSION_CONFIG;
  };
};

#include "CfgEventHandlers.hpp"

class ctrlMenuStrip;
class display3DEN {
	class Controls {
		class MenuStrip: ctrlMenuStrip {
			class Items {
				class Synixe_Tools {
					text = "Synixe";
					items[] += {"Synixe_Tool_SetupMission", "Synixe_Tool_CreateZeus"};
				};
				class Synixe_Tool_SetupMission {
					text = "Set Mission Settings";
          action = QUOTE(call FUNC(setMissionSettings));
				};
        class Synixe_Tool_CreateZeus {
					text = "Create Zeus Modules";
          action = QUOTE(call FUNC(createZeusModules));
				};
			};
		};
	};
};
