#include "DefaultEnemyLocations.h"
#include "EnemyIDs.h"
#include "Util.h"

enemyLocSet DefaultEnemyLocations::getDefaultEnemyLocationSet(Zone z)
{
	enemyLocSet out;
	switch (z)
	{
	case (CAST):
		out.emplace_back(0x15B4EFC0, std::vector<uint16_t> {SKELETON_LV1}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x15C77FB0, std::vector<uint16_t> {SKELETON_LV1, FIGHT_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 1, 1, 12, 6) });
		out.emplace_back(0x163FEF30, std::vector<uint16_t> {SKELETON_LV1, FENRIR_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x165F70B0, std::vector<uint16_t> {SKELETON_LV1}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x167FAF30, std::vector<uint16_t> {SKELETON_LV1, FENRIR_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x16993940, std::vector<uint16_t> {CYCLOPS_LV8, FIGHT_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 5, 0, 0, 2, 0, 1, 1, 1, 1) });
		out.emplace_back(0x16993B80, std::vector<uint16_t> {SKELETON_LV1}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 10, 5) });
		out.emplace_back(0x15B4ED80, std::vector<uint16_t> {MERMAN_LV4}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x15D970B0, std::vector<uint16_t> {SKELETON_LV1, EXECUTIONER_LV2, FIGHT_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 7, 5),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1) });
		out.emplace_back(0x176DD2C0, std::vector<uint16_t> {GHOST_LV3}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 3, 3) });
		out.emplace_back(0x176DD3E0, std::vector<uint16_t> {SKELETON_LV1}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x180B06C0, std::vector<uint16_t> {FENRIR_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x17BB4ED0, std::vector<uint16_t> {SKELETON_LV1, FENRIR_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 2, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x17BB5110, std::vector<uint16_t> {FENRIR_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x17BB52C0, std::vector<uint16_t> {GHOST_LV3}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x180B0900, std::vector<uint16_t> {FENRIR_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x178FD5B0, std::vector<uint16_t> {GHOST_LV3, FENRIR_LV5, FIGHT_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 1, 1, 6, 3),
			EnemyLocation(1, 4, 0, 0, 2, 0, 1, 1, 6, 3) });
		out.emplace_back(0x18521FD0, std::vector<uint16_t> {ZOMBIE_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x185220F0, std::vector<uint16_t> {ZOMBIE_LV5, SKELETON_LV1}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 2, 2) });
		out.emplace_back(0x1624E4C0, std::vector<uint16_t> {WIZARD_LV6}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 2, 2) });
		out.emplace_back(0x1624E5E0, std::vector<uint16_t> {SKELETON_LV1, ZOMBIE_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 3),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 6, 3) });
		out.emplace_back(0x16011CC0, std::vector<uint16_t> {ZOMBIE_LV5, WIZARD_LV6}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x16011E70, std::vector<uint16_t> {ZOMBIE_LV5, FIGHT_BARRIER, SKELETON_BLAZE_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 0, 1, 3, 3),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 6, 4),
			EnemyLocation(1, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 5, 0, 0, 0, 0, 2, 1, 1, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 1, 1, 2, 2) });
		out.emplace_back(0x182BE650, std::vector<uint16_t> {ZOMBIE_LV5, WIZARD_LV6}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x182BE800, std::vector<uint16_t> {ZOMBIE_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 12, 6) });
		out.emplace_back(0x16DAFA80, std::vector<uint16_t> {ARMOR_KNIGHT_LV7}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x16DAFBA0, std::vector<uint16_t> {ARMOR_KNIGHT_LV7, WIZARD_LV6, FIGHT_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 5, 5) });
		out.emplace_back(0x16DB0020, std::vector<uint16_t> {ARMOR_KNIGHT_LV7, WIZARD_LV6}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x16DB01D0, std::vector<uint16_t> {ARMOR_KNIGHT_LV7}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x16DAFF00, std::vector<uint16_t> {ARMOR_KNIGHT_LV7}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 2, 2) });
		out.emplace_back(0x170ABEF0, std::vector<uint16_t> {WIZARD_LV6, SKELETON_BLAZE_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 2, 2) });
		out.emplace_back(0x170AC0A0, std::vector<uint16_t> {SKELETON_BLAZE_LV5, WHITE_DRAGON_LV10}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 2, 2),
			EnemyLocation(1, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 1, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x170AC640, std::vector<uint16_t> {SKELETON_BLAZE_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 3, 3) });
		out.emplace_back(0x170AC2E0, std::vector<uint16_t> {SKELETON_BLAZE_LV5, WHITE_DRAGON_LV10, FIGHT_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 5, 0, 0, 2, 0, 1, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 6, 4),
			EnemyLocation(1, 5, 0, 0, 2, 0, 1, 1, 1, 1),
			EnemyLocation(0, 5, 0, 0, 1, 0, 0, 1, 1, 1),
			EnemyLocation(1, 5, 0, 0, 3, 0, 0, 1, 1, 1) });
		break;
	case (MNTN):
		out.emplace_back(0x2837B4C0, std::vector<uint16_t> {LIZARDMAN_LV6, FENRIR_LV5, BATTLE_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 2, 2) });
		out.emplace_back(0x2850E0C0, std::vector<uint16_t> {SKELETON_LV1, FENRIR_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 10, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 3, 1, 1) });
		out.emplace_back(0x2850E960, std::vector<uint16_t> {ORC_LV7, SKELETON_LV1}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 7, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 5, 1) });
		out.emplace_back(0x2850E4C0, std::vector<uint16_t> {SKELETON_LV1, BATTLE_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 2, 2),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 2, 2),
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 2, 4, 2),
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 2, 4, 2),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2A22FDD0, std::vector<uint16_t> {ORC_LV7, SKELETON_LV1}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2A2300A0, std::vector<uint16_t> {ORC_LV7, SKELETON_LV1}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 3, 1) });
		out.emplace_back(0x2A2302E0, std::vector<uint16_t> {FENRIR_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2A0C43B0, std::vector<uint16_t> {ZOMBIE_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 2),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 1) });
		out.emplace_back(0x2A0C45F0, std::vector<uint16_t> {ORC_LV7}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 3, 0, 0, 0, 0, 0, 3, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2A843940, std::vector<uint16_t> {SKELETON_LV1}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 4, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x2A843AF0, std::vector<uint16_t> {SKELETON_LV1}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 4, 2) });
		out.emplace_back(0x2A843CA0, std::vector<uint16_t> {CYCLOPS_LV8, FIGHT_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 7, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2A72B9C0, std::vector<uint16_t> {ZOMBIE_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 1) });
		out.emplace_back(0x2A72BD20, std::vector<uint16_t> {ORC_LV7, LIZARDMAN_LV6}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 5, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1) });
		out.emplace_back(0x28886530, std::vector<uint16_t> {ARMOR_KNIGHT_LV7, WIZARD_LV6}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 3, 0, 0, 2, 0, 0, 2, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x28AFBE60, std::vector<uint16_t> {ARMOR_KNIGHT_LV7, ORC_LV7, FIGHT_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x28AFBE60, std::vector<uint16_t> {ARMOR_KNIGHT_LV7, ORC_LV7, FIGHT_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2A479AA0, std::vector<uint16_t> {SKELETON_BLAZE_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0x2A479DD0, std::vector<uint16_t> {SKELETON_BLAZE_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0x28CD67D0, std::vector<uint16_t> {CYCLOPS_LV8}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 1, 1) });
		out.emplace_back(0x28CD6990, std::vector<uint16_t> {BLOOD_SKELETON_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x28CD6F90, std::vector<uint16_t> {CYCLOPS_LV8, SLOGRA_LV45, SKELETON_BLAZE_LV5, FIGHT_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 7, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 7, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 7, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x28DC8C40, std::vector<uint16_t> {GHOST_LV3, SKELETON_BLAZE_LV5}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x28F38A50, std::vector<uint16_t> {SPIRIT_LV4}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1) });
		out.emplace_back(0x2A60FC40, std::vector<uint16_t> {COCKATRICE_LV6, WIZARD_LV6}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 3, 0, 0, 2, 0, 0, 2, 1, 1) });
		out.emplace_back(0x2A60FE40, std::vector<uint16_t> {COCKATRICE_LV6, SKELETON_LV1}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 5, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 5, 1) });
		out.emplace_back(0x29044930, std::vector<uint16_t> {COCKATRICE_LV6}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2A60FC40, std::vector<uint16_t> {COCKATRICE_LV6, WIZARD_LV6}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 3, 0, 0, 2, 0, 0, 2, 1, 1) });
		out.emplace_back(0x2923C7E0, std::vector<uint16_t> {SKELETON_LV1}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 6, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 6, 2) });
		out.emplace_back(0x2923C2D0, std::vector<uint16_t> {EFREET_LV7, FIGHT_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 7, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 7, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2923C5A0, std::vector<uint16_t> {EFREET_LV7, FIGHT_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 7, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2923CAB0, std::vector<uint16_t> {GOLDEN_BONES_LV1, SKELETON_LV1}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 3, 3) });
		out.emplace_back(0x293B0230, std::vector<uint16_t> {LIZARDMAN_LV6}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		break;
	case (TMPL):
		break;
	case (MTVA):
		break;
	case (FRST):
		break;
	case (CDVA):
		break;
	case (CLCK):
		break;
	case (RUIN):
		break;
	case (INFT):
		break;
	case (DRAC):
		break;
	}
	return out;
}