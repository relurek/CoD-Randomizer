#include <algorithm>
#include <cstdint>
#include <cmath>
#include "../../h/Enemies/EnemyLocationRandomization.h"


//Dragons must be randomized separately to prevent clipping issues
//TODO: research RE: spawn placement (could prevent clipping)
bool checkDragon(const size_t & id)
{
	switch (id)
	{
	case(WHITE_DRAGON_LV0):
	case(WHITE_DRAGON_LV10):
	case(WHITE_DRAGON_LV38):
	case(FROST_DRAGON_LV0):
	case(FROST_DRAGON_LV19):
	case(FROST_DRAGON_LV39):
	case(THUNDER_DRAGON_LV0):
	case(THUNDER_DRAGON_LV20):
	case(THUNDER_DRAGON_LV40):
		return true;
	default:
		return false;
	}
}
//Writes ids to enemyLocSet in
void writeIDs(enemyEncounterSet & in, const std::vector<uint16_t> & ids, const std::vector<uint16_t> & idsDrag)
{
	size_t i = 0;
	size_t j = 0;
	//For all enemy encounters
	for (EnemyEncounter & enc : in)
	{
		EnemyEncounter startEnc = enc;
		size_t startSize = enc.getIDs().size();
		//For all ids per encounter
		for (uint16_t & val : enc.getIDs())
		{
			//If id corresponds to an enemy
			if (checkException(val))
			{
				if (checkDragon(val))
				{
					val = idsDrag[j];
					j++;
				}
				else
				{
					val = ids[i];
					i++;
				}
				
			}
		}
		size_t endSize = enc.getIDs().size();

		if (startSize != endSize)
			printf("Uh oh");
	}
}

//Shuffles enemyLocSet ids
void shuffleAreaLocs(enemyEncounterSet & in, std::mt19937 & prng)
{
	std::vector<uint16_t> ids;
	std::vector<uint16_t> idsDrag;

	//For all enemy encounters
	for (EnemyEncounter & enc : in)
	{
		//For all ids per encounter
		for (uint16_t id : enc.getIDs())
		{
			//If id corresponds to an enemy
			if (checkException(id))
			{
				if (checkDragon(id))
					idsDrag.push_back(id);
				else
					ids.push_back(id);
			}
		}
	}

	std::shuffle(ids.begin(), ids.end(), prng);
	std::shuffle(idsDrag.begin(), idsDrag.end(), prng);
	writeIDs(in, ids, idsDrag);
}

//Shuffles ids by area
void shuffleLocsByArea(EnemyEncounterLists & in, std::mt19937 & prng)
{
	//cast
	shuffleAreaLocs(in.castSet, prng);
	//mntn
	shuffleAreaLocs(in.mntnSet, prng);
	//tmpl
	shuffleAreaLocs(in.tmplSet, prng);
	//mtva
	shuffleAreaLocs(in.mtvaSet, prng);
	//frst
	shuffleAreaLocs(in.frstSet, prng);
	//etnt
	shuffleAreaLocs(in.etntSet, prng);
	//evmr
	shuffleAreaLocs(in.evmrSet, prng);
	//cdva
	shuffleAreaLocs(in.cdvaSet, prng);
	//clck
	shuffleAreaLocs(in.clckSet, prng);
	//ruin
	shuffleAreaLocs(in.ruinSet, prng);
	//inft
	shuffleAreaLocs(in.inftSet, prng);
	//drac
	shuffleAreaLocs(in.dracSet, prng);
}

//Shuffles ids regardless of area
enemyEncounterSet compileAll(const EnemyEncounterLists & in)
{
	enemyEncounterSet all;
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

	return all;
}
void writeToAllLocs(EnemyEncounterLists & in, const enemyEncounterSet & all)
{
	size_t i = 0;
	for (EnemyEncounter & enc : in.castSet)
	{
		enc.setIDs(all[i].getIDsConst());
		i++;
	}
	for (EnemyEncounter & enc : in.mntnSet)
	{
		enc.setIDs(all[i].getIDsConst());
		i++;
	}
	for (EnemyEncounter & enc : in.tmplSet)
	{
		enc.setIDs(all[i].getIDsConst());
		i++;
	}
	for (EnemyEncounter & enc : in.mtvaSet)
	{
		enc.setIDs(all[i].getIDsConst());
		i++;
	}
	for (EnemyEncounter & enc : in.frstSet)
	{
		enc.setIDs(all[i].getIDsConst());
		i++;
	}
	for (EnemyEncounter & enc : in.etntSet)
	{
		enc.setIDs(all[i].getIDsConst());
		i++;
	}
	for (EnemyEncounter & enc : in.evmrSet)
	{
		enc.setIDs(all[i].getIDsConst());
		i++;
	}
	for (EnemyEncounter & enc : in.cdvaSet)
	{
		enc.setIDs(all[i].getIDsConst());
		i++;
	}
	for (EnemyEncounter & enc : in.clckSet)
	{
		enc.setIDs(all[i].getIDsConst());
		i++;
	}
	for (EnemyEncounter & enc : in.ruinSet)
	{
		enc.setIDs(all[i].getIDsConst());
		i++;
	}
	for (EnemyEncounter & enc : in.inftSet)
	{
		enc.setIDs(all[i].getIDsConst());
		i++;
	}
	for (EnemyEncounter & enc : in.dracSet)
	{
		enc.setIDs(all[i].getIDsConst());
		i++;
	}
}
void shuffleAllLocs(EnemyEncounterLists & in, std::mt19937 & prng)
{
	enemyEncounterSet all = compileAll(in);

	shuffleAreaLocs(all, prng);

	writeToAllLocs(in, all);
}

/// Enemy Number Randomization - TESTING///
//Randomize enemy numbers by set
void randomizeNumbersInSet(enemyEncounterSet & in, const int low, const int high, std::mt19937 & prng)
{
	for (EnemyEncounter & enc : in)
	{
		for (EnemyLocation & loc : enc.getLocs())
		{
			int r1 = (int)(prng() % (high - low + 1) + low);		//random between 50 and 150 (by default)
			float r2 = (float)r1 / 100;								//random between .5 and 1.5 (by default)
			loc.spawnNum = (uint16_t)::ceilf(loc.spawnNum * r2);
			loc.simulNum = (uint16_t)::ceilf(loc.simulNum * r2);		//Sensible to use the same random multiplier for both spawn and simul
		}
	}
}

//Shuffles enemy spawn numbers
//TODO: Move multiplier ranges to config file, or to class def. and collect as input
void randomizeNumbers(EnemyEncounterLists & in, std::mt19937 & prng)
{
	///Move these to a config file...///
	//Random multiplier low end
	const int low = 50;

	//Random multiplier high end
	const int high = 150;

	randomizeNumbersInSet(in.castSet, low, high, prng);
	randomizeNumbersInSet(in.mntnSet, low, high, prng);
	randomizeNumbersInSet(in.tmplSet, low, high, prng);
	randomizeNumbersInSet(in.mtvaSet, low, high, prng);
	randomizeNumbersInSet(in.frstSet, low, high, prng);
	randomizeNumbersInSet(in.etntSet, low, high, prng);
	randomizeNumbersInSet(in.evmrSet, low, high, prng);
	randomizeNumbersInSet(in.cdvaSet, low, high, prng);
	randomizeNumbersInSet(in.clckSet, low, high, prng);
	randomizeNumbersInSet(in.ruinSet, low, high, prng);
	randomizeNumbersInSet(in.inftSet, low, high, prng);
	randomizeNumbersInSet(in.dracSet, low, high, prng);
}
/// Enemy Number Randomization ///

//Shuffles enemy locations
void EnemyLocationRandomization::shuffleLocations(EnemyEncounterLists & in, const bool byArea, std::mt19937 & prng)
{
	if (byArea)
	{
		shuffleLocsByArea(in, prng);
	}
	else
	{
		shuffleAllLocs(in, prng);
	}
	randomizeNumbers(in, prng);
}
/// Enemy Location Shuffling ///


