#pragma once
#include <cstdint>
#include <fstream>

class T_Armor
{
public:

	T_Armor(std::fstream & fs, uint32_t offIn);

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
	void read(std::fstream & fs);
	uint64_t tail0 = 0;
};