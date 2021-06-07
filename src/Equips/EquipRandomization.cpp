#include <algorithm>
#include "../../h/Equips/EquipRandomization.h"


void nameShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.name;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.name = hold[i];
	}
}
void discShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.disc;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.disc = hold[i];
	}
}
void recipeShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.recipe;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.recipe = hold[i];
	}
}
void valueShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.value;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.value = hold[i];
	}
}
void sellShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.sell;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.sell = hold[i];
	}
}
void strShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.str;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.str = hold[i];
	}
}
void conShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.con;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.con = hold[i];
	}
}
void lukShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.luk;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.luk = hold[i];
	}
}
void atkShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.atk;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.atk = hold[i];
	}
}
void defShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.def;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.def = hold[i];
	}
}
void poisonResShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.poisonRes;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.poisonRes = hold[i];
	}
}
void curseResShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.curseRes;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.curseRes = hold[i];
	}
}
void stoneResShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.stoneRes;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.stoneRes = hold[i];
	}
}
void paralyzeResShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.paralyzeRes;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.paralyzeRes = hold[i];
	}
}
void fireResShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.fireRes;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.fireRes = hold[i];
	}
}
void iceResShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.iceRes;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.iceRes = hold[i];
	}
}
void thunderResShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.thunderRes;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.thunderRes = hold[i];
	}
}
void windResShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.windRes;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.windRes = hold[i];
	}
}
void earthResShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.earthRes;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.earthRes = hold[i];
	}
}
void lightResShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.lightRes;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.lightRes = hold[i];
	}
}
void darkResShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(blocks.size());

	for (size_t i = 0; i < blocks.size(); i++)
	{
		hold[i] = blocks[i].first.darkRes;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < blocks.size(); i++)
	{
		blocks[i].first.darkRes = hold[i];
	}
}
void skillShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(70);

	for (size_t i = 0; i < hold.size(); i++)
	{
		hold[i] = blocks[i].second.skill;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < hold.size(); i++)
	{
		blocks[i].second.skill = hold[i];
	}
}
void animSpeedShuffle(EquipStatSet & blocks, std::mt19937 & prng)
{
	std::vector<int32_t> hold;
	hold.resize(70);

	for (size_t i = 0; i < hold.size(); i++)
	{
		hold[i] = blocks[i].second.animSpeed;
	}
	std::shuffle(hold.begin(), hold.end(), prng);
	for (size_t i = 0; i < hold.size(); i++)
	{
		blocks[i].second.animSpeed = hold[i];
	}
}


void EquipRandomization::randomizeWeapons(EquipStatSet & wep, std::mt19937 & prng)
{
	//Name
	nameShuffle(wep, prng);
	//Discription
	discShuffle(wep, prng);
	//Recipe
	recipeShuffle(wep, prng);
	//Value
	valueShuffle(wep, prng);
	//Sell
	sellShuffle(wep, prng);
	//STR
	strShuffle(wep, prng);
	//CON
	conShuffle(wep, prng);
	//LUK
	lukShuffle(wep, prng);
	//ATK
	atkShuffle(wep, prng);
	//DEF
	defShuffle(wep, prng);
	//POISON
	poisonResShuffle(wep, prng);
	//CURSE
	curseResShuffle(wep, prng);
	//STONE
	stoneResShuffle(wep, prng);
	//PARA
	paralyzeResShuffle(wep, prng);
	//FIRE
	fireResShuffle(wep, prng);
	//ICE
	iceResShuffle(wep, prng);
	//THUNDER
	thunderResShuffle(wep, prng);
	//WIND
	windResShuffle(wep, prng);
	//EARTH
	earthResShuffle(wep, prng);
	//LIGHT
	lightResShuffle(wep, prng);
	//DARK
	darkResShuffle(wep, prng);
	//SKILL
	skillShuffle(wep, prng);
	//SPEED
	animSpeedShuffle(wep, prng);
}
void EquipRandomization::randomizeArmor(EquipStatSet & arm, std::mt19937 & prng)
{
	//Name
	nameShuffle(arm, prng);
	//Discription
	discShuffle(arm, prng);
	//Recipe
	recipeShuffle(arm, prng);
	//Value
	valueShuffle(arm, prng);
	//Sell
	sellShuffle(arm, prng);
	//STR
	strShuffle(arm, prng);
	//CON
	conShuffle(arm, prng);
	//LUK
	lukShuffle(arm, prng);
	//ATK
	atkShuffle(arm, prng);
	//DEF
	defShuffle(arm, prng);
	//POISON
	poisonResShuffle(arm, prng);
	//CURSE
	curseResShuffle(arm, prng);
	//STONE
	stoneResShuffle(arm, prng);
	//PARA
	paralyzeResShuffle(arm, prng);
	//FIRE
	fireResShuffle(arm, prng);
	//ICE
	iceResShuffle(arm, prng);
	//THUNDER
	thunderResShuffle(arm, prng);
	//WIND
	windResShuffle(arm, prng);
	//EARTH
	earthResShuffle(arm, prng);
	//LIGHT
	lightResShuffle(arm, prng);
	//DARK
	darkResShuffle(arm, prng);
}
void EquipRandomization::randomizeAll(EquipStatSet & all, std::mt19937 & prng)
{
	//Name
	nameShuffle(all, prng);
	//Discription
	discShuffle(all, prng);
	//Recipe
	recipeShuffle(all, prng);
	//Value
	valueShuffle(all, prng);
	//Sell
	sellShuffle(all, prng);
	//STR
	strShuffle(all, prng);
	//CON
	conShuffle(all, prng);
	//LUK
	lukShuffle(all, prng);
	//ATK
	atkShuffle(all, prng);
	//DEF
	defShuffle(all, prng);
	//POISON
	poisonResShuffle(all, prng);
	//CURSE
	curseResShuffle(all, prng);
	//STONE
	stoneResShuffle(all, prng);
	//PARA
	paralyzeResShuffle(all, prng);
	//FIRE
	fireResShuffle(all, prng);
	//ICE
	iceResShuffle(all, prng);
	//THUNDER
	thunderResShuffle(all, prng);
	//WIND
	windResShuffle(all, prng);
	//EARTH
	earthResShuffle(all, prng);
	//LIGHT
	lightResShuffle(all, prng);
	//DARK
	darkResShuffle(all, prng);
	//SKILL
	skillShuffle(all, prng);
	//SPEED
	animSpeedShuffle(all, prng);
}

