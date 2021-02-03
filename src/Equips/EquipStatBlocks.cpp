#include "EquipStatBlocks.h"

////// StatBlock Processing //////
EquipStatSet EquipStatBlockOperations::buildWeaponStatBlocks(const WeaponSet & wep)
{
	size_t num = wep.size();
	EquipStatSet blocks;
	blocks.resize(num);

	for (size_t i = 0; i < num; i++)
	{
		blocks[i].first.name = wep[i].nameID;
		blocks[i].first.disc = wep[i].discID;
		blocks[i].first.recipe = wep[i].recipeID;
		blocks[i].first.value = wep[i].value;
		blocks[i].first.sell = wep[i].sell;
		blocks[i].first.str = wep[i].str;
		blocks[i].first.con = wep[i].con;
		blocks[i].first.luk = wep[i].luk;
		blocks[i].first.atk = wep[i].atk;
		blocks[i].first.def = wep[i].def;
		blocks[i].first.poisonRes = wep[i].poisonRes;
		blocks[i].first.curseRes = wep[i].curseRes;
		blocks[i].first.stoneRes = wep[i].stoneRes;
		blocks[i].first.paralyzeRes = wep[i].paralyzeRes;
		blocks[i].first.fireRes = wep[i].fireRes;
		blocks[i].first.iceRes = wep[i].iceRes;
		blocks[i].first.thunderRes = wep[i].thunderRes;
		blocks[i].first.windRes = wep[i].windRes;
		blocks[i].first.earthRes = wep[i].earthRes;
		blocks[i].first.lightRes = wep[i].lightRes;
		blocks[i].first.darkRes = wep[i].darkRes;
		blocks[i].second.skill = wep[i].skill;
		blocks[i].second.animSpeed = wep[i].animSpeed;
	}
	return blocks;
}
void EquipStatBlockOperations::commitWeaponStatBlocks(const EquipStatSet & in, WeaponSet & wep)
{
	for (size_t i = 0; i < in.size(); i++)
	{
		wep[i].nameID = in[i].first.name;
		wep[i].discID = in[i].first.disc;
		wep[i].recipeID = in[i].first.recipe;
		wep[i].value = in[i].first.value;
		wep[i].sell = in[i].first.sell;
		wep[i].str = in[i].first.str;
		wep[i].con = in[i].first.con;
		wep[i].luk = in[i].first.luk;
		wep[i].atk = in[i].first.atk;
		wep[i].def = in[i].first.def;
		wep[i].poisonRes = in[i].first.poisonRes;
		wep[i].curseRes = in[i].first.curseRes;
		wep[i].stoneRes = in[i].first.stoneRes;
		wep[i].paralyzeRes = in[i].first.paralyzeRes;
		wep[i].fireRes = in[i].first.fireRes;
		wep[i].iceRes = in[i].first.iceRes;
		wep[i].thunderRes = in[i].first.thunderRes;
		wep[i].windRes = in[i].first.windRes;
		wep[i].earthRes = in[i].first.earthRes;
		wep[i].lightRes = in[i].first.lightRes;
		wep[i].darkRes = in[i].first.darkRes;
		wep[i].skill = in[i].second.skill;
		wep[i].animSpeed = in[i].second.animSpeed;
	}
}

EquipStatSet EquipStatBlockOperations::buildArmorStatBlocks(const ArmorSet & body, const ArmorSet & helm)
{
	size_t numB = body.size();
	size_t numH = helm.size();
	EquipStatSet blocks;
	blocks.resize(numB + numH);

	//Build body armor blocks
	for (size_t i = 0; i < numB; i++)
	{
		blocks[i].first.name = body[i].nameID;
		blocks[i].first.disc = body[i].discID;
		blocks[i].first.recipe = body[i].recipeID;
		blocks[i].first.value = body[i].value;
		blocks[i].first.sell = body[i].sell;
		blocks[i].first.str = body[i].str;
		blocks[i].first.con = body[i].con;
		blocks[i].first.luk = body[i].luk;
		blocks[i].first.atk = body[i].atk;
		blocks[i].first.def = body[i].def;
		blocks[i].first.poisonRes = body[i].poisonRes;
		blocks[i].first.curseRes = body[i].curseRes;
		blocks[i].first.stoneRes = body[i].stoneRes;
		blocks[i].first.paralyzeRes = body[i].paralyzeRes;
		blocks[i].first.fireRes = body[i].fireRes;
		blocks[i].first.iceRes = body[i].iceRes;
		blocks[i].first.thunderRes = body[i].thunderRes;
		blocks[i].first.windRes = body[i].windRes;
		blocks[i].first.earthRes = body[i].earthRes;
		blocks[i].first.lightRes = body[i].lightRes;
		blocks[i].first.darkRes = body[i].darkRes;
	}	// for
	//Build helmet armor blocks
	for (size_t i = numB; i < numB + numH; i++)
	{
		size_t j = i - numB;
		blocks[i].first.name = helm[j].nameID;
		blocks[i].first.disc = helm[j].discID;
		blocks[i].first.recipe = helm[j].recipeID;
		blocks[i].first.value = helm[j].value;
		blocks[i].first.sell = helm[j].sell;
		blocks[i].first.str = helm[j].str;
		blocks[i].first.con = helm[j].con;
		blocks[i].first.luk = helm[j].luk;
		blocks[i].first.atk = helm[j].atk;
		blocks[i].first.def = helm[j].def;
		blocks[i].first.poisonRes = helm[j].poisonRes;
		blocks[i].first.curseRes = helm[j].curseRes;
		blocks[i].first.stoneRes = helm[j].stoneRes;
		blocks[i].first.paralyzeRes = helm[j].paralyzeRes;
		blocks[i].first.fireRes = helm[j].fireRes;
		blocks[i].first.iceRes = helm[j].iceRes;
		blocks[i].first.thunderRes = helm[j].thunderRes;
		blocks[i].first.windRes = helm[j].windRes;
		blocks[i].first.earthRes = helm[j].earthRes;
		blocks[i].first.lightRes = helm[j].lightRes;
		blocks[i].first.darkRes = helm[j].darkRes;
	} // for
	return blocks;
}
void EquipStatBlockOperations::commitArmorStatBlocks(const EquipStatSet & in, ArmorSet & body, ArmorSet & helm)
{
	for (size_t i = 0; i < body.size(); i++)
	{
		body[i].nameID = in[i].first.name;
		body[i].discID = in[i].first.disc;
		body[i].recipeID = in[i].first.recipe;
		body[i].value = in[i].first.value;
		body[i].sell = in[i].first.sell;
		body[i].str = in[i].first.str;
		body[i].con = in[i].first.con;
		body[i].luk = in[i].first.luk;
		body[i].atk = in[i].first.atk;
		body[i].def = in[i].first.def;
		body[i].poisonRes = in[i].first.poisonRes;
		body[i].curseRes = in[i].first.curseRes;
		body[i].stoneRes = in[i].first.stoneRes;
		body[i].paralyzeRes = in[i].first.paralyzeRes;
		body[i].fireRes = in[i].first.fireRes;
		body[i].iceRes = in[i].first.iceRes;
		body[i].thunderRes = in[i].first.thunderRes;
		body[i].windRes = in[i].first.windRes;
		body[i].earthRes = in[i].first.earthRes;
		body[i].lightRes = in[i].first.lightRes;
		body[i].darkRes = in[i].first.darkRes;
	}
	for (size_t i = body.size(); i < body.size() + helm.size(); i++)
	{
		size_t j = i - body.size();
		helm[j].nameID = in[i].first.name;
		helm[j].discID = in[i].first.disc;
		helm[j].recipeID = in[i].first.recipe;
		helm[j].value = in[i].first.value;
		helm[j].sell = in[i].first.sell;
		helm[j].str = in[i].first.str;
		helm[j].con = in[i].first.con;
		helm[j].luk = in[i].first.luk;
		helm[j].atk = in[i].first.atk;
		helm[j].def = in[i].first.def;
		helm[j].poisonRes = in[i].first.poisonRes;
		helm[j].curseRes = in[i].first.curseRes;
		helm[j].stoneRes = in[i].first.stoneRes;
		helm[j].paralyzeRes = in[i].first.paralyzeRes;
		helm[j].fireRes = in[i].first.fireRes;
		helm[j].iceRes = in[i].first.iceRes;
		helm[j].thunderRes = in[i].first.thunderRes;
		helm[j].windRes = in[i].first.windRes;
		helm[j].earthRes = in[i].first.earthRes;
		helm[j].lightRes = in[i].first.lightRes;
		helm[j].darkRes = in[i].first.darkRes;
	}
}

EquipStatSet EquipStatBlockOperations::buildAllStatBlocks(const WeaponSet & wep, const ArmorSet & body, const ArmorSet & helm)
{
	EquipStatSet ws = buildWeaponStatBlocks(wep);
	EquipStatSet as = buildArmorStatBlocks(body, helm);

	ws.insert(ws.end(), as.begin(), as.end());
	return ws;
}
void EquipStatBlockOperations::commitAllStatBlocks(const EquipStatSet & in, WeaponSet & wep, ArmorSet & body, ArmorSet & helm)
{
	EquipStatSet wepSet(std::make_move_iterator(in.begin()),
		std::make_move_iterator(in.begin() + wep.size()));

	EquipStatSet armSet(std::make_move_iterator(in.begin() + wep.size()),
		std::make_move_iterator(in.end()));

	commitWeaponStatBlocks(wepSet, wep);
	commitArmorStatBlocks(armSet, body, helm);
}
////// StatBlock Processing //////


////// Shuffling Shuffling //////
void EquipStatBlockOperations::shuffleBlocks(EquipStatSet & in)
{
	std::random_shuffle(in.begin(), in.end());
}
void EquipStatBlockOperations::shuffleAllBlocks(EquipStatSet & all)
{
	//Copy Weapon Specific Set
	EquipStatSet wepSet(std::make_move_iterator(all.begin()),
		std::make_move_iterator(all.begin() + all.size()));
	std::random_shuffle(wepSet.begin(), wepSet.end());

	//Rand All Blocks
	std::random_shuffle(all.begin(), all.end());

	//Overwrite Weapon Specific Sets
	for (size_t i = 0; i < wepSet.size(); i++)
	{
		all[i].second = wepSet[i].second;
	}
}
////// Shuffling Shuffling //////