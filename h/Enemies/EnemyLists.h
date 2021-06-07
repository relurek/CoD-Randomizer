#pragma once
#include <vector>
#include "../Util.h"
#include "EnemyEncounter.h"


class EnemyLocationLists
{
public:
	EnemyLocationLists() {}

	void getDefaults();

	enemyLocSet castSet;
	enemyLocSet mntnSet;
	enemyLocSet tmplSet;
	enemyLocSet mtvaSet;
	enemyLocSet frstSet;
	enemyLocSet etntSet;
	enemyLocSet evmrSet;
	enemyLocSet cdvaSet;
	enemyLocSet clckSet;
	enemyLocSet ruinSet;
	enemyLocSet inftSet;
	enemyLocSet dracSet;

	void write(std::fstream & fs);
};