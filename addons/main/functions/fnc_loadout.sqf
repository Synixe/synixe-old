#include "script_component.hpp"

params [
  ["_unit", objNull],
  ["_faction", 0]
];

_role = _unit getVariable ["SZT_ROLE", "Rifleman"];

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
};

[_unit] spawn {
  sleep 2;
  call FUNC(tfar);
  (_this select 0) call FUNC(earplugs);
  call FUNC(setFace);
};
