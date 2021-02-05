#pragma once
#include <cstdint>
#include <fstream>

class EnemyLocation
{
public:
	EnemyLocation(uint8_t indexIn, uint16_t rangeIn, uint16_t respIn, 
				  uint16_t u1In, uint16_t u2In, uint16_t u3In, uint16_t u4In, uint16_t u5In, 
				  uint16_t spawnIn, uint16_t simulIn)

		: enemyIndex(indexIn), range(rangeIn), resp(respIn), 
		  u1(u1In), u2(u2In), u3(u3In), u4(u4In), u5(u5In), 
		  spawnNum(spawnIn), simulNum(simulIn) {}


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
};