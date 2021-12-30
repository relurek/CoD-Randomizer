#pragma once
#include <vector>
#include "../Equips/T_Armor.h"
#include "../Util.h"

class DefaultArmor
{
public:
	ArmorSet getDefaultArmorSet(std::fstream & fs);
	ArmorSet getDefaultHelmetSet(std::fstream & fs);
};