#include "../../h/Enemies/EnemyLists.h"
#include "../../h/DefaultTables/DefaultEnemyLocations.h"

void EnemyLocationLists::getDefaults()
{
	DefaultEnemyLocations locs;

	castSet = locs.getDefaultEnemyLocationSet(CAST);
	mntnSet = locs.getDefaultEnemyLocationSet(MNTN);
	tmplSet = locs.getDefaultEnemyLocationSet(TMPL);
	mtvaSet = locs.getDefaultEnemyLocationSet(MTVA);
	frstSet = locs.getDefaultEnemyLocationSet(FRST);
	etntSet = locs.getDefaultEnemyLocationSet(ETNT);
	evmrSet = locs.getDefaultEnemyLocationSet(EVMR);
	cdvaSet = locs.getDefaultEnemyLocationSet(CDVA);
	clckSet = locs.getDefaultEnemyLocationSet(CLCK);
	ruinSet = locs.getDefaultEnemyLocationSet(RUIN);
	inftSet = locs.getDefaultEnemyLocationSet(INFT);
	dracSet = locs.getDefaultEnemyLocationSet(DRAC);
}