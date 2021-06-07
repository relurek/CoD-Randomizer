#pragma once
#include <cstdint>
#include <fstream>
#include <vector>
#include "EnemyLocation.h"

class EnemyEncounter
{
public:
	EnemyEncounter(uint32_t offsetIn, std::vector<uint16_t> idIn, std::vector<EnemyLocation> locIn)
		: offset(offsetIn), ids(idIn), locs(locIn) {}

	void write(std::fstream & fs);

	std::vector<uint16_t> ids;
	std::vector<EnemyLocation> locs;
private:
	uint32_t offset;
};