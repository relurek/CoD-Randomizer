#pragma once
#include "EquipStatBlocks.h"
#include "../Util.h"


class EquipRandomization
{
public:
	void randomizeWeapons(EquipStatSet & wep);
	void randomizeArmor(EquipStatSet & arm);
	void randomizeAll(EquipStatSet & all);
};