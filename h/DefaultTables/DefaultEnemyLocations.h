#pragma once
#include <vector>
#include "../Enemies/EnemyEncounter.h"
#include "../Util.h"

class DefaultEnemyLocations
{
public:
	enemyEncounterSet getDefaultEnemyLocationSet(std::fstream & fs, Zone z);
};