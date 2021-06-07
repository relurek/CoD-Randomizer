#include <ctime>
#include <functional>
#include <getopt.h>
#include <iostream>
#include <utility>
#include "../h/Program.h"




Program::Program(int argc, char** argv)
{
	get_options(argc, argv);

	if (seed == "")
	{
		std::random_device rd;
		std::mt19937_64 rng64(rd());

		std::uniform_int_distribution<unsigned long long int> intR(0, std::pow(2,64) - 1);

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
		items.getDefaults();
		items.randStats(randEquipsByType, randEquipsByBlock, equipTrueRandomize, prng);
	}
	if (randEnemyLocations)
	{
		EnemyLocationRandomization eRand;
		enemyLocs.getDefaults();
		eRand.shuffleLocations(enemyLocs, randEnemyLocationsByArea, prng);
	}
}

void Program::get_options(int argc, char** argv)
{
	int option_index = 0, option = 0;
	opterr = 0;

	struct option longOpts[] = { 
							{ "input", required_argument, nullptr, 'i'},
							{ "output", optional_argument, nullptr, 'o'},
							{ "items", no_argument, nullptr, 't'},
							{ "enemies", optional_argument, nullptr, 'e'},
							{ "equips", optional_argument, nullptr, 'q'},
							{ "seed", required_argument, nullptr, 's'},
							{ "help", no_argument, nullptr, 'h'} };



	while ((option = getopt_long(argc, argv, "i:o::te::q::s:h", longOpts, &option_index)) != -1)
	{
		std::string arg;
		switch (option)
		{
		case ('i'):
			arg = optarg;
			inputName = arg;
			break;
		case ('o'):
			copyImage = true;
			if (optarg != NULL)
			{
				arg = optarg;
				outputName = arg;
			}
			break;
		case ('s'):
			arg = optarg;
			seed = arg;
			break;
		//case ('t'):
		//	arg = optarg;
		//	randItemLocations = true;
		//	if (arg.find('a') != std::string::npos)
		//		randItemLocationsByArea = true;
		//	if (arg.find('t') != std::string::npos)
		//		randItemLocationsByType = true;
		//	break;
		case ('q'):
			randEquips = true;
			if (optarg != NULL)
			{
				arg = optarg;
			
				if (arg.find('t') != std::string::npos)
					randEquipsByType = true;
				if (arg.find('b') != std::string::npos)
					randEquipsByBlock = true;
				if (arg.find('r') != std::string::npos)
					equipTrueRandomize = true;
			}
			break;
		case ('e'):
			randEnemyLocations = true;
			if (optarg != NULL)
			{
				arg = optarg;

				if (arg.find('a') != std::string::npos)
					randEnemyLocationsByArea = true;
			}
			break;
		case ('h'):
			//HELP COMMENT
			std::cout << "Castlevania Curse of Darkness Randomizer\n\n" <<
				"--input (-i) \"FILE-PATH\"                 = Path to input disc image\n\n" <<
				"--output (-o) [name] (optional)            = Include to have program create copy of disc image\n" <<
				"           Include name to force output file name (otherwise set to reflect current seed)\n\n" <<
				"           WARNING: Including -o will copy your iso, this will drastically increase program runtime, and will cost 4GB every time a new file is generated!" <<
				"--seed (-s) \"SEED\"                       = Use specific seed (otherwise generating by system time)\n\n" <<
				"--items (-t) [a,t]                         = Enable item location randomization\n" <<
				"           a - randomizes item locations according to area they appear in\n" <<
				"           t - randomizes item locations according to item type\n\n" <<
				"--equips (-q) [b,r,t]                      = Enables equip stat randomization\n" <<
				"           b - replaces all of an equips stats with all of another items stats (as opposed to shuffling each stat individually)\n" <<
				"           t - randomizes equip stats by type (weapons only with other reapons etc.)\n" <<
				"           r - randomly generates new numbers for equip stats (as opposed to shuffling between equips)\n\n" <<
				"--help (-h)                                = Displays this help message\n\n";
			exit(0);
			break;
		}


	}//while


	//ERROR CHECK
	if (randItemLocations == false && randEquips == false)
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