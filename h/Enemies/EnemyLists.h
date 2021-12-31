#pragma once
#include <vector>
#include "../Util.h"
#include "EnemyEncounter.h"


class EnemyEncounterLists
{
public:
	EnemyEncounterLists() {}

	void getDefaults(std::fstream & fs);

	enemyEncounterSet castSet;
	enemyEncounterSet mntnSet;
	enemyEncounterSet tmplSet;
	enemyEncounterSet mtvaSet;
	enemyEncounterSet frstSet;
	enemyEncounterSet etntSet;
	enemyEncounterSet evmrSet;
	enemyEncounterSet cdvaSet;
	enemyEncounterSet clckSet;
	enemyEncounterSet ruinSet;
	enemyEncounterSet inftSet;
	enemyEncounterSet dracSet;

	void write(std::fstream & fs);
};