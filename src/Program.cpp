#include <ctime>
#include <getopt.h>
#include <iostream>
#include <utility>
#include "../h/Program.h"

Program::Program(int argc, char** argv)
{
	get_options(argc, argv);

	if (seed != "")
		std::srand((unsigned int) std::hash<std::string> {} (seed));
	else
		std::srand((unsigned int) std::time(0));

	run();

	write();
	file.close();
}

void Program::run()
{
	if (randEquips)
	{
		items.getDefaults();
		items.randStats(randEquipsByType, randEquipsByBlock, equipTrueRandomize);
	}
}

void Program::get_options(int argc, char** argv)
{
	int option_index = 0, option = 0;
	opterr = 0;

	struct option longOpts[] = { 
							{ "file", required_argument, nullptr, 'f'},
							{ "items", no_argument, nullptr, 'i'},
							//{ "enemies", no_argument, nullptr, 'e'},
							{ "equips", optional_argument, nullptr, 'q'},
							{ "seed", required_argument, nullptr, 's'},
							{ "help", no_argument, nullptr, 'h'} };



	while ((option = getopt_long(argc, argv, "f:i:e:q::s:h", longOpts, &option_index)) != -1)
	{
		std::string arg;
		switch (option)
		{
		case ('f'):
			arg = optarg;
			file.open(arg, std::ios::out | std::ios::in | std::ios::binary);
			break;
		case ('s'):
			arg = optarg;
			seed = arg;
			break;
		//case ('i'):
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
		//case ('e'):
		//	randEnemies = true;
		//	break;
		case ('h'):
			//HELP COMMENT
			std::cout << "Castlevania Curse of Darkness Randomizer\n\n" <<
				"--file (-f) \"FILE-PATH\"                    = Path to disc image\n\n" <<
				"--seed (-s) \"SEED\"                         = Use specific seed (otherwise generating by system time)\n\n" << 
				"--items (-i) [a,t]                         = Enable item location randomization\n" <<
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
	if (!file.is_open())
	{
		//ERROR - File opening failed
		std::cerr << "ERROR - Failed to open target file\nProgram will terminate\n";
		exit(1);
	}

}




void Program::write()
{
	if (randEquips)
	{
		items.write(file);
	}
}