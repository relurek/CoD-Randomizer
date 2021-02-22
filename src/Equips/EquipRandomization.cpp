#include <algorithm>
#include "../../h/Equips/EquipRandomization.h"


void nameShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.name;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.name = hold[i];
	}
}
void discShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.disc;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.disc = hold[i];
	}
}
void recipeShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.recipe;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.recipe = hold[i];
	}
}
void valueShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.value;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.value = hold[i];
	}
}
void sellShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.sell;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.sell = hold[i];
	}
}
void strShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.str;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.str = hold[i];
	}
}
void conShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.con;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.con = hold[i];
	}
}
void lukShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.luk;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.luk = hold[i];
	}
}
void atkShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.atk;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.atk = hold[i];
	}
}
void defShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.def;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.def = hold[i];
	}
}
void poisonResShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.poisonRes;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.poisonRes = hold[i];
	}
}
void curseResShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.curseRes;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.curseRes = hold[i];
	}
}
void stoneResShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.stoneRes;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.stoneRes = hold[i];
	}
}
void paralyzeResShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.paralyzeRes;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.paralyzeRes = hold[i];
	}
}
void fireResShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.fireRes;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.fireRes = hold[i];
	}
}
void iceResShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.iceRes;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.iceRes = hold[i];
	}
}
void thunderResShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.thunderRes;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.thunderRes = hold[i];
	}
}
void windResShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.windRes;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.windRes = hold[i];
	}
}
void earthResShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.earthRes;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.earthRes = hold[i];
	}
}
void lightResShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.lightRes;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.lightRes = hold[i];
	}
}
void darkResShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.darkRes;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.darkRes = hold[i];
	}
}
void skillShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(70);

	for (size_t i = 0; i < hold.size(); i++)
	{
		hold[i] = blocks[i].second.skill;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < hold.size(); i++)
	{
		blocks[i].second.skill = hold[i];
	}
}
void animSpeedShuffle(EquipStatSet & blocks)
{
	std::vector<int32_t> hold;
	hold.resize(70);

	for (size_t i = 0; i < hold.size(); i++)
	{
		hold[i] = blocks[i].second.animSpeed;
	}
	std::random_shuffle(hold.begin(), hold.end());
	for (size_t i = 0; i < hold.size(); i++)
	{
		blocks[i].second.animSpeed = hold[i];
	}
}


void EquipRandomization::randomizeWeapons(EquipStatSet & wep)
{
	//Name
	nameShuffle(wep);
	//Discription
	discShuffle(wep);
	//Recipe
	recipeShuffle(wep);
	//Value
	valueShuffle(wep);
	//Sell
	sellShuffle(wep);
	//STR
	strShuffle(wep);
	//CON
	conShuffle(wep);
	//LUK
	lukShuffle(wep);
	//ATK
	atkShuffle(wep);
	//DEF
	defShuffle(wep);
	//POISON
	poisonResShuffle(wep);
	//CURSE
	curseResShuffle(wep);
	//STONE
	stoneResShuffle(wep);
	//PARA
	paralyzeResShuffle(wep);
	//FIRE
	fireResShuffle(wep);
	//ICE
	iceResShuffle(wep);
	//THUNDER
	thunderResShuffle(wep);
	//WIND
	windResShuffle(wep);
	//EARTH
	earthResShuffle(wep);
	//LIGHT
	lightResShuffle(wep);
	//DARK
	darkResShuffle(wep);
	//SKILL
	skillShuffle(wep);
	//SPEED
	animSpeedShuffle(wep);
}
void EquipRandomization::randomizeArmor(EquipStatSet & arm)
{
	//Name
	nameShuffle(arm);
	//Discription
	discShuffle(arm);
	//Recipe
	recipeShuffle(arm);
	//Value
	valueShuffle(arm);
	//Sell
	sellShuffle(arm);
	//STR
	strShuffle(arm);
	//CON
	conShuffle(arm);
	//LUK
	lukShuffle(arm);
	//ATK
	atkShuffle(arm);
	//DEF
	defShuffle(arm);
	//POISON
	poisonResShuffle(arm);
	//CURSE
	curseResShuffle(arm);
	//STONE
	stoneResShuffle(arm);
	//PARA
	paralyzeResShuffle(arm);
	//FIRE
	fireResShuffle(arm);
	//ICE
	iceResShuffle(arm);
	//THUNDER
	thunderResShuffle(arm);
	//WIND
	windResShuffle(arm);
	//EARTH
	earthResShuffle(arm);
	//LIGHT
	lightResShuffle(arm);
	//DARK
	darkResShuffle(arm);
}
void EquipRandomization::randomizeAll(EquipStatSet & all)
{
	//Name
	nameShuffle(all);
	//Discription
	discShuffle(all);
	//Recipe
	recipeShuffle(all);
	//Value
	valueShuffle(all);
	//Sell
	sellShuffle(all);
	//STR
	strShuffle(all);
	//CON
	conShuffle(all);
	//LUK
	lukShuffle(all);
	//ATK
	atkShuffle(all);
	//DEF
	defShuffle(all);
	//POISON
	poisonResShuffle(all);
	//CURSE
	curseResShuffle(all);
	//STONE
	stoneResShuffle(all);
	//PARA
	paralyzeResShuffle(all);
	//FIRE
	fireResShuffle(all);
	//ICE
	iceResShuffle(all);
	//THUNDER
	thunderResShuffle(all);
	//WIND
	windResShuffle(all);
	//EARTH
	earthResShuffle(all);
	//LIGHT
	lightResShuffle(all);
	//DARK
	darkResShuffle(all);
	//SKILL
	skillShuffle(all);
	//SPEED
	animSpeedShuffle(all);
}

