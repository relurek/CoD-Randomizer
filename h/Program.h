#pragma once
#include <fstream>
#include <random>
#include <string>
#include <vector>
#include "Util.h"
#include "./Enemies/EnemyLists.h"
#include "./Enemies/EnemyLocationRandomization.h"
#include "./Equips/ItemSets.h"
#include "./Equips/T_Weapon.h"
#include "./Items/ItemLocation.h"




class Program
{
public:

	Program(int argc, char** argv);

	void run(std::mt19937 & prng);
private:
	std::fstream file;
	itemLocSet itemLocs;
	ItemSets items;
	EnemyLocationLists enemyLocs;
	
	std::string inputName;
	std::string outputName = "";
	std::string seed = "";
	
	bool copyImage = false;

	bool randItemLocations = false;
	bool randItemLocationsByType = false;
	bool randItemLocationsByArea = false;

	bool randEquips = false;
	bool equipTrueRandomize = false;
	bool randEquipsByType = false;
	bool randEquipsByBlock = false;

	bool randEnemyLocations = false;
	bool randEnemyLocationsByArea = false;

	void get_options(int argc, char** argv);

	void write();
};