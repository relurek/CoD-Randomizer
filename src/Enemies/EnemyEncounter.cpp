#include "../../h/Enemies/EnemyEncounter.h"

EnemyEncounter::EnemyEncounter(std::fstream & fs, uint32_t offsetIn, uint32_t numEnemieSlots, uint32_t numLocationSlots)
{
	offset = offsetIn;
	fs.seekp(offsetIn);
	numSlots = numEnemieSlots;
	numLocations = numLocationSlots;

	read(fs);
}

void EnemyEncounter::write(std::fstream & fs)
{
	uint16_t two = 2;				// Want specific control over length
	uint32_t loc = offset;

	fs.seekp(loc);
	for (size_t i = 0; i < ids.size(); i++)
	{
		fs.write(reinterpret_cast <char*> (&two), 2);
		fs.write(reinterpret_cast <char*> (&ids[i]), 2);
	}
	loc += 16 + (16 * (int)(ids.size() / 5));

	for (EnemyLocation en : locs)
	{
		fs.seekp(loc);

		en.write(fs, ids);

		loc += 64;
	}
}

void EnemyEncounter::read(std::fstream & fs)
{
	ids.reserve(numSlots);
	locs.reserve(numLocations);

	if (numSlots == 8)
		printf("Uh oh");

	uint16_t junk;
	uint16_t id;
	for (uint16_t i = 0; i < numSlots; i++) 
	{
		fs.read(reinterpret_cast<char*> (&junk), 2);
		fs.read(reinterpret_cast<char*> (&id), 2);


		if (junk != 2 && junk != 0)
			printf("Uh oh");
		if (id != 0)
			ids.push_back(id);
	}

	size_t idRows = (int)((ids.size() - 1) / 4) + 1;
	
	size_t currentOffset = offset + (16 * idRows);
	for (uint16_t i = 0; i < numLocations; i++)
	{
		fs.seekp(currentOffset);
		locs.push_back(EnemyLocation(fs, ids));
		currentOffset += 64;
	}
}