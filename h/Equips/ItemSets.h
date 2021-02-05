#pragma once
#include <vector>
#include "EquipStatBlocks.h"
#include "../Util.h"

// ItemSets contains functionality for operations that involve the manipulation of equip items themselves (not their placement throughout the game)
// Implementation for these functions is split throughout:	StatBlocks.h
//															EquipRandomization.h
class ItemSets
{
public:
	WeaponSet wep;
	ArmorSet body;
	ArmorSet helm;

	ItemSets() {}

	////// Drivers //////
	void randStats(bool byType, bool byBlock, bool trueRandom);
	void getDefaults();
	void write(std::fstream & fs);

private:
	////// Randomization Specifiers //////
	void randAllStats(bool byBlock);
	void randWeaponStats(bool byBlock);
	void randArmorStats(bool byBlock);
};