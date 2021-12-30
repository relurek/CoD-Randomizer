#pragma once
#include <vector>
#include "../Equips/T_Weapon.h"
#include "../Util.h"

class DefaultWeapons
{
public:
	WeaponSet getDefaultWeaponSet(std::fstream & fs);
};