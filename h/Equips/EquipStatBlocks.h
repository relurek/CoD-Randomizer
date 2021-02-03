#pragma once
#include <algorithm>
#include <cstdint>
#include <vector>
#include "Util.h"

struct EquipStatBlock
{
	uint32_t name;
	uint32_t disc;
	uint32_t recipe;
	uint32_t value;
	uint32_t sell;
	int32_t str;
	int32_t con;
	int32_t luk;
	int32_t atk;
	int32_t def;
	int32_t poisonRes;	int32_t curseRes;	int32_t stoneRes;	int32_t paralyzeRes;
	int32_t fireRes;	int32_t iceRes;		int32_t thunderRes;	int32_t windRes;
	int32_t earthRes;	int32_t lightRes;	int32_t darkRes;
};
struct WeaponStatAdds
{
	uint32_t skill;
	uint32_t animSpeed;
};

using EquipStatSet = std::vector<std::pair<EquipStatBlock, WeaponStatAdds>>;

class EquipStatBlockOperations
{
public:
	////// StatBlock Handlers //////
	EquipStatSet buildWeaponStatBlocks(const WeaponSet & wep);
	void commitWeaponStatBlocks(const EquipStatSet & in, WeaponSet & wep);

	EquipStatSet buildArmorStatBlocks(const ArmorSet & body, const ArmorSet & helm);
	void commitArmorStatBlocks(const EquipStatSet & in, ArmorSet & body, ArmorSet & helm);

	EquipStatSet buildAllStatBlocks(const WeaponSet & wep, const ArmorSet & body, const ArmorSet & helm);
	void commitAllStatBlocks(const EquipStatSet & in, WeaponSet & wep, ArmorSet & body, ArmorSet & helm);
	////// StatBlock Handlers //////
	

	////// Shuffling Shuffling //////
	void shuffleBlocks(EquipStatSet & in);
	void shuffleAllBlocks(EquipStatSet & all);
};