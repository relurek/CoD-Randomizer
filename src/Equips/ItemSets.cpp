#include <algorithm>
#include <cassert>
#include "DefaultWeapons.h"
#include "DefaultArmor.h"
#include "EquipRandomization.h"
#include "ItemSets.h"
#include "EquipStatBlocks.h"


////// Basic Functions //////
void ItemSets::getDefaults()
{
	DefaultWeapons def;
	DefaultArmor arm;
	wep = def.getDefaultWeaponSet();
	body = arm.getDefaultArmorSet();
	helm = arm.getDefaultHelmetSet();
}

////// Randomization Specifiers //////
void ItemSets::randWeaponStats(bool byBlock)
{
	EquipStatBlockOperations statOp;
	EquipRandomization eqOp;

	EquipStatSet blocks = statOp.buildWeaponStatBlocks(wep);

	if (byBlock)
		statOp.shuffleBlocks(blocks);
	else
		eqOp.randomizeWeapons(blocks);

	statOp.commitWeaponStatBlocks(blocks, wep);
}
void ItemSets::randArmorStats(bool byBlock)
{
	EquipStatBlockOperations statOp;
	EquipRandomization eqOp;

	EquipStatSet armBlocks = statOp.buildArmorStatBlocks(body, helm);

	if (byBlock)
		statOp.shuffleBlocks(armBlocks);
	else
		eqOp.randomizeArmor(armBlocks);

	statOp.commitArmorStatBlocks(armBlocks, body, helm);
}
void ItemSets::randAllStats(bool byBlock)
{
	EquipStatBlockOperations statOp;
	EquipRandomization eqOp;

	EquipStatSet blocks = statOp.buildAllStatBlocks(wep, body, helm);

	if (byBlock)
		statOp.shuffleAllBlocks(blocks);
	else
		eqOp.randomizeAll(blocks);

	statOp.commitAllStatBlocks(blocks, wep, body, helm);
}

////// Drivers //////
void ItemSets::randStats(bool byType, bool byBlock, bool trueRandom)
{
	if (byType)
	{
		if (!trueRandom)
		{
			randWeaponStats(byBlock);
			randArmorStats(byBlock);
		}
		else
		{

		}
	}
	else
	{
		if (!trueRandom)
		{
			randAllStats(byBlock);
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