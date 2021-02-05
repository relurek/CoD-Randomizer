#pragma once
#include <fstream>
#include <string>
#include <vector>
#include "Util.h"
#include "./Equips/ItemSets.h"
#include "./Equips/T_Weapon.h"
#include "./Items/ItemLocation.h"




class Program
{
public:

	Program(int argc, char** argv);

	void run();
private:
	std::fstream file;
	LocSet locations;
	ItemSets items;
	//Mode mode = null;
	std::string seed = "";
	bool randItemLocations = false;
	bool randItemLocationsByType = false;
	bool randItemLocationsByArea = false;

	bool randEquips = false;
	bool equipTrueRandomize = false;
	bool randEquipsByType = false;
	bool randEquipsByBlock = false;

	void get_options(int argc, char** argv);

	void write();
};