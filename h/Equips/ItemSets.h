#pragma once
#include <random>
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
	void randStats(bool byType, bool byBlock, bool trueRandom, std::mt19937 & prng);
	void write(std::fstream & fs);
	void getDefaults();
};