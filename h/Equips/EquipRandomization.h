#pragma once
#include "EquipStatBlocks.h"
#include "Util.h"


class EquipRandomization
{
public:
	void randomizeWeapons(EquipStatSet & wep);
	void randomizeArmor(EquipStatSet & arm);
	void randomizeAll(EquipStatSet & all);
private:
	void nameShuffle(EquipStatSet & blocks);
	void discShuffle(EquipStatSet & blocks);
	void recipeShuffle(EquipStatSet & blocks);
	void valueShuffle(EquipStatSet & blocks);
	void sellShuffle(EquipStatSet & blocks);
	void strShuffle(EquipStatSet & blocks);
	void conShuffle(EquipStatSet & blocks);
	void lukShuffle(EquipStatSet & blocks);
	void atkShuffle(EquipStatSet & blocks);
	void defShuffle(EquipStatSet & blocks);
	void poisonResShuffle(EquipStatSet & blocks);
	void curseResShuffle(EquipStatSet & blocks);
	void stoneResShuffle(EquipStatSet & blocks);
	void paralyzeResShuffle(EquipStatSet & blocks);
	void fireResShuffle(EquipStatSet & blocks);
	void iceResShuffle(EquipStatSet & blocks);
	void thunderResShuffle(EquipStatSet & blocks);
	void windResShuffle(EquipStatSet & blocks);
	void earthResShuffle(EquipStatSet & blocks);
	void lightResShuffle(EquipStatSet & blocks);
	void darkResShuffle(EquipStatSet & blocks);
	void skillShuffle(EquipStatSet & blocks);
	void animSpeedShuffle(EquipStatSet & blocks);
};