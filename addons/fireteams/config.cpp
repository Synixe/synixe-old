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

class Cfg3DEN {
	class Mission {
		class SynixeAttributes {
			class AttributeCategories {
				class SynixeRadiosCategory {
          displayName = "Radios";
					class Attributes {
            class SynixeRadioReceive {
              displayName = "Receive Radios";
              tooltip = "If checked, all players will receive the default radios";
              control = "Checkbox";
              property = "synixe_fireteams_receiveRadios";
              defaultValue = "true";
              expression = "";
            };
						class SynixeRadioPreset {
              displayName = "Radio Preset";
							property = "synixe_fireteams_radioPreset";
              control = "Edit";
              tooltip = "ACRE Radio Preset";
              expression = "";
              typeName = "STRING";
              validate = "none";
              defaultValue = """default""";
						};
            class SynixeRadioSingleSquad {
              displayName = "Single Squadnet";
              property = "synixe_fireteams_singleSquadnet";
              control = "Checkbox";
              tooltip = "All 148s will start on the same channel";
              defaultValue = "false";
              expression = "";
            };
					};
				};
			};
		};
	};
};
