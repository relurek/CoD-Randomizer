#include <ctime>
#include <functional>
//#include <getopt.h>
#include <iostream>
#include <utility>
#include "../h/Program.h"


struct Args : MainArguments<Args>
{
	using MainArguments<Args>::MainArguments;
	bool helpFlag = option("help", 'h') = false;
	std::string inputName = Args::argument(0);
	std::string outputName = option("output", 'o', "Output file. If not specified, randomization occurs in place. Specific name is optional, based on seed if not specified") = "";
	std::string seed = option("seed", 's', "Randomization seed, if not specified, a random 64 bit integer will be generated") = "";
	std::string equipFlags = option("equips", 'q') = "";
	std::string enemyFlags = option("enemies", 'e') = "";
	std::string itemFlags = option("items", 'i') = "";
	bool copyOut = option("out", 'o') = false;
	bool randomizeEquips = option("equips", 'q') = false;
	bool randomizeEnemies = option("enemies", 'e') = false;
	bool randomizeItems = option("items", 'i') = false;
};

Program::Program(int argc, char** argv)
{
	Args args(argc, argv);
	get_options(args);

	if (seed == "")
	{
		std::random_device rd;
		std::mt19937_64 rng64(rd());

		std::uniform_int_distribution<unsigned long long int> intR(0, (uint64_t)std::pow(2,64) - 1);

		seed = std::to_string(intR(rng64));
	}
	std::seed_seq sseq(seed.begin(), seed.end());
	std::mt19937 prng(sseq);
	std::string workFile;

	if (copyImage)
	{
		workFile = copyFile(seed, inputName, outputName);
	}
	else
	{
		workFile = inputName;
	}
	file.open(workFile, std::ios::out | std::ios::in | std::ios::binary);

	run(prng);

	write();
	file.close();
}

void Program::run(std::mt19937 & prng)
{
	if (randEquips)
	{
		items.getDefaults(file);
		items.randStats(randEquipsByType, randEquipsByBlock, equipTrueRandomize, prng);
	}
	if (randEnemyLocations)
	{
		enemyLocs.getDefaults(file);
		EnemyLocationRandomization().shuffleLocations(enemyLocs, randEnemyLocationsByArea, prng);
	}
}

void Program::get_options(Args & a)
{
	if (a.helpFlag) 
	{
		std::cout <<	"--input (-i) \"FILE-PATH\"                 = Path to input disc image\n" << 
						"			THIS PROGRAM IS MEANT TO BE RUN ON AN UNMODIFIED NTSC CURSE OF DARKNESS ISO! OTHER CONDITIONS UNTESTED!\n" <<
						"--output (-o) [name] (optional)            = Include to have program create copy of disc image\n" <<
						"           Include name to force output file name (otherwise set to reflect current seed)\n\n" <<
						"           WARNING: Including -o will copy your iso, this will drastically increase program runtime, and\n" <<
						"                    will cost 4GB every time a new file is generated!\n" <<
						"--seed (-s) \"SEED\"                       = Use specific seed (otherwise generating by system time)\n\n" <<
						"--items (-t) [a,t]                         = Enable item randomization features - NOT CURRENTLY IMPLEMENTED\n" <<
						"           a - randomizes item locations according to area they appear in\n" <<
						"           t - randomizes item locations according to item type\n\n" <<
						"--equips (-q) [b,r,t]                      = Enables equip stat randomization\n" <<
						"           b - replaces all of an equip's stats with all of another equip's stats (as opposed to shuffling each stat individually)\n" <<
						"           t - randomizes equip stats by type (weapons only with other weapons etc.)\n" <<
						"           r - randomly generates new numbers for equip stats (as opposed to shuffling between equips)\n\n" <<
						"--help (-h)                                = Displays this help message\n\n" <<
						"--enemies (-e) [a,l]                       = Enables enemy randomization features\n" <<
						"           l - Enable enemy location randomization\n" <<
						"			|	a - randomizes enemy location by area";
		exit(0);
	}
	inputName = a.inputName;
	if (a.copyOut)
	{
		copyImage = true;
		outputName = a.outputName;
	}
	seed = a.seed;
	if (a.randomizeEquips)
	{
		randEquips = true;
		if (a.equipFlags.find('t') != std::string::npos)
			randEquipsByType = true;
		if (a.equipFlags.find('b') != std::string::npos)
			randEquipsByBlock = true;
		if (a.equipFlags.find('r') != std::string::npos)
			equipTrueRandomize = true;
	}
	if (a.randomizeEnemies)
	{
		if (a.enemyFlags.find('l') != std::string::npos)
			randEnemyLocations = true;
		if (a.enemyFlags.find('a') != std::string::npos)
			randEnemyLocationsByArea = true;

		if (randEnemyLocations != true) 
		{
			std::cerr << "ERROR - Randomizing enemies (-e) requires additional flags! See --help or -h fore more information!\n";
			exit(1);
		}
	}
	if (a.randomizeItems)
	{
		std::cout << "WARNING - Item location randomization is not implemented yet, the --items / -t options will be ignored!\n";
		if (a.itemFlags.find('l') != std::string::npos)
			randItemLocations = true;
		if (a.itemFlags.find('a') != std::string::npos)
			randItemLocationsByArea = true;

		
	}

	//error checking
	if (randEquips == false && randEnemyLocations)
	{
		//ERROR - No Randomization Specified
		std::cerr << "ERROR - No randomization specified\nProgram will terminate\n";
		exit(1);
	}
	if (!fileExists(inputName))
	{
		//ERROR - File opening failed
		std::cerr << "ERROR - Failed to open input file\nProgram will terminate\n";
		exit(1);
	}
}


	
	//			"--input (-i) \"FILE-PATH\"                 = Path to input disc image\n\n" <<
	//			"--output (-o) [name] (optional)            = Include to have program create copy of disc image\n" <<
	//			"           Include name to force output file name (otherwise set to reflect current seed)\n\n" <<
	//			"           WARNING: Including -o will copy your iso, this will drastically increase program runtime, and will cost 4GB every time a new file is generated!" <<
	//			"--seed (-s) \"SEED\"                       = Use specific seed (otherwise generating by system time)\n\n" <<
	//			"--items (-t) [a,t]                         = Enable item location randomization\n" <<
	//			"           a - randomizes item locations according to area they appear in\n" <<
	//			"           t - randomizes item locations according to item type\n\n" <<
	//			"--equips (-q) [b,r,t]                      = Enables equip stat randomization\n" <<
	//			"           b - replaces all of an equips stats with all of another items stats (as opposed to shuffling each stat individually)\n" <<
	//			"           t - randomizes equip stats by type (weapons only with other reapons etc.)\n" <<
	//			"           r - randomly generates new numbers for equip stats (as opposed to shuffling between equips)\n\n" <<
	//			"--help (-h)                                = Displays this help message\n\n";





void Program::write()
{
	if (randEquips)
	{
		items.write(file);
	}
	if (randEnemyLocations)
	{
		enemyLocs.write(file);
	}
}