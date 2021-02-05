#pragma once
#include <cstdint>
#include <fstream>

class T_Armor
{
public:

	T_Armor(uint32_t offIn, uint32_t recipeIn,
		uint32_t nameIn, uint32_t discIn,
		uint32_t mModelIn, uint32_t paletteIn, uint32_t mIconIn,
		uint32_t maxIn, uint32_t valueIn, uint32_t sellIn, uint32_t unlockIn,
		int32_t strIn, int32_t conIn, int32_t lukIn, int32_t atkIn, int32_t defIn,
		int32_t poisonIn, int32_t curseIn, int32_t stoneIn, int32_t paralyzeIn,
		int32_t fireIn, int32_t iceIn, int32_t thunderIn, int32_t windIn, int32_t earthIn, int32_t lightIn, int32_t darkIn)

		: offset(offIn), recipeID(recipeIn), nameID(nameIn), discID(discIn), menuModelID(mModelIn), palette(paletteIn), menuIconID(mIconIn),
		maxNum(maxIn), value(valueIn), sell(sellIn), recipeUnlock(unlockIn), str(strIn), con(conIn), luk(lukIn), atk(atkIn), def(defIn),
		poisonRes(poisonIn), curseRes(curseIn), stoneRes(stoneIn), paralyzeRes(paralyzeIn),
		fireRes(fireIn), iceRes(iceIn), thunderRes(thunderIn), windRes(windIn), earthRes(earthIn), lightRes(lightIn), darkRes(darkIn) {} // Ugly, restructure

public:
	uint32_t offset;
	uint32_t recipeID;
	uint32_t nameID;
	uint32_t discID;
	uint32_t menuModelID;
	uint32_t palette;
	uint32_t menuIconID;
private:
	uint32_t maxNum;
public:
	uint32_t value;
	uint32_t sell;
	uint32_t recipeUnlock;
	int32_t str;
	int32_t con;
	int32_t luk;
	int32_t atk;
	int32_t def;
	int32_t poisonRes;	int32_t curseRes;	int32_t stoneRes;	int32_t paralyzeRes;
	int32_t fireRes;	int32_t iceRes;		int32_t thunderRes;	int32_t windRes;
	int32_t earthRes;	int32_t lightRes;	int32_t darkRes;

	void write(std::fstream & fs);
private:
	uint64_t tail0 = 0;
};