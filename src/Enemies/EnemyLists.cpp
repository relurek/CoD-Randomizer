#include "../../h/Enemies/EnemyLists.h"
#include "../../h/DefaultTables/DefaultEnemyLocations.h"

void EnemyEncounterLists::getDefaults(std::fstream & fs)
{
	DefaultEnemyLocations locs;

	castSet = locs.getDefaultEnemyLocationSet(fs, CAST);
	mntnSet = locs.getDefaultEnemyLocationSet(fs, MNTN);
	tmplSet = locs.getDefaultEnemyLocationSet(fs, TMPL);
	mtvaSet = locs.getDefaultEnemyLocationSet(fs, MTVA);
	frstSet = locs.getDefaultEnemyLocationSet(fs, FRST);
	etntSet = locs.getDefaultEnemyLocationSet(fs, ETNT);
	evmrSet = locs.getDefaultEnemyLocationSet(fs, EVMR);
	cdvaSet = locs.getDefaultEnemyLocationSet(fs, CDVA);
	clckSet = locs.getDefaultEnemyLocationSet(fs, CLCK);
	ruinSet = locs.getDefaultEnemyLocationSet(fs, RUIN);
	inftSet = locs.getDefaultEnemyLocationSet(fs, INFT);
	dracSet = locs.getDefaultEnemyLocationSet(fs, DRAC);
}

void writeLocSet(std::fstream & fs, enemyEncounterSet & set)
{
	for (EnemyEncounter & enc : set)
	{
		enc.write(fs);
	}
}

void EnemyEncounterLists::write(std::fstream & fs)
{
	writeLocSet(fs, castSet);
	writeLocSet(fs, mntnSet);
	writeLocSet(fs, tmplSet);
	writeLocSet(fs, mtvaSet);
	writeLocSet(fs, frstSet);
	writeLocSet(fs, etntSet);
	writeLocSet(fs, evmrSet);
	writeLocSet(fs, cdvaSet);
	writeLocSet(fs, clckSet);
	writeLocSet(fs, ruinSet);
	writeLocSet(fs, inftSet);
	writeLocSet(fs, dracSet);
}
