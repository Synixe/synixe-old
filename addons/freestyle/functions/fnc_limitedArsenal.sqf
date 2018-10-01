#include "\achilles\modules_f_ares\module_header.h"
#include "script_component.hpp"

private _position = position _logic;

private _factions = ["Canada (Woodland)", "Canada (Arid)", "Canada (Arctic)", "Police", "S.W.A.T."];

private _dialogResult = [
  "Limited Arsenal",
  [
    ["COMBOBOX", "Faction", _factions],
    ["COMBOBOX", "Allow SMGs", ["Yes", "No"]],
    ["COMBOBOX", "Allow Rifles", ["Yes", "No"]],
    ["COMBOBOX", "Allow LMGs", ["Yes", "No"]],
    ["COMBOBOX", "Allow Marksmen", ["Yes", "No"], 1],
    ["COMBOBOX", "Allow Suppressors", ["Yes", "No"]],
    ["COMBOBOX", "Allow AT", ["No AT", "LAT Only", "Allow AT"]],
    ["COMBOBOX", "Allow Explosives", ["No Explosives", "IED Only", "Allow Explosives"]]
  ]
] call Achilles_fnc_ShowChooseDialog;

if (_dialogResult isEqualTo []) exitWith {};

private _faction = _factions select (_dialogResult select 0);
private _smgs = (_dialogResult select 1) == 0;
private _rifles = (_dialogResult select 2) == 0;
private _lmgs = (_dialogResult select 3) == 0;
private _marksman = (_dialogResult select 4) == 0;
private _suppressors = (_dialogResult select 5) == 0;
private _at = _dialogResult select 6;
private _explosives = _dialogResult select 7;

private _items = [
  "Binocular", "ItemGPS", "ItemCompass", "ItemWatch",
  "ACE_Altimeter", "ACRE_PRC117F", "ACRE_PRC148", "ACRE_PRC343",
  "ACE_fieldDressing", "ACE_bloodIV", "ACE_bloodIV_250",
  "ACE_bloodIV_500", "ACE_CableTie", "ACE_epinephrine",
  "ACE_morphine", "ACE_EntrenchingTool", "ACE_EarPlugs",
  "ACE_IR_Strobe_Item", "ACE_Flashlight_XL50", "ACE_MapTools",
  "ACE_Tripod", "ToolKit", "ACE_wirecutter",
  "Chemlight_blue", "Chemlight_green", "ACE_Chemlight_HiOrange",
  "ACE_Chemlight_HiRed", "ACE_Chemlight_HiWhite", "ACE_Chemlight_HiYellow",
  "ACE_Chemlight_IR", "ACE_Chemlight_Orange", "Chemlight_red",
  "ACE_Chemlight_White", "Chemlight_yellow", "B_IR_Grenade",
  "SmokeShellBlue", "SmokeShellGreen", "SmokeShellOrange",
  "SmokeShellPurple", "SmokeShellRed", "SmokeShellYellow",
  "SmokeShell", "ace_acc_pointer_green", "acc_pointer_ir",
  "acc_flashlight", "bipod_01_f_blk", "bipod_01_f_mtp", "bipod_01_f_snd",
  "bipod_01_f_khk", "rhsusf_acc_harris_bipod", "acc_flashlight_pistol"
];

#include "arsenal_functions.sqf"

[_marksman, ["ACE_DAGR", "ACE_ATragMX", "ACE_Kestrel4500", "ACE_RangeCard"]] call FLAG_ADD_ITEMS;
[_suppressors, [SUPPRESSORS]] call FLAG_ADD_ITEMS;

switch (_faction) do {
  case "Canada (Woodland)": {
    [
      "U_CAF_uniform1_cadpatTW", "U_CAF_uniform2_cadpatTW", "U_CAF_uniform3_cadpatTW",
      "U_CAF_uniform1_MIX", "U_CAF_uniform2_MIX", "U_RCAF_146_HeliPilotCoveralls",
      "U_RCAF_147_HeliPilotCoveralls", "V_CAF_Chestrig_TW", "V_CAF_PlateCarrier1_TW",
      "TW_Armor", "TW_Armor_Heavy", "B_caf_AssualtPack_TW", "B_caf_Kitbag_TW",
      "B_CAF_Carryall_Medical", "B_caf_Bergen_TW", "H_CAF_WatchCap", "H_CAF_Boonie_TW",
      "H_CAF_Boonie_hs_TW", "HelmetTW", "H_CAF_CREWHELMET", "H_RCAF_CrewHelmetHeli",
      "H_RCAF_CrewHelmetHeli_01", "H_RCAF_CrewHelmetHeli_02", "H_RCAF_CrewHelmetHeli_03",
      "H_RCAF_PilotHelmetHeli", "optic_hamr", "optic_carryhandle", "optic_elcan3d",
      "optic_elcan", "optic_arco", NIGHT_VISION, RANGEFINDERS, GRENADES, FLASH_GRENADES
    ] call ADD_ITEMS;
    [_rifles, [
      "caf_C7A2", "caf_C7A2_M203", "caf_c8a3", "caf_c8a3_wood", "caf_c8a3_cqb", "caf_C8a3_cqb_wood",
      "caf_c8a3_M203", "caf_C8a3_M203_wood", "caf_muzzle_snds_556_wood"
    ]] call FLAG_ADD_WEAPONS;
    [_lmgs, ["caf_c9a2", "caf_C9A2_TW"]] call FLAG_ADD_WEAPONS;
    [_at == 1 || {_at == 2}, [
      "launch_MRAWS_green_rail_F", "launch_MRAWS_green_F", "rhs_weap_m72a7", "CAF_M2CG", "caf_m72a6"
    ]] call FLAG_ADD_WEAPONS;
    [_at == 2, ["launch_l_Titan_short_F"]] call FLAG_ADD_WEAPONS;
  };
  case "Canada (Arid)": {
    [
      "U_CAF_uniform1_cadpatAR", "U_CAF_uniform2_cadpatAR", "HelmetTW",
      "U_CAF_uniform1_MIX", "U_CAF_uniform2_MIX", "U_RCAF_146_HeliPilotCoveralls_AR",
      "U_RCAF_147_HeliPilotCoveralls_AR", "V_CAF_Chestrig_TW", "V_CAF_Chestrig_AR",
      "V_CAF_PlateCarrier1_TW", "V_CAF_PlateCarrier1_AR", "arid_Armor", "Arid_Armor_Heavy",
      "TW_Armor", "TW_Armor_Heavy", "B_caf_AssaultPack_TW", "B_caf_Kitbag_TW",
      "Compact_AR", "B_caf_AssaultPack_Ar", "arid_pack", "B_caf_Kitbag_AR",
      "B_CAF_Carryall_MEdical_AR", "B_caf_Bergen_AR", FLASH_GRENADES,
      "B_CAF_Carryall_Medical", "B_caf_Bergen_TW", "H_CAF_WatchCap",
      "Helmetarid", "H_CAF_CREWHELMET", "H_RCAF_CrewHelmetHeli",
      "H_RCAF_CrewHelmetHeli_01", "H_RCAF_CrewHelmetHeli_02", "H_RCAF_CrewHelmetHeli_03",
      "H_RCAF_PilotHelmetHeli", "optic_hamr", "optic_carryhandle", "optic_elcan3d",
      "optic_elcan", "optic_arco", NIGHT_VISION, RANGEFINDERS, GRENADES,
      "H_Cap_tan", "H_Booniehat_tan", "H_Watchcap_cbr"
    ] call ADD_ITEMS;
    [_rifles, [
      "caf_C7A2", "caf_C7A2_M203", "caf_C8a3_arid", "caf_C8a3_cqb_arid",
      "caf_C8a3_M203_arid", "caf_muzzle_snds_556_ar"
    ]] call FLAG_ADD_WEAPONS;
    [_lmgs, ["caf_C9A2_AR"]] call FLAG_ADD_WEAPONS;
    [_at == 1 || {_at == 2}, [
      "launch_MRAWS_sand_rail_F", "launch_MRAWS_sand_F", "rhs_weap_m72a7", "CAF_M2CG", "caf_m72a6"
    ]] call FLAG_ADD_WEAPONS;
    [_at == 2, ["launch_B_Titan_short_F"]] call FLAG_ADD_WEAPONS;
  };
  case "Canada (Arctic)": {
    [
      "CBU_uniform_winter_U", "CBU_armor_winter", "CBU_armor_winter_ep1",
      "Compact_AC", "winter_pack", "winter_Helmet", "H_CAF_CREWHELMET",
      "H_RCAF_CrewHelmetHeli", "H_RCAF_CrewHelmetHeli_01", "H_RCAF_CrewHelmetHeli_02",
      "H_RCAF_CrewHelmetHeli_03", "H_RCAF_PilotHelmetHeli", "optic_hamr",
      "optic_carryhandle", "optic_elcan3d", "optic_elcan", "optic_arco",
      NIGHT_VISION, RANGEFINDERS, GRENADES, FLASH_GRENADES
    ] call ADD_ITEMS;
    [_rifles, [
      "caf_C7A2", "caf_C7A2_M203", "caf_C8a3_artic", "caf_C8a3_cqb_artic",
      "caf_C8a3_M203_arctic", "caf_muzzle_snds_556_artic"
    ]] call FLAG_ADD_WEAPONS;
    [_lmgs, ["caf_C9A2_AC"]] call FLAG_ADD_WEAPONS;
    [_at == 1 || {_at == 2}, [
      "launch_MRAWS_green_rail_F", "launch_MRAWS_green_F", "rhs_weap_m72a7", "CAF_M2CG", "caf_m72a6"
    ]] call FLAG_ADD_WEAPONS;
    [_at == 2, ["launch_l_Titan_short_F"]] call FLAG_ADD_WEAPONS;
  };
  case "Police": {
    [
      "demian2435_pilot_helmet", "H_Cap_police", "demian2435_police_man_uniform",
      "V_TacVest_blk_POLICE", "demian2435_police_belt", "demian2435_police_vest",
      "demian2435_pilot_uniform", "G_Aviator", "rhsusf_acc_t1_low", "optic_holosight_blk_f",
      "rhsusf_acc_eotech_xps3", "optic_aco_grn_smg"
    ] call ADD_ITEMS;
    ["rhsusf_weap_glock17g4"] call ADD_WEAPONS;
    [_smgs, ["SMG_02_F"]] call FLAG_ADD_WEAPONS;
    [_rifles, ["rhs_weap_m4a1_carryhandle"]] call FLAG_ADD_WEAPONS;
  };
  case "S.W.A.T.": {
    [
      "demian2435_pilot_uniform", "demian2435_pilot_helmet", "demain2435_swat_leader_uniform",
      "demian2435_swat_man_uniform", FLASH_GRENADES, "demian2435_swat_vest",
      "demian2435_swat_leader_vest", "B_AssaultPack_blk", "demian2435_swat_helmet",
      "demian2435_swat_leader", "rhsusf_acc_t1_low", "optic_holosight_blk_f",
      "rhsusf_acc_eotech_xps3", "optic_aco_grn_smg"
    ] call ADD_ITEMS;
    [_marksman, [
      "demian2435_swat_sniper_uniform", "demian2435_sniper_vest", "demian2435_sniper_cap",
      "arifle_SPAR_03_blk_F", "rhsusf_acc_acog_mdo"
    ]] call FLAG_ADD_ITEMS;
    ["rhsusf_weap_glock17g4"] call ADD_WEAPONS;
    [_smgs, ["SMG_02_F"]] call FLAG_ADD_WEAPONS;
    [_rifles, ["rhs_weap_m4a1_carryhandle"]] call FLAG_ADD_WEAPONS;
  };
};
private _box = "Land_PaperBox_open_full_F" createVehicle _position;
[_box, _items] call ace_arsenal_fnc_initBox;

#include "\achilles\modules_f_ares\module_footer.h"
