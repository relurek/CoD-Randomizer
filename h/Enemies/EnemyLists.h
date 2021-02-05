#pragma once
#include <vector>
#include "../Util.h"


class EnemyLists
{
public:
	EnemyLists() {}

	void getDefaults();
private:
	enemyLocSet castSet;
	enemyLocSet mntnSet;
	enemyLocSet tmplSet;
	enemyLocSet mtvaSet;
	enemyLocSet frstSet;
	enemyLocSet cdvaSet;
	enemyLocSet clckSet;
	enemyLocSet ruinSet;
	enemyLocSet inftSet;
	enemyLocSet dracSet;
};