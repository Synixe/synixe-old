/*
 * Author: Brett
 * Sets a unit loadout based on the faction passed
 *
 * Arguments:
 * 0: _unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, 1] call synixe_main_fnc_loadout
 *
 * Public: Yes
 */

#include "script_component.hpp"

params [
  ["_unit", objNull],
  ["_faction", 0]
];

private _role = _unit getVariable ["SZT_ROLE", "Rifleman"];

switch (_faction) do {
  case 0: //NATO
  {
    switch (_role) do {
      case "Autorifleman":
      {
        _unit setUnitLoadout [["arifle_MX_Hamr_pointer_F","","acc_pointer_IR","optic_Hamr",["30Rnd_65x39_caseless_mag",30],[],""],[],["hgun_P07_F","","","",["16Rnd_9x21_Mag",17],[],""],["U_B_CombatUniform_mcam",[["30Rnd_65x39_caseless_mag",2,30]]],["V_PlateCarrier2_rgr",[["ACE_fieldDressing",6],["ACE_morphine",3],["30Rnd_65x39_caseless_mag",1,30],["30Rnd_65x39_caseless_mag_Tracer",2,30],["16Rnd_9x21_Mag",2,17],["HandGrenade",4,1],["B_IR_Grenade",2,1],["SmokeShell",1,1],["SmokeShellGreen",1,1],["SmokeShellBlue",1,1],["SmokeShellOrange",1,1],["Chemlight_green",2,1]]],["B_Carryall_mcamo",[["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_CableTie",2],["ACE_bloodIV",10],["ACE_bloodIV_500",5],["ACE_bloodIV_250",5],["ACE_fieldDressing",50],["ACE_morphine",40],["ACE_bodyBag",2],["ACE_epinephrine",20]]],"H_HelmetB_desert","",["Binocular","","","",[],[],""],["ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles"]];
      };
      case "Medic":
      {
        _unit setUnitLoadout [["arifle_MX_Hamr_pointer_F","","acc_pointer_IR","optic_Hamr",["30Rnd_65x39_caseless_mag",30],[],""],[],["hgun_P07_F","","","",["16Rnd_9x21_Mag",17],[],""],["U_B_CombatUniform_mcam",[["30Rnd_65x39_caseless_mag",2,30]]],["V_PlateCarrier2_rgr",[["ACE_fieldDressing",6],["ACE_morphine",3],["30Rnd_65x39_caseless_mag",1,30],["30Rnd_65x39_caseless_mag_Tracer",2,30],["16Rnd_9x21_Mag",2,17],["HandGrenade",4,1],["B_IR_Grenade",2,1],["SmokeShell",1,1],["SmokeShellGreen",1,1],["SmokeShellBlue",1,1],["SmokeShellOrange",1,1],["Chemlight_green",2,1]]],["B_Carryall_mcamo",[["ACE_MapTools",1],["ACE_Flashlight_XL50",1],["ACE_CableTie",2],["ACE_bloodIV",10],["ACE_bloodIV_500",5],["ACE_bloodIV_250",5],["ACE_fieldDressing",50],["ACE_morphine",40],["ACE_bodyBag",2],["ACE_epinephrine",20]]],"H_HelmetB_desert","",["Binocular","","","",[],[],""],["ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles"]];
      };
      case "Rifleman (AT)":
      {
        _unit setUnitLoadout [["arifle_MXC_Holo_pointer_F","","acc_pointer_IR","optic_Holosight",["30Rnd_65x39_caseless_mag",30],[],""],["launch_B_Titan_short_F","","","",["Titan_AT",1],[],""],["hgun_P07_F","","","",["16Rnd_9x21_Mag",17],[],""],["U_B_CombatUniform_mcam",[["30Rnd_65x39_caseless_mag",2,30]]],["V_PlateCarrier1_rgr",[["30Rnd_65x39_caseless_mag",3,30],["16Rnd_9x21_Mag",2,17],["SmokeShell",1,1],["SmokeShellGreen",1,1],["Chemlight_green",2,1]]],["B_AssaultPack_mcamo_AT",[["Titan_AT",2,1]]],"H_HelmetB_light_desert","G_Combat",[],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles"]];
      };
      case "Rifleman (LAT)":
      {
        _unit setUnitLoadout [["arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",["30Rnd_65x39_caseless_mag",30],[],""],["rhs_weap_M136","","","",["rhs_m136_mag",1],[],""],["hgun_P07_F","","","",["16Rnd_9x21_Mag",17],[],""],["U_B_CombatUniform_mcam",[["30Rnd_65x39_caseless_mag",2,30]]],["V_PlateCarrier2_rgr",[["30Rnd_65x39_caseless_mag",3,30],["16Rnd_9x21_Mag",2,17],["SmokeShell",1,1],["SmokeShellGreen",1,1],["Chemlight_green",2,1]]],[],"H_HelmetB_sand","",[],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles"]];
      };
      case "Rifleman";
      default
      {
        _unit setUnitLoadout [["arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",["30Rnd_65x39_caseless_mag",30],[],""],[],["hgun_P07_F","","","",["16Rnd_9x21_Mag",17],[],""],["U_B_CombatUniform_mcam",[["30Rnd_65x39_caseless_mag",2,30]]],["V_PlateCarrier1_rgr",[["30Rnd_65x39_caseless_mag",7,30],["16Rnd_9x21_Mag",2,17],["SmokeShell",1,1],["SmokeShellGreen",1,1],["Chemlight_green",2,1],["HandGrenade",2,1]]],[],"H_HelmetB","G_Combat",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles"]];
      };
    }
  };
  case 1: //Police
  {
    switch (_role) do {
      case "Armed Officer":
      {
        _unit setUnitLoadout [["rhs_weap_m4_carryhandle","","","rhsusf_acc_eotech_xps3",["rhs_mag_30Rnd_556x45_M855_Stanag",30],[],""],[],["rhsusf_weap_glock17g4","","acc_flashlight_pistol","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["demian2435_police_man_uniform",[["ACE_fieldDressing",2],["ACE_morphine",2],["rhs_mag_30Rnd_556x45_M855_Stanag",2,30],["rhsusf_mag_17Rnd_9x19_JHP",2,17]]],["demian2435_police_vest",[["ACE_fieldDressing",4],["ACE_morphine",4],["ACE_CableTie",10],["rhsusf_mag_17Rnd_9x19_JHP",4,17],["rhs_mag_30Rnd_556x45_M855_Stanag",6,30]]],[],"H_Cap_police","",[],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch",""]];
      };
      case "Police Pilot": {
        _unit setUnitLoadout [[],[],["rhsusf_weap_glock17g4","","acc_flashlight_pistol","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["demian2435_pilot_uniform",[["ACE_fieldDressing",2],["ACE_morphine",2],["ACE_CableTie",2],["rhsusf_mag_17Rnd_9x19_JHP",5,17]]],[],[],"demian2435_pilot_helmet","",["Binocular","","","",[],[],""],["ItemMap","ItemGPS","TFAR_rf7800str","ItemCompass","ItemWatch",""]];
      };
      case "SWAT":
      {
        _unit setUnitLoadout [["rhs_weap_m4_carryhandle","","rhsusf_acc_anpeq15_bk","ACE_optic_Hamr_PIP",["rhs_mag_30Rnd_556x45_M855_Stanag",30],[],""],[],["rhsusf_weap_glock17g4","","acc_flashlight_pistol","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["demian2435_swat_man_uniform",[["ACE_fieldDressing",2],["ACE_morphine",2],["ACE_CableTie",2],["rhs_mag_30Rnd_556x45_M855_Stanag",2,30],["rhsusf_mag_17Rnd_9x19_JHP",2,17]]],["demian2435_swat_vest",[["ACE_fieldDressing",4],["ACE_morphine",4],["SmokeShell",2,1],["rhs_mag_30Rnd_556x45_M855_Stanag",6,30],["rhsusf_mag_17Rnd_9x19_JHP",4,17]]],[],"demian2435_swat_helmet","G_Tactical_Clear",[],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch",""]];
      };
      case "Rifleman";
      case "Police Officer";
      default
      {
        _unit setUnitLoadout [[],[],["rhsusf_weap_glock17g4","","acc_flashlight_pistol","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["demian2435_police_man_uniform",[["ACE_fieldDressing",2],["ACE_morphine",2],["rhsusf_mag_17Rnd_9x19_JHP",5,17]]],["demian2435_police_belt",[["ACE_fieldDressing",2],["ACE_CableTie",5],["ACE_morphine",2],["rhsusf_mag_17Rnd_9x19_JHP",5,17]]],[],"H_Cap_police","",[],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch",""]];
      };
    }
  };
  case 2: //CADPAT TW
  {
    switch (_role) do {
      case "Medic":
      {
        _unit setUnitLoadout [["caf_C8a3_wood","","","optic_elcan3d",["30Rnd_556X45_NATO",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform1_cadpatTW",[["ACE_CableTie",2],["30Rnd_556X45_NATO",4,30],["rhsusf_mag_15Rnd_9x19_JHP",1,15]]],["V_CAF_PlateCarrier1_TW",[["SmokeShell",20,1],["SmokeShellBlue",5,1],["30Rnd_556X45_NATO",6,30]]],["B_CAF_Carryall_Medical",[["ACE_fieldDressing",60],["ACE_bloodIV",10],["ACE_bloodIV_500",5],["ACE_bloodIV_250",5],["ACE_bodyBag",2],["ACE_epinephrine",20],["ACE_morphine",40],["ACE_HandFlare_Red",1,1],["ACE_HandFlare_Green",1,1]]],"HelmetTW","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles_INDEP"]];
      };
      case "Rifleman (LAT)":
      {
        _unit setUnitLoadout [["caf_C8a3_wood","","","optic_elcan3d",["30Rnd_556X45_NATO",30],[],""],["rhs_weap_m72a7","","","",["rhs_m72a7_mag",1],[],""],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform2_cadpatTW",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_TW",[["ACE_fieldDressing",4],["ACE_morphine",2],["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",10,30]]],[],"HelmetTW","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles_INDEP"]];
      };
      case "Rifleman (AT)":
      {
        _unit setUnitLoadout [["caf_C8a3_wood","","","optic_elcan3d",["30Rnd_556X45_NATO",30],[],""],["launch_I_Titan_short_F","","","",["Titan_AT",1],[],""],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform2_cadpatTW",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_TW",[["ACE_fieldDressing",4],["ACE_morphine",2],["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",10,30]]],["B_caf_Kitbag_TW",[["Titan_AT",2,1],["Titan_AP",1,1]]],"HelmetTW","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles_INDEP"]];
      };
      case "Autorifleman":
      {
        _unit setUnitLoadout [["caf_C9A2_TW","","","optic_elcan_wood",["200Rnd_556x45_Belt",200],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform1_cadpatTW",[["ACE_fieldDressing",6],["ACE_morphine",3],["rhsusf_mag_15Rnd_9x19_JHP",2,15]]],["V_CAF_PlateCarrier1_TW",[["SmokeShell",2,1],["HandGrenade",4,1],["200Rnd_556x45_Belt",3,200]]],["B_caf_AssaultPack_TW",[["200Rnd_556x45_Belt",5,200]]],"HelmetTW","",["ACE_VectorDay","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles_INDEP"]];
      };
      case "Grenadier":
      {
        _unit setUnitLoadout [["caf_C8a3_203_wood","","","optic_elcan3d",["30Rnd_556X45_NATO",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform2_cadpatTW",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_TW",[["ACE_fieldDressing",4],["ACE_morphine",2],["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",11,30]]],["B_caf_AssaultPack_TW",[["ACE_HuntIR_monitor",1],["1Rnd_HE_Grenade_shell",20,1],["UGL_FlareGreen_F",2,1],["UGL_FlareRed_F",1,1],["UGL_FlareCIR_F",1,1],["1Rnd_Smoke_Grenade_shell",4,1],["1Rnd_SmokeBlue_Grenade_shell",1,1],["1Rnd_SmokeRed_Grenade_shell",1,1],["ACE_HuntIR_M203",4,1]]],"HelmetTW","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles_INDEP"]];
      };
      case "Engineer":
      {
        _unit setUnitLoadout [["caf_C8a3_wood","","","optic_elcan3d",["30Rnd_556X45_NATO",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform2_cadpatTW",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_TW",[["ACE_fieldDressing",4],["ACE_morphine",2],["MineDetector",1],["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",8,30]]],["B_caf_Bergen_TW",[["ACE_M26_Clacker",1],["ToolKit",1],["ACE_DefusalKit",1],["DemoCharge_Remote_Mag",8,1]]],"HelmetTW","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles_INDEP"]];
      };
      case "Rifleman";
      default
      {
        _unit setUnitLoadout [["caf_C8a3_wood","","","optic_elcan3d",["30Rnd_556X45_NATO",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform2_cadpatTW",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_TW",[["ACE_fieldDressing",4],["ACE_morphine",2],["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",10,30]]],[],"HelmetTW","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles_INDEP"]];
      };
    };
  };
  case 3: //CADPAT AR
  {
    switch (_role) do {
      case "Medic":
      {
        _unit setUnitLoadout [["caf_C8a3_arid","","","optic_elcan_arid",["30Rnd_556X45_NATO",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform1_cadpatAR",[["ACE_CableTie",2],["30Rnd_556X45_NATO",4,30],["rhsusf_mag_15Rnd_9x19_JHP",1,15]]],["V_CAF_PlateCarrier1_AR",[["SmokeShell",20,1],["SmokeShellBlue",5,1],["30Rnd_556X45_NATO",6,30]]],["B_CAF_Carryall_MEdical_AR",[["ACE_fieldDressing",60],["ACE_bloodIV",10],["ACE_bloodIV_500",5],["ACE_bloodIV_250",5],["ACE_bodyBag",2],["ACE_epinephrine",20],["ACE_morphine",40],["ACE_HandFlare_Red",1,1],["ACE_HandFlare_Green",1,1]]],"Helmetarid","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles"]];
      };
      case "Rifleman (LAT)":
      {
        _unit setUnitLoadout [["caf_C8a3_arid","","","optic_elcan_arid",["30Rnd_556X45_NATO",30],[],""],["rhs_weap_m72a7","","","",["rhs_m72a7_mag",1],[],""],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform2_cadpatAR",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_AR",[["ACE_fieldDressing",4],["ACE_morphine",2],["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",10,30]]],[],"Helmetarid","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles"]];
      };
      case "Rifleman (AT)":
      {
        _unit setUnitLoadout [["caf_C8a3_arid","","","optic_elcan_arid",["30Rnd_556X45_NATO",30],[],""],["launch_B_Titan_short_F","","","",["Titan_AT",1],[],""],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform2_cadpatAR",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_AR",[["ACE_fieldDressing",4],["ACE_morphine",2],["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",10,30]]],["B_caf_KitBag_AR",[["Titan_AT",2,1],["Titan_AP",1,1]]],"Helmetarid","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles"]];
      };
      case "Autorifleman":
      {
        _unit setUnitLoadout [["caf_C9A2_AR","","","optic_elcan_arid",["200Rnd_556x45_Belt",200],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform1_cadpatAR",[["ACE_fieldDressing",6],["ACE_morphine",3],["rhsusf_mag_15Rnd_9x19_JHP",2,15]]],["V_CAF_PlateCarrier1_AR",[["SmokeShell",2,1],["HandGrenade",4,1],["200Rnd_556x45_Belt",3,200]]],["B_caf_AssaultPack_AR",[["200Rnd_556x45_Belt",5,200]]],"Helmetarid","",["ACE_VectorDay","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles"]];
      };
      case "Grenadier":
      {
        _unit setUnitLoadout [["caf_C8a3_203_arid","","","optic_elcan_arid",["30Rnd_556X45_NATO",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform2_cadpatAR",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_AR",[["ACE_fieldDressing",4],["ACE_morphine",2],["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",11,30]]],["B_caf_AssaultPack_AR",[["ACE_HuntIR_monitor",1],["1Rnd_HE_Grenade_shell",19,1],["UGL_FlareGreen_F",2,1],["UGL_FlareRed_F",1,1],["UGL_FlareCIR_F",1,1],["1Rnd_Smoke_Grenade_shell",4,1],["1Rnd_SmokeBlue_Grenade_shell",1,1],["1Rnd_SmokeRed_Grenade_shell",1,1],["ACE_HuntIR_M203",4,1]]],"Helmetarid","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles"]];
      };
      case "Engineer":
      {
        _unit setUnitLoadout [["caf_C8a3_arid","","","optic_elcan_arid",["30Rnd_556X45_NATO",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform2_cadpatAR",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_AR",[["ACE_fieldDressing",4],["ACE_morphine",2],["MineDetector",1],["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",8,30]]],["B_caf_Bergen_AR",[["ACE_M26_Clacker",1],["ToolKit",1],["ACE_DefusalKit",1],["DemoCharge_Remote_Mag",8,1]]],"Helmetarid","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles"]];
      };
      case "Rifleman";
      default
      {
        _unit setUnitLoadout [["caf_C8a3_arid","","","optic_elcan_arid",["30Rnd_556X45_NATO",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_JHP",15],[],""],["U_CAF_uniform2_cadpatAR",[["ACE_fieldDressing",6],["ACE_morphine",3],["SmokeShell",1,1],["Chemlight_green",1,1],["30Rnd_556X45_NATO",3,30]]],["V_CAF_PlateCarrier1_AR",[["ACE_fieldDressing",4],["ACE_morphine",2],["SmokeShell",2,1],["Chemlight_yellow",1,1],["HandGrenade",3,1],["SmokeShellBlue",1,1],["rhsusf_mag_15Rnd_9x19_JHP",2,15],["30Rnd_556X45_NATO",10,30]]],[],"Helmetarid","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","NVGoggles"]];
      };
    };
  };
  case 4: //United States (Woodland)
  {
    switch (_role) do {
      case "Medic":
      {
        _unit setUnitLoadout [["rhs_m4_compm4","","","rhsusf_acc_ACOG2_USMC",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],["rhsusf_weap_m9","","","",["rhsusf_mag_15Rnd_9x19_FMJ",15],[],""],["rhs_uniform_cu_ucp",[["FirstAidKit",1]]],["rhsusf_iotv_ucp_Medic",[["rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30],["rhsusf_mag_15Rnd_9x19_FMJ",2,15],["rhs_mag_m18_red",1,1]]],["rhsusf_assault_eagleaiii_ucp",[["ACE_bloodIV",6],["ACE_bloodIV_500",2],["ACE_bloodIV_250",2],["ACE_fieldDressing",40],["ACE_epinephrine",15],["ACE_morphine",30]]],"rhsusf_ach_helmet_ucp","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","rhsusf_ANPVS_15"]];
      };
      case "Rifleman (AT)":
      {
        _unit setUnitLoadout [["rhs_weap_m4","","","rhsusf_acc_ACOG2_USMC",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],["launch_O_Titan_short_F","","","",["Titan_AT",1],[],""],[],["rhs_uniform_cu_ucp",[["ACE_fieldDressing",6],["ACE_morphine",3],["rhs_mag_30Rnd_556x45_M855_Stanag",2,30]]],["rhsusf_iotv_ucp_Rifleman",[["rhs_mag_m67",2,1],["rhs_mag_30Rnd_556x45_M855_Stanag",10,30]]],["rhsusf_assault_eagleaiii_ucp",[["Titan_AT",1,1],["Titan_AP",1,1]]],"rhsusf_ach_helmet_ucp","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","rhsusf_ANPVS_15"]];
      };
      case "Rifleman (LAT)":
      {
        _unit setUnitLoadout [["rhs_weap_m4","","","rhsusf_acc_ACOG2_USMC",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],["rhs_weap_m72a7","","","",["rhs_m72a7_mag",1],[],""],[],["rhs_uniform_cu_ucp",[["ACE_fieldDressing",6],["ACE_morphine",3],["rhs_mag_30Rnd_556x45_M855_Stanag",2,30]]],["rhsusf_iotv_ucp_Rifleman",[["rhs_mag_m67",2,1],["rhs_mag_30Rnd_556x45_M855_Stanag",10,30]]],[],"rhsusf_ach_helmet_ucp","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","rhsusf_ANPVS_15"]];
      };
      case "Autorifleman":
      {
        _unit setUnitLoadout [["rhs_weap_m249_pip_elcan","","","rhsusf_acc_ELCAN_ard",["rhsusf_100Rnd_556x45_soft_pouch",100],[],""],[],[],["rhs_uniform_cu_ucp",[["ACE_fieldDressing",6],["ACE_morphine",3],["rhs_mag_m67",1,1]]],["rhsusf_iotv_ucp_SAW",[["rhsusf_100Rnd_556x45_soft_pouch",2,100],["rhs_mag_m67",1,1]]],["rhsusf_assault_eagleaiii_ucp_ar",[["rhsusf_100Rnd_556x45_soft_pouch",4,100],["rhs_200rnd_556x45_T_SAW",1,200]]],"rhsusf_ach_helmet_ucp","rhs_googles_black",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","rhsusf_ANPVS_15"]];
      };
      case "Grenadier":
      {
        _unit setUnitLoadout [["rhs_weap_m4_m203","","","rhsusf_acc_ACOG2_USMC",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],[],["rhs_uniform_cu_ucp",[["ACE_fieldDressing",6],["ACE_morphine",3],["rhs_mag_30Rnd_556x45_M855_Stanag",3,30]]],["rhsusf_iotv_ucp_Rifleman",[["ACE_HuntIR_monitor",1],["rhs_mag_m67",2,1],["ACE_HuntIR_M203",2,1],["rhs_mag_M441_HE",4,1],["rhs_mag_30Rnd_556x45_M855_Stanag",7,30]]],[],"rhsusf_ach_helmet_ucp","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","rhsusf_ANPVS_15"]];
      };
      case "Engineer":
      {
        _unit setUnitLoadout [["rhs_weap_m4","","","rhsusf_acc_ACOG2_USMC",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],[],["rhs_uniform_cu_ucp",[["ACE_fieldDressing",6],["ACE_morphine",3],["rhs_mag_30Rnd_556x45_M855_Stanag",2,30]]],["rhsusf_iotv_ucp_Rifleman",[["MineDetector",1],["rhs_mag_m67",2,1],["rhs_mag_30Rnd_556x45_M855_Stanag",10,30]]],["rhsusf_assault_eagleaiii_ucp",[["ACE_M26_Clacker",1],["ACE_DefusalKit",1],["DemoCharge_Remote_Mag",6,1]]],"rhsusf_ach_helmet_ucp","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","rhsusf_ANPVS_15"]];
      };
      case "Rifleman";
      default
      {
        _unit setUnitLoadout [["rhs_weap_m4","","","rhsusf_acc_ACOG2_USMC",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],""],[],[],["rhs_uniform_cu_ucp",[["ACE_fieldDressing",6],["ACE_morphine",3],["rhs_mag_30Rnd_556x45_M855_Stanag",2,30]]],["rhsusf_iotv_ucp_Rifleman",[["rhs_mag_m67",2,1],["rhs_mag_30Rnd_556x45_M855_Stanag",10,30]]],[],"rhsusf_ach_helmet_ucp","",["Binocular","","","",[],[],""],["ItemMap","","TFAR_rf7800str","ItemCompass","ItemWatch","rhsusf_ANPVS_15"]];
      };
    };
  };
};

if (_role == "Engineer") then {
  _unit setVariable ["ACE_IsEngineer", 1, true];
} else {
  _unit setVariable ["ACE_IsEngineer", 0, true];
};

if (_role == "Medic") then {
  _unit setVariable ["ACE_IsMedic", 1, true];
  _unit setVariable ["Ace_medical_medicClass", 1, true];
} else {
  _unit setVariable ["ACE_IsMedic", 0, true];
  _unit setVariable ["Ace_medical_medicClass", 0, true];
};

[_unit] spawn {
  sleep 2;
  call FUNC(tfar);
  (_this select 0) call FUNC(earplugs);
  call FUNC(setFace);
};
