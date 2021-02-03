#pragma once
#include <cstdint>
#include <fstream>
#include <vector>


class T_Weapon
{
public:

	T_Weapon(uint32_t offIn, uint32_t recipeIn,
		uint32_t nameIn, uint32_t discIn,
		uint32_t mModelIn, uint32_t paletteIn, uint32_t mIconIn,
		uint32_t maxIn, uint32_t valueIn, uint32_t sellIn, uint32_t unlockIn,
		int32_t strIn, int32_t conIn, int32_t lukIn, int32_t atkIn, int32_t defIn,
		int32_t poisonIn, int32_t curseIn, int32_t stoneIn, int32_t paralyzeIn,
		int32_t fireIn, int32_t iceIn, int32_t thunderIn, int32_t windIn, int32_t earthIn, int32_t lightIn, int32_t darkIn,
		int32_t unk5In, uint32_t typeIn, uint32_t animIn, uint32_t skillIn, uint32_t animSpeedIn,
		uint32_t modelIn, uint32_t sheatheIn, uint32_t unk6In, uint32_t offsetIn, uint32_t unk8In, uint32_t unk9In)

		: offset(offIn), recipeID(recipeIn), nameID(nameIn), discID(discIn), menuModelID(mModelIn), palette(paletteIn), menuIconID(mIconIn),
		maxNum(maxIn), value(valueIn), sell(sellIn), recipeUnlock(unlockIn), str(strIn), con(conIn), luk(lukIn), atk(atkIn), def(defIn),
		poisonRes(poisonIn), curseRes(curseIn), stoneRes(stoneIn), paralyzeRes(paralyzeIn),
		fireRes(fireIn), iceRes(iceIn), thunderRes(thunderIn), windRes(windIn), earthRes(earthIn), lightRes(lightIn), darkRes(darkIn),
		unknownByte5(unk5In), weaponTypeID(typeIn), animSetID(animIn), skill(skillIn), animSpeed(animSpeedIn),
		model(modelIn), sheathe(sheatheIn), unknownByte6(unk6In), sheatheOffset(offsetIn), unknownByte8(unk8In), unknownByte9(unk9In) {} // Ugly, restructure

public:
	uint32_t offset;
	uint32_t recipeID;
	uint32_t nameID;
	uint32_t discID;
	uint32_t menuModelID;
	uint32_t palette;
	uint32_t menuIconID;
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
	int32_t earthRes;	int32_t lightRes;	int32_t darkRes;	int32_t unknownByte5;
	uint32_t weaponTypeID;
	uint32_t animSetID;
	uint32_t skill;
	uint32_t animSpeed;

	void write(std::fstream & fs);
private:
	uint32_t maxNum;
	uint32_t unknownByte1 = 0, unknownByte2 = 0;
	uint32_t unknownByte3 = 0, unknownByte4 = 0;
	uint32_t unknownByte6;
	uint32_t unknownByte7 = 0;
	uint32_t unknownByte8;
	uint32_t unknownByte9;
	uint32_t model;
	uint32_t sheathe;
	uint32_t sheatheOffset;
	uint64_t tail0 = 0;
};