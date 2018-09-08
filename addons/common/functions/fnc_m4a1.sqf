private _items = primaryWeaponItems player;
player addWeapon "Synixe_Brett_M4A1";
{
  player addPrimaryWeaponItem _x;
} forEach _items;
