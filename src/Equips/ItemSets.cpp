#include <algorithm>
#include <cassert>
#include "../../h/DefaultTables/DefaultWeapons.h"
#include "../../h/DefaultTables/DefaultArmor.h"
#include "../../h/Equips/EquipRandomization.h"
#include "../../h/Equips/ItemSets.h"
#include "../../h/Equips/EquipStatBlocks.h"


void randWeaponStats(bool byBlock, WeaponSet * wep, std::mt19937 & prng)
{
	EquipStatBlockOperations statOp;
	EquipRandomization eqOp;
		
	EquipStatSet blocks = statOp.generate(wep, nullptr, nullptr);

	if (byBlock)
		statOp.shuffleBlocks(blocks, prng);
	else
		eqOp.randomizeWeapons(blocks, prng);

	statOp.commit(blocks, wep, nullptr, nullptr);
}
void randArmorStats(bool byBlock, ArmorSet * body, ArmorSet * helm, std::mt19937 & prng)
{
	EquipStatBlockOperations statOp;
	EquipRandomization eqOp;

	EquipStatSet armBlocks = statOp.generate(nullptr, body, helm);

	if (byBlock)
		statOp.shuffleBlocks(armBlocks, prng);
	else
		eqOp.randomizeArmor(armBlocks, prng);

	statOp.commit(armBlocks, nullptr, body, helm);
}
void randAllStats(bool byBlock, WeaponSet * wep, ArmorSet * body, ArmorSet * helm, std::mt19937 & prng)
{
	EquipStatBlockOperations statOp;
	EquipRandomization eqOp;

	EquipStatSet blocks = statOp.generate(wep, body, helm);

	if (byBlock)
		statOp.shuffleAllBlocks(blocks, prng);
	else
		eqOp.randomizeAll(blocks, prng);

	statOp.commit(blocks, wep, body, helm);
}


/// Drivers ///
void ItemSets::randStats(bool byType, bool byBlock, bool trueRandom, std::mt19937 & prng)
{
	if (byType)
	{
		if (!trueRandom)
		{
			randWeaponStats(byBlock, &wep, prng);
			randArmorStats(byBlock, &body, &helm, prng);
		}
		else
		{

		}
	}
	else
	{
		if (!trueRandom)
		{
			randAllStats(byBlock, &wep, &body, &helm, prng);
		}
		else
		{

		}
	}
}

void ItemSets::write(std::fstream & fs)
{
	for (size_t i = 0; i < wep.size(); i++)
	{
		wep[i].write(fs);
	}
	for (size_t i = 0; i < body.size(); i++)
	{
		body[i].write(fs);
	}
	for (size_t i = 0; i < helm.size(); i++)
	{
		helm[i].write(fs);
	}
}

void ItemSets::getDefaults(std::fstream & fs)
{
	DefaultWeapons def;
	DefaultArmor arm;
	wep = def.getDefaultWeaponSet(fs);
	body = arm.getDefaultArmorSet();
	helm = arm.getDefaultHelmetSet();
}