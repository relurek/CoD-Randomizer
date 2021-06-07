#pragma once
#include <random>
#include "EnemyLists.h"
#include "../IDs/EnemyIDs.h"
#include "../Util.h"

class EnemyLocationRandomization
{
public:
	//Shuffles enemy locations
	void shuffleLocations(EnemyLocationLists & in, const bool byArea, std::mt19937 & prng);
};