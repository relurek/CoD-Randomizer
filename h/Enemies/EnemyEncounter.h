#pragma once
#include <cstdint>
#include <fstream>
#include <vector>
#include "EnemyLocation.h"
#include "../Util.h"

class EnemyEncounter
{
public:
	EnemyEncounter(std::fstream & fs, uint32_t offsetIn, uint32_t numEnemySlots, uint32_t numLocationSlots);

	void write(std::fstream & fs);

	std::vector<uint16_t> & getIDs() { return ids; }
	const std::vector<uint16_t> & getIDsConst() const{ return ids; }
	std::vector<EnemyLocation> & getLocs() { return locs; }

	void setIDs(std::vector<uint16_t> idsIn) { ids = idsIn; }
	void setLocs(std::vector<EnemyLocation> locIn) { locs = locIn; }
private:
	void read(std::fstream & fs);

	uint32_t offset;
	uint32_t numSlots;
	uint32_t numLocations;
	std::vector<uint16_t> ids;
	std::vector<EnemyLocation> locs;
};