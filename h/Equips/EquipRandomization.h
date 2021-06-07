#pragma once
#include <random>
#include "EquipStatBlocks.h"
#include "../Util.h"


class EquipRandomization
{
public:
	void randomizeWeapons(EquipStatSet & wep, std::mt19937 & prng);
	void randomizeArmor(EquipStatSet & arm, std::mt19937 & prng);
	void randomizeAll(EquipStatSet & all, std::mt19937 & prng);
};