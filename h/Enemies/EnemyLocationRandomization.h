#pragma once
#include "EnemyLists.h"
#include "../Util.h"

class EnemyLocationRandomization
{
public:
	//Shuffles enemy locations
	void shuffleLocations(EnemyLocationLists & in, const bool byArea);

	//Shuffles enemy spawn numbers
	void randomizeNumbers(EnemyLocationLists & in);
};