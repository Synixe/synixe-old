ADD_ITEMS = {
  {
    _items pushBack _x;
  } forEach _this;
};

FLAG_ADD_ITEMS = {
  params ["_flag", "_array"];
  if (_flag) then {
    _array call ADD_ITEMS;
  };
};

ADD_WEAPONS = {
  {
    _items pushBack _x;
    { _items pushBack _x; } forEach getArray (configFile >> "CfgWeapons" >> _x >> "magazines");
  } forEach _this;
};

FLAG_ADD_WEAPONS = {
  params ["_flag", "_array"];
  if (_flag) then {
    _array call ADD_WEAPONS;
  };
};

#define NIGHT_VISION "NVGoggles","NVGoggles_OPFOR","NVGoggles_INDEP","rhsusf_ANPVS_14","NVGogglesB_grn_F"
#define RANGEFINDERS "Laserdesignatior","Rangefinder","Laserdesignatior_03","ACE_Vector","ACE_VectorDay"

#define GRENADES "HandGrenade","MiniGrenade","ACE_M14"
#define FLASH_GRENADES "ACE_M84"

#define SUPPRESSORS "muzzle_snds_l","muzzle_snds_h","muzzle_snds_b","ace_muzzle_mzls_h"
