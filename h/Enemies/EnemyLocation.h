#pragma once
#include <cstdint>
#include <fstream>
#include <vector>
#include "../Util.h"

class EnemyLocation
{
public:
	EnemyLocation(std::fstream & fs, std::vector<uint16_t> ids);


	uint8_t enemyIndex;		//Index in Encounter ID list
	uint16_t range;			//Involving spawn distance
	uint16_t resp;			//Involving respawning somehow
	
	// Unknown Values
	uint16_t u1;
	uint16_t u2;
	uint16_t u3;
	uint16_t u4;
	uint16_t u5;
	// Unknown Values

	uint16_t spawnNum;		// Total spawned
	uint16_t simulNum;		// Spawned at a time

	void write(std::fstream & fs, std::vector<uint16_t> ids);

private:
	void read(std::fstream & fs, std::vector<uint16_t> ids);
};