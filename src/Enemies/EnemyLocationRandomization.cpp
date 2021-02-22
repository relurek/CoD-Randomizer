#include <algorithm>
#include <cstdint>
#include "../../h/Enemies/EnemyLocationRandomization.h"

/// Enemy Location Shuffling ///
//Writes ids to enemyLocSet in
void writeIDs(enemyLocSet & in, const std::vector<uint16_t> & ids)
{
	size_t i = 0;
	for (EnemyEncounter enc : in)
	{
		for (uint16_t val : enc.ids)
		{
			val = ids[i];
			i++;
		}
	}
}

//Shuffles enemyLocSet ids
void shuffleAreaLocs(enemyLocSet & in)
{
	std::vector<uint16_t> ids;

	for (EnemyEncounter enc : in)
	{
		ids.insert(ids.begin(), enc.ids.begin(), enc.ids.end());
	}

	std::random_shuffle(ids.begin(), ids.end());
	writeIDs(in, ids);
}

//Shuffles ids by area
void shuffleLocsByArea(EnemyLocationLists & in)
{
	//cast
	shuffleAreaLocs(in.castSet);
	//mntn
	shuffleAreaLocs(in.mntnSet);
	//tmpl
	shuffleAreaLocs(in.tmplSet);
	//mtva
	shuffleAreaLocs(in.mtvaSet);
	//frst
	shuffleAreaLocs(in.frstSet);
	//etnt
	shuffleAreaLocs(in.etntSet);
	//evmr
	shuffleAreaLocs(in.evmrSet);
	//cdva
	shuffleAreaLocs(in.cdvaSet);
	//clck
	shuffleAreaLocs(in.clckSet);
	//ruin
	shuffleAreaLocs(in.ruinSet);
	//inft
	shuffleAreaLocs(in.inftSet);
	//drac
	shuffleAreaLocs(in.dracSet);
}

//Shuffles ids regardless of area
void shuffleAllLocs(EnemyLocationLists & in)
{
	enemyLocSet all;

	all.insert(all.end(), in.castSet.begin(), in.castSet.end());
	all.insert(all.end(), in.mntnSet.begin(), in.mntnSet.end());
	all.insert(all.end(), in.tmplSet.begin(), in.tmplSet.end());
	all.insert(all.end(), in.mtvaSet.begin(), in.mtvaSet.end());
	all.insert(all.end(), in.frstSet.begin(), in.frstSet.end());
	all.insert(all.end(), in.etntSet.begin(), in.etntSet.end());
	all.insert(all.end(), in.evmrSet.begin(), in.evmrSet.end());
	all.insert(all.end(), in.cdvaSet.begin(), in.cdvaSet.end());
	all.insert(all.end(), in.clckSet.begin(), in.clckSet.end());
	all.insert(all.end(), in.ruinSet.begin(), in.ruinSet.end());
	all.insert(all.end(), in.inftSet.begin(), in.inftSet.end());
	all.insert(all.end(), in.dracSet.begin(), in.dracSet.end());

	shuffleAreaLocs(all);

	size_t i = 0;
	for (EnemyEncounter enc : in.castSet)
	{
		enc.ids = all[i].ids;
		i++;
	}
	for (EnemyEncounter enc : in.mntnSet)
	{
		enc.ids = all[i].ids;
		i++;
	}
	for (EnemyEncounter enc : in.tmplSet)
	{
		enc.ids = all[i].ids;
		i++;
	}
	for (EnemyEncounter enc : in.mtvaSet)
	{
		enc.ids = all[i].ids;
		i++;
	}
	for (EnemyEncounter enc : in.frstSet)
	{
		enc.ids = all[i].ids;
		i++;
	}
	for (EnemyEncounter enc : in.etntSet)
	{
		enc.ids = all[i].ids;
		i++;
	}
	for (EnemyEncounter enc : in.evmrSet)
	{
		enc.ids = all[i].ids;
		i++;
	}
	for (EnemyEncounter enc : in.cdvaSet)
	{
		enc.ids = all[i].ids;
		i++;
	}
	for (EnemyEncounter enc : in.clckSet)
	{
		enc.ids = all[i].ids;
		i++;
	}
	for (EnemyEncounter enc : in.ruinSet)
	{
		enc.ids = all[i].ids;
		i++;
	}
	for (EnemyEncounter enc : in.dracSet)
	{
		enc.ids = all[i].ids;
		i++;
	}
}


//Shuffles enemy locations
void EnemyLocationRandomization::shuffleLocations(EnemyLocationLists & in, const bool byArea)
{
	if (byArea)
	{
		shuffleLocsByArea(in);
	}
	else
	{
		shuffleAllLocs(in);
	}
}
/// Enemy Location Shuffling ///


/// Enemy Number Randomization ///
//Randomize enemy numbers by set
void randomizeNumbersInSet(enemyLocSet & in, const int low, const int high)
{
	for (EnemyEncounter enc : in)
	{
		for (EnemyLocation loc : enc.locs)
		{
			int r1 = std::rand() % (high - low + 1) + low;		//random between 50 and 150 (by default)
			float r2 = r1 / 100;								//random between .5 and 1.5 (by default)
			loc.spawnNum = std::ceilf(loc.spawnNum * r2);
			loc.simulNum = std::ceilf(loc.simulNum * r2);		//Sensible to use the same random multiplier for both spawn and simul
		}
	}
}

//Shuffles enemy spawn numbers
void EnemyLocationRandomization::randomizeNumbers(EnemyLocationLists & in)
{
	///Move these to a config file...///
	//Random multiplier low end
	const int low = 50;

	//Random multiplier high end
	const int high = 150;

	randomizeNumbersInSet(in.castSet, low, high);
	randomizeNumbersInSet(in.mntnSet, low, high);
	randomizeNumbersInSet(in.tmplSet, low, high);
	randomizeNumbersInSet(in.mtvaSet, low, high);
	randomizeNumbersInSet(in.frstSet, low, high);
	randomizeNumbersInSet(in.etntSet, low, high);
	randomizeNumbersInSet(in.evmrSet, low, high);
	randomizeNumbersInSet(in.cdvaSet, low, high);
	randomizeNumbersInSet(in.clckSet, low, high);
	randomizeNumbersInSet(in.ruinSet, low, high);
	randomizeNumbersInSet(in.inftSet, low, high);
	randomizeNumbersInSet(in.dracSet, low, high);
}
/// Enemy Number Randomization ///