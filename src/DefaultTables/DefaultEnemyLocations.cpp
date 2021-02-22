#include "../../h/DefaultTables/DefaultEnemyLocations.h"
#include "../../h/IDs/EnemyIDs.h"
#include "../../h/Util.h"

enemyLocSet DefaultEnemyLocations::getDefaultEnemyLocationSet(Zone z)
{
	enemyLocSet out;
	switch (z)
	{
	case (CAST):
		out.emplace_back(0x15B4EFC0, std::vector<uint16_t> {SKELETON_LV1, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x15C77FB0, std::vector<uint16_t> {SKELETON_LV1, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 1, 1, 12, 6) });
		out.emplace_back(0x163FEF30, std::vector<uint16_t> {SKELETON_LV1, FENRIR_LV5, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x165F70B0, std::vector<uint16_t> {SKELETON_LV1, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x167FAF30, std::vector<uint16_t> {SKELETON_LV1, FENRIR_LV5, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x16993940, std::vector<uint16_t> {CYCLOPS_LV8, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {
			EnemyLocation(0, 5, 0, 0, 2, 0, 1, 1, 1, 1) });
		out.emplace_back(0x16993B80, std::vector<uint16_t> {SKELETON_LV1, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 10, 5) });
		out.emplace_back(0x15B4ED80, std::vector<uint16_t> {MERMAN_LV4, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x15D970B0, std::vector<uint16_t> {SKELETON_LV1, EXECUTIONER_LV2, FIGHT_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 7, 5),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1) });
		out.emplace_back(0x176DD2C0, std::vector<uint16_t> {GHOST_LV3, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 3, 3) });
		out.emplace_back(0x176DD3E0, std::vector<uint16_t> {SKELETON_LV1, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x180B06C0, std::vector<uint16_t> {FENRIR_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x17BB4ED0, std::vector<uint16_t> {SKELETON_LV1, FENRIR_LV5, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 2, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x17BB5110, std::vector<uint16_t> {FENRIR_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x17BB52C0, std::vector<uint16_t> {GHOST_LV3, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x180B0900, std::vector<uint16_t> {FENRIR_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x178FD5B0, std::vector<uint16_t> {GHOST_LV3, FENRIR_LV5, FIGHT_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 1, 1, 6, 3),
			EnemyLocation(1, 4, 0, 0, 2, 0, 1, 1, 6, 3) });
		out.emplace_back(0x18521FD0, std::vector<uint16_t> {ZOMBIE_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x185220F0, std::vector<uint16_t> {ZOMBIE_LV5, SKELETON_LV1, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 2, 2) });
		out.emplace_back(0x1624E4C0, std::vector<uint16_t> {WIZARD_LV6, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 2, 2) });
		out.emplace_back(0x1624E5E0, std::vector<uint16_t> {SKELETON_LV1, ZOMBIE_LV5, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 3),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 6, 3) });
		out.emplace_back(0x16011CC0, std::vector<uint16_t> {ZOMBIE_LV5, WIZARD_LV6, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x16011E70, std::vector<uint16_t> {ZOMBIE_LV5, FIGHT_BARRIER, SKELETON_BLAZE_LV5, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 0, 1, 3, 3),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 6, 4),
			EnemyLocation(1, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 5, 0, 0, 0, 0, 2, 1, 1, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 1, 1, 2, 2) });
		out.emplace_back(0x182BE650, std::vector<uint16_t> {ZOMBIE_LV5, WIZARD_LV6, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x182BE800, std::vector<uint16_t> {ZOMBIE_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 12, 6) });
		out.emplace_back(0x16DAFA80, std::vector<uint16_t> {ARMOR_KNIGHT_LV7, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x16DAFBA0, std::vector<uint16_t> {ARMOR_KNIGHT_LV7, WIZARD_LV6, FIGHT_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 5, 5) });
		out.emplace_back(0x16DB0020, std::vector<uint16_t> {ARMOR_KNIGHT_LV7, WIZARD_LV6, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x16DB01D0, std::vector<uint16_t> {ARMOR_KNIGHT_LV7, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x16DAFF00, std::vector<uint16_t> {ARMOR_KNIGHT_LV7, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 2, 2) });
		out.emplace_back(0x170ABEF0, std::vector<uint16_t> {WIZARD_LV6, SKELETON_BLAZE_LV5, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 2, 2) });
		out.emplace_back(0x170AC0A0, std::vector<uint16_t> {SKELETON_BLAZE_LV5, WHITE_DRAGON_LV10, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 2, 2),
			EnemyLocation(1, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 1, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x170AC640, std::vector<uint16_t> {SKELETON_BLAZE_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 3, 3) });
		out.emplace_back(0x170AC2E0, std::vector<uint16_t> {SKELETON_BLAZE_LV5, WHITE_DRAGON_LV10, FIGHT_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 5, 0, 0, 2, 0, 1, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 6, 4),
			EnemyLocation(1, 5, 0, 0, 2, 0, 1, 1, 1, 1),
			EnemyLocation(0, 5, 0, 0, 1, 0, 0, 1, 1, 1),
			EnemyLocation(1, 5, 0, 0, 3, 0, 0, 1, 1, 1) });
		out.emplace_back(0x157AA1F0, std::vector<uint16_t> {UNKNOWN_1, BATTLE_BARRIER, SKELETON_LV1, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 1, 2, 0, 0, 0, 0, 1, 12, 6) });
		break;
	case (MNTN):
		out.emplace_back(0x2837B4C0, std::vector<uint16_t> {LIZARDMAN_LV6, FENRIR_LV5, BATTLE_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 2, 2) });
		out.emplace_back(0x2850E0C0, std::vector<uint16_t> {SKELETON_LV1, FENRIR_LV5, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 10, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 3, 1, 1) });
		out.emplace_back(0x2850E960, std::vector<uint16_t> {ORC_LV7, SKELETON_LV1, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 7, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 5, 1) });
		out.emplace_back(0x2850E4C0, std::vector<uint16_t> {SKELETON_LV1, BATTLE_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 2, 2),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 2, 2),
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 2, 4, 2),
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 2, 4, 2),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2A22FDD0, std::vector<uint16_t> {ORC_LV7, SKELETON_LV1, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2A2300A0, std::vector<uint16_t> {ORC_LV7, SKELETON_LV1, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 3, 1) });
		out.emplace_back(0x2A2302E0, std::vector<uint16_t> {FENRIR_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2A0C43B0, std::vector<uint16_t> {ZOMBIE_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 2),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 1) });
		out.emplace_back(0x2A0C45F0, std::vector<uint16_t> {ORC_LV7, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 3, 0, 0, 0, 0, 0, 3, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2A843940, std::vector<uint16_t> {SKELETON_LV1, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 4, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x2A843AF0, std::vector<uint16_t> {SKELETON_LV1, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 4, 2) });
		out.emplace_back(0x2A843CA0, std::vector<uint16_t> {CYCLOPS_LV8, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 7, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2A72B7C0, std::vector<uint16_t> {LIZARDMAN_LV6, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 3, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(0, 3, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2A72B9C0, std::vector<uint16_t> {ZOMBIE_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 1) });
		out.emplace_back(0x2A72BD20, std::vector<uint16_t> {ORC_LV7, LIZARDMAN_LV6, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 5, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1) });
		out.emplace_back(0x28886530, std::vector<uint16_t> {ARMOR_KNIGHT_LV7, WIZARD_LV6, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 3, 0, 0, 2, 0, 0, 2, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x28AFBE60, std::vector<uint16_t> {ARMOR_KNIGHT_LV7, ORC_LV7, FIGHT_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x28AFBE60, std::vector<uint16_t> {ARMOR_KNIGHT_LV7, ORC_LV7, FIGHT_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2A479AA0, std::vector<uint16_t> {SKELETON_BLAZE_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0x2A479DD0, std::vector<uint16_t> {SKELETON_BLAZE_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0x28CD67D0, std::vector<uint16_t> {CYCLOPS_LV8, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 1, 1) });
		//out.emplace_back(0x28CD6990, std::vector<uint16_t> {BLOOD_SKELETON_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
		//	EnemyLocation(0, 1, 0, 0, 2, 0, 0, 1, 1, 1),
		//	EnemyLocation(0, 1, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x28CD6F90, std::vector<uint16_t> {CYCLOPS_LV8, SLOGRA_LV45, SKELETON_BLAZE_LV5, FIGHT_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 7, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 7, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 7, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x28DC8C40, std::vector<uint16_t> {GHOST_LV3, SKELETON_BLAZE_LV5, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x28F38A50, std::vector<uint16_t> {SPIRIT_LV4, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1) });
		out.emplace_back(0x2A60FC40, std::vector<uint16_t> {COCKATRICE_LV6, WIZARD_LV6, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 3, 0, 0, 2, 0, 0, 2, 1, 1) });
		out.emplace_back(0x2A60FE40, std::vector<uint16_t> {COCKATRICE_LV6, SKELETON_LV1, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 5, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 5, 1) });
		out.emplace_back(0x29044930, std::vector<uint16_t> {COCKATRICE_LV6, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2A60FC40, std::vector<uint16_t> {COCKATRICE_LV6, WIZARD_LV6, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 3, 0, 0, 2, 0, 0, 2, 1, 1) });
		out.emplace_back(0x2923C7E0, std::vector<uint16_t> {SKELETON_LV1, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 6, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 6, 2) });
		out.emplace_back(0x2923C2D0, std::vector<uint16_t> {EFREET_LV7, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 7, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 7, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2923C5A0, std::vector<uint16_t> {EFREET_LV7, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 7, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2923CAB0, std::vector<uint16_t> {GOLDEN_BONES_LV1, SKELETON_LV1, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 3, 3) });
		out.emplace_back(0x293B0230, std::vector<uint16_t> {LIZARDMAN_LV6, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x28CD6E70, std::vector<uint16_t> {SKELETON_BLAZE_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2A479AA0, std::vector<uint16_t> {SKELETON_BLAZE_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		//out.emplace_back(0x28CD6990, std::vector<uint16_t> {BLOOD_SKELETON_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
		//	EnemyLocation(0, 1, 0, 0, 2, 0, 0, 1, 1, 1),
		//	EnemyLocation(0, 1, 0, 0, 2, 0, 0, 1, 1, 1) });
		break;
	case (TMPL):
		out.emplace_back(0xC6B0640, std::vector<uint16_t> {SKELETON_LV9, UNKNOWN_2, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 3, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 3, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 3, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 3, 1) });
		out.emplace_back(0xC6B0B30, std::vector<uint16_t> {SKELETON_LV9, ORC_LV7, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 4, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 4, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 3, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 3, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0xC81A550, std::vector<uint16_t> {EFREET_LV11, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0xC81A790, std::vector<uint16_t> {ORC_LV7, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1) });
		out.emplace_back(0xC81A940, std::vector<uint16_t> {ORC_LV7, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1) });
		out.emplace_back(0xEA7D130, std::vector<uint16_t> {FLEA_MAN_LV7, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 2),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 2),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 2) });
		out.emplace_back(0xEC31E30, std::vector<uint16_t> {FLEA_MAN_LV7, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 2),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 2),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 2) });
		out.emplace_back(0xCE8E580, std::vector<uint16_t> {FLEA_MAN_LV7, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 2),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 2),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 2) });
		out.emplace_back(0xCE8E7C0, std::vector<uint16_t> {ARMOR_KNIGHT_LV15, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0xCE8E100, std::vector<uint16_t> {FLEA_MAN_LV7, BARRIER_Q, FLEA_MAN_LV40, 0}, std::vector<EnemyLocation> {
			EnemyLocation(0, 1, 32, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 1, 32, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 1, 32, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 0, 0),
			EnemyLocation(2, 1, 16, 0, 0, 0, 0, 1, 5, 1),
			EnemyLocation(2, 1, 16, 0, 0, 0, 0, 1, 5, 1),
			EnemyLocation(2, 1, 16, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0xCE8EB20, std::vector<uint16_t> {ARMOR_KNIGHT_LV15, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0xCE8DB60, std::vector<uint16_t> {FLEA_MAN_LV7, FLEA_MAN_LV40, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 32, 0, 2, 0, 0, 1, 4, 1),
			EnemyLocation(0, 1, 32, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 1, 32, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 1, 32, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 1, 34, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(1, 1, 16, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(1, 1, 16, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(1, 1, 16, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(1, 1, 16, 0, 0, 0, 0, 1, 2, 1) });
		out.emplace_back(0xD110F60, std::vector<uint16_t> {GHOST_LV11, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 4, 2),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 4, 2),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0xD1109C0, std::vector<uint16_t> {GHOST_LV11, FIGHT_BARRIER, FLEA_MAN_LV7, FLEA_MAN_LV40}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 5, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 5, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(2, 5, 32, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(2, 5, 32, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(3, 5, 16, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(3, 5, 16, 0, 0, 0, 0, 1, 3, 1) });
		out.emplace_back(0xEE8A250, std::vector<uint16_t> {ARMOR_KNIGHT_LV15, FIGHT_BARRIER, FLEA_MAN_LV75, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 5, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 5, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(2, 5, 16, 0, 0, 0, 0, 1, 6, 1) });
		out.emplace_back(0xEE8A970, std::vector<uint16_t> {ARMOR_KNIGHT_LV15, FLEA_MAN_LV40, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 4, 1, 1),
			EnemyLocation(1, 1, 16, 0, 0, 0, 0, 1, 6, 1),
			EnemyLocation(1, 1, 16, 0, 0, 0, 0, 1, 6, 1),
			EnemyLocation(1, 1, 16, 0, 0, 0, 0, 1, 6, 1) });
		out.emplace_back(0xEE8A640, std::vector<uint16_t> {ARMOR_KNIGHT_LV15, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 2, 1, 1) });
		out.emplace_back(0xDC346B0, std::vector<uint16_t> {DEAD_BARON_LV12, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0xDB64680, std::vector<uint16_t> {ARMOR_KNIGHT_LV15, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0xF0328E0, std::vector<uint16_t> {FENRIR_LV10, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0xF032690, std::vector<uint16_t> {FENRIR_LV10, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0xDB644D0, std::vector<uint16_t> {DEAD_FENCER_LV12, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0xF0324E0, std::vector<uint16_t> {DEAD_FENCER_LV12, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0xDB64150, std::vector<uint16_t> {DEAD_FENCER_LV12, FLEA_MAN_LV7, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 8, 2) });
		out.emplace_back(0xDB64A90, std::vector<uint16_t> {DEAD_FENCER_LV12, FLEA_MAN_LV7, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 8, 2) });
		out.emplace_back(0xF031DE0, std::vector<uint16_t> {FENRIR_LV10, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 4, 2),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 1, 1) });
		out.emplace_back(0xF032160, std::vector<uint16_t> {FENRIR_LV10, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 4, 2),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 1, 1) });
		out.emplace_back(0xDDC2300, std::vector<uint16_t> {DEAD_BARON_LV12, ARMOR_KNIGHT_LV15, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0xDF34450, std::vector<uint16_t> {BLAZE_MASTER_LV14, FENRIR_LV10, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 2, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 3, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 3, 1) });
		out.emplace_back(0xDF34860, std::vector<uint16_t> {DEAD_BARON_LV12, FIGHT_BARRIER, FENRIR_LV10, BLAZE_MASTER_LV14}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 5, 32, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(3, 5, 32, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(3, 5, 32, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(3, 5, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(3, 5, 0, 0, 0, 0, 2, 1, 1, 1),
			EnemyLocation(3, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(3, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(3, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(3, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 5, 16, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 5, 16, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 5, 16, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 5, 16, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 5, 16, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 5, 16, 0, 0, 0, 1, 1, 1, 1) });
		out.emplace_back(0xF1EC6F0, std::vector<uint16_t> {WIZARD_LV8, BLAZE_MASTER_LV14, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(0, 1, 16, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(1, 1, 16, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(1, 1, 16, 0, 0, 0, 0, 1, 4, 1) });
		out.emplace_back(0xF1ECED0, std::vector<uint16_t> {WIZARD_LV8, BLAZE_MASTER_LV14, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 4, 1) });
		out.emplace_back(0xD46DF80, std::vector<uint16_t> {LESSER_DEMON_LV13, WIZARD_LV8, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 3, 16, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 3, 16, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0xD46E470, std::vector<uint16_t> {LESSER_DEMON_LV13, WIZARD_LV8, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 16, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0xD46E740, std::vector<uint16_t> {LESSER_DEMON_LV13, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 1, 16, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0xD46EA20, std::vector<uint16_t> {LESSER_DEMON_LV13, WIZARD_LV8, LESSER_DEMON_LV23, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 32, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 1, 16, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 1, 16, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 1, 16, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0xD7F1B60, std::vector<uint16_t> {SPECTRAL_SWORD_LV15, PHANTOM_SWORD_LV15, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0xD7F2050, std::vector<uint16_t> {SPECTRAL_SWORD_LV15, PHANTOM_SWORD_LV15, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 3, 32, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 3, 32, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 3, 32, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 3, 32, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 3, 32, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0xE123BE0, std::vector<uint16_t> {THIEF_LV15, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0xE123D50, std::vector<uint16_t> {THIEF_LV15, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0xE123EC0, std::vector<uint16_t> {THIEF_LV15, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0xF3455C0, std::vector<uint16_t> {SLOGRA_LV14, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0xF3456E0, std::vector<uint16_t> {SLOGRA_LV14, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0xE4577B0, std::vector<uint16_t> {THIEF_LV15, SKELETON_LV9, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 2, 1),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 3, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 2, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 2, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 2, 1) });
		out.emplace_back(0xE5E58D0, std::vector<uint16_t> {SKELETON_LV9, WIZARD_LV8, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 2, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 4, 1) });
		out.emplace_back(0xE5E5DB0, std::vector<uint16_t> {SLOGRA_LV14, WIZARD_LV8, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0xF4AC640, std::vector<uint16_t> {ECTOPLASM_LV16, LESSER_DEMON_LV13, FIGHT_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(1, 4, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0xF4ACD00, std::vector<uint16_t> {LESSER_DEMON_LV13, SLOGRA_LV14, FIGHT_BARRIER, SLOGRA_LV45}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(1, 5, 32, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(1, 5, 32, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(2, 7, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 5, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(3, 5, 16, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(3, 7, 16, 0, 2, 0, 0, 1, 1, 1) });
		break;
	case (MTVA):
		out.emplace_back(0x21B50580, std::vector<uint16_t> {MERMAN_LV15, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x21E99E80, std::vector<uint16_t> {BONE_SOLDIER_LV13, MERMAN_LV15, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 6, 4) });
		out.emplace_back(0x21E9A030, std::vector<uint16_t> {MERMAN_LV15, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x21E99D60, std::vector<uint16_t> {MERMAN_LV15, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 12, 6) });
		out.emplace_back(0x2424CBD0, std::vector<uint16_t> {ARMOR_KNIGHT_LV15, MERMAN_LV15, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 6, 4) });
		out.emplace_back(0x2424CD80, std::vector<uint16_t> {MERMAN_LV15, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 8, 4) });
		out.emplace_back(0x22096B10, std::vector<uint16_t> {MERMAN_LV15, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x22096880, std::vector<uint16_t> {THIEF_LV15, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x220969A0, std::vector<uint16_t> {BONE_SOLDIER_LV13, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 3, 3) });
		out.emplace_back(0x244F2D50, std::vector<uint16_t> {MERMAN_LV15, ECTOPLASM_LV16, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 3) });
		out.emplace_back(0x244F2A80, std::vector<uint16_t> {BONE_SOLDIER_LV13, FIGHT_BARRIER, ECTOPLASM_LV16, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(2, 4, 0, 0, 0, 0, 0, 1, 4, 2),
			EnemyLocation(0, 4, 0, 0, 2, 0, 0, 1, 8, 4) });
		out.emplace_back(0x22262900, std::vector<uint16_t> {BONE_SOLDIER_LV13, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 10, 2) });
		out.emplace_back(0x222627E0, std::vector<uint16_t> {ORC_LV14, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 6, 1) });
		out.emplace_back(0x222626C0, std::vector<uint16_t> {BONE_SOLDIER_LV13, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 5, 0, 0, 0, 1, 0, 1, 1, 1) });
		out.emplace_back(0x224CC650, std::vector<uint16_t> {BONE_SOLDIER_LV13, DARK_WARLOCK_LV17, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x224CC890, std::vector<uint16_t> {BONE_SOLDIER_LV13, DARK_WARLOCK_LV17, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x224CCBF0, std::vector<uint16_t> {BONE_SOLDIER_LV13, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 12, 6) });
		out.emplace_back(0x22E32750, std::vector<uint16_t> {DARK_WARLOCK_LV17, FISHMAN_LV45, FISHMAN_LV16, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(2, 1, 1, 0, 0, 0, 0, 1, 4, 4),
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 1, 2, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x24B2B870, std::vector<uint16_t> {GAIBON_LV17, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x24B2B6C0, std::vector<uint16_t> {FISHMAN_LV45, FISHMAN_LV16, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 3, 1, 0, 0, 0, 0, 1, 15, 4),
			EnemyLocation(0, 3, 2, 0, 0, 0, 0, 1, 15, 4) });
		out.emplace_back(0x22BDC1E0, std::vector<uint16_t> {FISHMAN_LV16, FISHMAN_LV45, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 1, 0, 0, 0, 0, 1, 4, 4),
			EnemyLocation(1, 1, 2, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x22BDC0C0, std::vector<uint16_t> {THIEF_LV15, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 1, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x24DFA1E0, std::vector<uint16_t> {GHOST_LV11, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x24DFA6F0, std::vector<uint16_t> {BLAZE_MASTER_LV14, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x24DFA390, std::vector<uint16_t> {GHOST_LV11, BLAZE_MASTER_LV14, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 2, 0, 0, 1, 3, 3) });
		out.emplace_back(0x24DFA5D0, std::vector<uint16_t> {BLAZE_MASTER_LV14, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 5, 5) });
		out.emplace_back(0x2376A650, std::vector<uint16_t> {FIGHT_BARRIER, WOLF_SKELETON_LV17, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 8, 4) });
		out.emplace_back(0x2376A890, std::vector<uint16_t> {WOLF_SKELETON_LV17, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x238F7FC0, std::vector<uint16_t> {FISHMAN_LV16, FISHMAN_LV45, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 3, 1, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(1, 3, 2, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x231AE830, std::vector<uint16_t> {FISHMAN_LV45, FISHMAN_LV16, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 1, 1, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(0, 1, 2, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x229FBE60, std::vector<uint16_t> {FIGHT_BARRIER, FISHMAN_LV16, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 7, 1, 0, 2, 0, 1, 1, 10, 4) });
		out.emplace_back(0x2345B720, std::vector<uint16_t> {GAIBON_LV17, FISHMAN_LV45, FISHMAN_LV16, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(2, 3, 1, 0, 0, 0, 0, 1, 4, 4),
			EnemyLocation(1, 3, 2, 0, 0, 0, 0, 1, 4, 4),
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2345B450, std::vector<uint16_t> {FISHMAN_LV16, FISHMAN_LV45, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 3, 1, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(0, 3, 1, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(1, 3, 2, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(1, 3, 2, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x2345B9F0, std::vector<uint16_t> {FROST_DRAGON_LV19, FIGHT_BARRIER, FISHMAN_LV16, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 5, 1, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 5, 1, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(2, 5, 1, 0, 0, 0, 0, 1, 6, 3),
			EnemyLocation(0, 5, 1, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2262F830, std::vector<uint16_t> {FROST_DRAGON_LV19, FISHMAN_LV16, FISHMAN_LV45, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 1, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 1, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 1, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 1, 1, 0, 0, 0, 0, 1, 6, 3),
			EnemyLocation(2, 1, 2, 0, 0, 0, 0, 1, 6, 3) });
		break;
	case (FRST):
		out.emplace_back(0x1CBABA40, std::vector<uint16_t> {VASSAGO_LV25, SNIPER_ORC_LV24, SPIRIT_LV19, ANOTHER_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 1, 1, 255, 2) });
		out.emplace_back(0x1E6F8500, std::vector<uint16_t> {BONE_SOLDIER_LV18, VASSAGO_LV25, SPIRIT_LV19, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 4, 2),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 4, 2),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 1, 1, 2, 2),
			EnemyLocation(2, 4, 0, 0, 0, 0, 1, 1, 2, 2) });
		out.emplace_back(0x1CBABDF0, std::vector<uint16_t> {SNIPER_ORC_LV24, VASSAGO_LV25, SPIRIT_LV19, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 7, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 7, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 1, 1, 255, 2) });
		out.emplace_back(0x1E6F80C0, std::vector<uint16_t> {BONE_SOLDIER_LV18, VASSAGO_LV25, SPIRIT_LV19, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 4, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 1, 1, 2, 2),
			EnemyLocation(2, 4, 0, 0, 0, 0, 1, 1, 2, 2) });
		out.emplace_back(0x1CDB1AD0, std::vector<uint16_t> {BONE_SOLDIER_LV18, VASSAGO_LV25, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 9, 3),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 6, 2),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 2, 1) });
		out.emplace_back(0x1CFD52D0, std::vector<uint16_t> {DARK_WARLOCK_LV17, ASSASSIN_ZOMBIE_LV24, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 4, 2),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x1CFD58C0, std::vector<uint16_t> {DARK_WARLOCK_LV17, BONE_SOLDIER_LV18, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 1) });
		out.emplace_back(0x1E8B5C90, std::vector<uint16_t> {ASSASSIN_ZOMBIE_LV24, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x1CFD54D0, std::vector<uint16_t> {BONE_SOLDIER_LV18, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1) });
		out.emplace_back(0x1E8B59C0, std::vector<uint16_t> {DARK_WARLOCK_LV17, BONE_SOLDIER_LV18, THIEF_LV21, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 5, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 5, 2),
			EnemyLocation(2, 5, 0, 0, 2, 0, 1, 1, 1, 1) });
		out.emplace_back(0x1D227FD0, std::vector<uint16_t> {DARK_WARLOCK_LV17, WOLF_SKELETON_LV23, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 6, 2) });
		out.emplace_back(0x1D2281D0, std::vector<uint16_t> {DARK_WARLOCK_LV17, RED_OGRE_LV25, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1D3DB640, std::vector<uint16_t> {WOLF_SKELETON_LV23, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 6, 3) });
		out.emplace_back(0x1D3DB7F0, std::vector<uint16_t> {THUNDER_DRAGON_LV20, WOLF_SKELETON_LV23, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 4, 2) });
		out.emplace_back(0x1D66EAB0, std::vector<uint16_t> {THUNDER_DRAGON_LV20, FLAME_DEMON_LV38, ANOTHER_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(2, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 3, 1) });
		out.emplace_back(0x1DEDE850, std::vector<uint16_t> {BONE_SOLDIER_LV18, DARK_WARLOCK_LV17, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 30, 2),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 5, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 30, 2),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 5, 1) });
		out.emplace_back(0x1DEDEEF0, std::vector<uint16_t> {RED_OGRE_LV25, DARK_WARLOCK_LV17, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 2, 2),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0x1DEDEBC0, std::vector<uint16_t> {RED_OGRE_LV25, DARK_WARLOCK_LV17, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 3, 3) });
		out.emplace_back(0x1D5259B0, std::vector<uint16_t> {BASILISK_LV23, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1D525BB0, std::vector<uint16_t> {BASILISK_LV23, THUNDER_DRAGON_LV20, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1E4F6A30, std::vector<uint16_t> {ECTOPLASM_LV22, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1D2284A0, std::vector<uint16_t> {WOLF_SKELETON_LV23, BATTLE_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 5, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 5, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1D82AEC0, std::vector<uint16_t> {THIEF_LV21, LIZARDMAN_LV23, BATTLE_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(2, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1D82B150, std::vector<uint16_t> {WOLF_SKELETON_LV23, LIZARDMAN_LV23, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 4, 3, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 4, 6, 2) });
		out.emplace_back(0x1EBA7440, std::vector<uint16_t> {LIZARDMAN_LV23, THIEF_LV21, GREAT_ARMOR_LV25, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 4, 2),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(2, 0, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1EBA7710, std::vector<uint16_t> {GREAT_ARMOR_LV25, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x1EBA7830, std::vector<uint16_t> {GREAT_ARMOR_LV25, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x1DB9BAC0, std::vector<uint16_t> {SNIPER_ORC_LV24, LIZARDMAN_LV23, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 4, 4) });
		out.emplace_back(0x1DA20C50, std::vector<uint16_t> {GREAT_ARMOR_LV25, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 3, 3),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 3, 3) });
		out.emplace_back(0x1DA20EA0, std::vector<uint16_t> {SNIPER_ORC_LV24, GREAT_ARMOR_LV25, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 4, 4),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 2, 2) });
		out.emplace_back(0x1DA210F0, std::vector<uint16_t> {RED_OGRE_LV25, GREAT_ARMOR_LV25, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 2, 2) });
		out.emplace_back(0x1DB9BCC0, std::vector<uint16_t> {SNIPER_ORC_LV24, LIZARDMAN_LV23, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 6, 3),
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 2, 1, 1) });
		out.emplace_back(0x1DCD8330, std::vector<uint16_t> {ASSASSIN_ZOMBIE_LV24, SNIPER_ORC_LV24, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 2, 0, 0, 3, 2, 2),
			EnemyLocation(1, 6, 0, 0, 2, 0, 0, 3, 3, 3) });
		break;
	case (ETNT):
		out.emplace_back(0x2AB476B0, std::vector<uint16_t> {SKELETON_LV1, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 6) });
		out.emplace_back(0x2AB4CEB0, std::vector<uint16_t> {ZOMBIE_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 9, 6) });
		out.emplace_back(0x2AB526B0, std::vector<uint16_t> {BONE_SOLDIER_LV18, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 8, 5) });
		out.emplace_back(0x2AB57EB0, std::vector<uint16_t> {ORC_LV14, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 5) });
		out.emplace_back(0x2AB65EB0, std::vector<uint16_t> {ARMOR_KNIGHT_LV15, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2AB6B6B0, std::vector<uint16_t> {GHOST_LV11, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 8, 5) });
		out.emplace_back(0x2AB70EB0, std::vector<uint16_t> {CYCLOPS_LV8, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2AB766B0, std::vector<uint16_t> {FENRIR_LV10, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 7, 4) });
		out.emplace_back(0x2AB816B0, std::vector<uint16_t> {SKELETON_LV9, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 8, 5) });
		out.emplace_back(0x2AB86EB0, std::vector<uint16_t> {SKELETON_BLAZE_LV5, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 6) });
		out.emplace_back(0x2AB8C6B0, std::vector<uint16_t> {WIZARD_LV8, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 4) });
		out.emplace_back(0x2AB91EB0, std::vector<uint16_t> {MERMAN_LV15, FISHMAN_LV16, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 3),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 1) });
		out.emplace_back(0x2AB9CEB0, std::vector<uint16_t> {PHANTOM_SWORD_LV15, SPECTRAL_SWORD_LV15, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 1) });
		out.emplace_back(0x2ABA26B0, std::vector<uint16_t> {COCKATRICE_LV6, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 3) });
		out.emplace_back(0x2ABA7EB0, std::vector<uint16_t> {FLEA_MAN_LV7, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 10, 6) });
		out.emplace_back(0x2ABAD6B0, std::vector<uint16_t> {EFREET_LV11, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 3) });
		out.emplace_back(0x2ABB86B0, std::vector<uint16_t> {SKELETON_LV9, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 9, 5) });
		out.emplace_back(0x2ABBDEB0, std::vector<uint16_t> {LIZARDMAN_LV23, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 3) });
		out.emplace_back(0x2ABC36B0, std::vector<uint16_t> {SPIRIT_LV19, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 6) });
		out.emplace_back(0x2ABC8EB0, std::vector<uint16_t> {DEAD_BARON_LV31, DEAD_FENCER_LV30, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x2ABD3EB0, std::vector<uint16_t> {LESSER_DEMON_LV23, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x2ABD96B0, std::vector<uint16_t> {SLOGRA_LV14, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 3) });
		out.emplace_back(0x2ABDEEB0, std::vector<uint16_t> {GAIBON_LV17, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2ABE46B0, std::vector<uint16_t> {SKELETON_RIDER_LV26, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 4, 4) });
		out.emplace_back(0x2ABEF6B0, std::vector<uint16_t> {SKELETON_LV9, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 10, 6) });
		out.emplace_back(0x2ABF4EB0, std::vector<uint16_t> {SPIRIT_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 9, 5) });
		out.emplace_back(0x2ABFA6B0, std::vector<uint16_t> {BLAZE_MASTER_LV14, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 8, 4) });
		out.emplace_back(0x2ABFFEB0, std::vector<uint16_t> {ASSASSIN_ZOMBIE_LV24, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 2) });
		out.emplace_back(0x2AC0AEB0, std::vector<uint16_t> {VASSAGO_LV25, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 3) });
		out.emplace_back(0x2AC106B0, std::vector<uint16_t> {RED_OGRE_LV25, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2AC15EB0, std::vector<uint16_t> {THIEF_LV21, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 9, 6) });
		out.emplace_back(0x2AC1B6B0, std::vector<uint16_t> {SNIPER_ORC_LV24, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 12, 6) });
		out.emplace_back(0x2AC266B0, std::vector<uint16_t> {SKELETON_LV9, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 12, 6) });
		out.emplace_back(0x2AC2BEB0, std::vector<uint16_t> {BASILISK_LV23, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 3) });
		out.emplace_back(0x2AC316B0, std::vector<uint16_t> {WOLF_SKELETON_LV23, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 3) });
		out.emplace_back(0x2AC36EB0, std::vector<uint16_t> {GREAT_ARMOR_LV25, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 6) });
		out.emplace_back(0x2AC41EB0, std::vector<uint16_t> {FLAME_DEMON_LV31, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 3) });
		out.emplace_back(0x2AC476B0, std::vector<uint16_t> {THUNDER_DEMON_LV27, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 3) });
		out.emplace_back(0x2AC4CEB0, std::vector<uint16_t> {FROST_DEMON_LV28, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 3) });
		out.emplace_back(0x2AC526B0, std::vector<uint16_t> {EXECUTIONER_LV26, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 6) });
		break;
	case (EVMR):
		out.emplace_back(0x2AD6E6B0, std::vector<uint16_t> {RAPID_SNIPER_LV40, RED_OGRE_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 5),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2AD73EB0, std::vector<uint16_t> {RAPID_SNIPER_LV40, FLAME_DEMON_LV43, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x2AD636B0, std::vector<uint16_t> {RAPID_SNIPER_LV40, FLAME_DEMON_LV43, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x2AD5DEB0, std::vector<uint16_t> {IRON_GLADIATOR_LV47, BASILISK_LV46, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2AD586B0, std::vector<uint16_t> {IRON_GLADIATOR_LV47, SPIRIT_LV32, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 8, 4) });
		out.emplace_back(0x2AD52EB0, std::vector<uint16_t> {GREAT_ARMOR_LV46, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 6) });
		out.emplace_back(0x2AD4D6B0, std::vector<uint16_t> {GREAT_ARMOR_LV46, RED_OGRE_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x2AD47EB0, std::vector<uint16_t> {RED_OGRE_LV75, FLEA_MAN_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 10, 4) });
		out.emplace_back(0x2AD426B0, std::vector<uint16_t> {GREAT_ARMOR_LV46, FLEA_MAN_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 6, 3),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x2AD3CEB0, std::vector<uint16_t> {THIEF_LV32, FLEA_MAN_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x2AD376B0, std::vector<uint16_t> {WHITE_DRAGON_LV38, BLAZE_PHANTOM_LV44, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x2AD31EB0, std::vector<uint16_t> {BLAZE_PHANTOM_LV44, FINAL_GUARD_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x2AD2C6B0, std::vector<uint16_t> {FISHMAN_LV45, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 10, 6) });
		out.emplace_back(0x2AD26EB0, std::vector<uint16_t> {FINAL_GUARD_LV75, LIZARD_SHAMAN_LV43, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2AD216B0, std::vector<uint16_t> {SKELETON_RIDER_LV45, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2AD1BEB0, std::vector<uint16_t> {FLAME_DEMON_LV43, LIZARD_SHAMAN_LV43, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2AD166B0, std::vector<uint16_t> {FLAME_DEMON_LV43, EFREET_LV45, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x2AD10EB0, std::vector<uint16_t> {SPIRIT_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		//out.emplace_back(0x2AD10FD0, std::vector<uint16_t> {BLOOD_SKELETON_LV75, 0, 0, 0}, std::vector<EnemyLocation> {	
		//	EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x2AD0B6B0, std::vector<uint16_t> {FINAL_GUARD_LV75, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		//out.emplace_back(0x2AD0B7D0, std::vector<uint16_t> {BLOOD_SKELETON_LV75, 0, 0, 0}, std::vector<EnemyLocation> {	
		//	EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x2AD05EB0, std::vector<uint16_t> {DEATH_RIPPER_LV40, THIEF_LV32, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x2AD006B0, std::vector<uint16_t> {FROST_DRAGON_LV39, MERMAN_LV35, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 4, 2) });
		out.emplace_back(0x2ACFAEB0, std::vector<uint16_t> {JIN_LV45, MERMAN_LV35, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2ACF56B0, std::vector<uint16_t> {EXECUTIONER_LV47, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2ACEFEB0, std::vector<uint16_t> {EXECUTIONER_LV47, FROST_DEMON_LV38, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2ACEA6B0, std::vector<uint16_t> {ARMORED_SPRINTER_LV44, FROST_DEMON_LV43, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x2ACE4EB0, std::vector<uint16_t> {UNICORN_LV44, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2ACDF6B0, std::vector<uint16_t> {UNICORN_LV44, ECTOPLASM_LV37, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2ACD9EB0, std::vector<uint16_t> {CYCLOPS_LV75, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2ACD46B0, std::vector<uint16_t> {DARK_WARLOCK_LV42, CYCLOPS_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 5) });
		out.emplace_back(0x2ACCEEB0, std::vector<uint16_t> {GILEE_LV31, FLEA_MAN_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 5, 5),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2ACC96B0, std::vector<uint16_t> {THUNDER_DRAGON_LV40, ASSASSIN_ZOMBIE_LV44, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x2ACC3EB0, std::vector<uint16_t> {ASSASSIN_ZOMBIE_LV44, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2ACBE6B0, std::vector<uint16_t> {THUNDER_DEMON_LV43, AMDUSCIAS_LV44, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x2ACB8EB0, std::vector<uint16_t> {AMDUSCIAS_LV44, DUKE_MIRAGE_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x2ACB36B0, std::vector<uint16_t> {DUKE_MIRAGE_LV75, GHOUL_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2ACADEB0, std::vector<uint16_t> {AMDUSCIAS_LV44, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2ACA86B0, std::vector<uint16_t> {WHITE_GRAVIAL_LV43, BASILISK_LV46, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x2ACA2EB0, std::vector<uint16_t> {WHITE_GRAVIAL_LV43, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 6) });
		out.emplace_back(0x2AC9D6B0, std::vector<uint16_t> {ASSASSIN_ZOMBIE_LV44, GHOUL_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x2AC97EB0, std::vector<uint16_t> {FLEA_MAN_LV75, DEATH_RIPPER_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x2AC926B0, std::vector<uint16_t> {SLOGRA_LV45, GAIBON_LV45, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x2AC8CEB0, std::vector<uint16_t> {SLOGRA_LV45, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		//out.emplace_back(0x2AC8CFD0, std::vector<uint16_t> {BLOOD_SKELETON_LV75, 0, 0, 0}, std::vector<EnemyLocation> {	
		//	EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x2AC876B0, std::vector<uint16_t> {COCKATRICE_LV46, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		//out.emplace_back(0x2AC877D0, std::vector<uint16_t> {BLOOD_SKELETON_LV75, 0, 0, 0}, std::vector<EnemyLocation> {	
		//	EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x2AC81EB0, std::vector<uint16_t> {COCKATRICE_LV46, HARPY_LV46, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x2AC7C6B0, std::vector<uint16_t> {HARPY_LV46, RED_OGRE_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2AC76EB0, std::vector<uint16_t> {IRON_GLADIATOR_LV47, RED_OGRE_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2AC716B0, std::vector<uint16_t> {FLEA_MAN_LV75, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 50, 6) });
		out.emplace_back(0x2AC606B0, std::vector<uint16_t> {FLEA_MAN_LV75, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 32, 0, 0, 0, 0, 1, 6, 2) });
		out.emplace_back(0x2AC607D0, std::vector<uint16_t> {GOLDEN_BONES_LV1, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1) });
		break;
	case (CDVA):
		out.emplace_back(0x2511F1E0, std::vector<uint16_t> {ZOMBIE_LV26, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2511F5D0, std::vector<uint16_t> {ZOMBIE_LV26, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x26EF47E0, std::vector<uint16_t> {ZOMBIE_LV26, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x27102CE0, std::vector<uint16_t> {ZOMBIE_LV26, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x271033A0, std::vector<uint16_t> {GHOUL_LV27, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x27103B80, std::vector<uint16_t> {GHOUL_LV27, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x254EF840, std::vector<uint16_t> {GREAT_ARMOR_LV25, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x252F15C0, std::vector<uint16_t> {VASSAGO_LV25, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x252F19B0, std::vector<uint16_t> {VASSAGO_LV25, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x256CB3C0, std::vector<uint16_t> {DEAD_FENCER_LV30, DUKE_MIRAGE_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0x256CB800, std::vector<uint16_t> {DEAD_FENCER_LV30, DUKE_MIRAGE_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x27321D50, std::vector<uint16_t> {DEAD_BARON_LV31, DUKE_MIRAGE_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x273219A0, std::vector<uint16_t> {DEAD_BARON_LV31, DUKE_MIRAGE_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0x273216D0, std::vector<uint16_t> {DEAD_BARON_LV31, DUKE_MIRAGE_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x258E2A40, std::vector<uint16_t> {WHITE_GRAVIAL_LV27, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x258E26E0, std::vector<uint16_t> {WHITE_GRAVIAL_LV27, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x258E2C80, std::vector<uint16_t> {WHITE_GRAVIAL_LV27, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x258E2EC0, std::vector<uint16_t> {WHITE_GRAVIAL_LV27, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x274BECC0, std::vector<uint16_t> {GHOUL_LV27, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x274BF0B0, std::vector<uint16_t> {LIZARD_SHAMAN_LV28, GHOUL_LV27, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 2, 1) });
		out.emplace_back(0x25FCCAD0, std::vector<uint16_t> {ASSASSIN_ZOMBIE_LV24, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1) });
		out.emplace_back(0x25FCCDA0, std::vector<uint16_t> {ASSASSIN_ZOMBIE_LV24, LIZARD_SHAMAN_LV28, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 7, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 7, 0, 0, 0, 0, 1, 1, 1, 1) });
		out.emplace_back(0x261BA250, std::vector<uint16_t> {GHOUL_LV27, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 5, 0, 0, 0, 0, 1, 1, 4, 4) });
		out.emplace_back(0x261BA6D0, std::vector<uint16_t> {SKELETON_RIDER_LV26, LIZARD_SHAMAN_LV28, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x261BA910, std::vector<uint16_t> {LIZARD_SHAMAN_LV28, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x263D8B10, std::vector<uint16_t> {LIZARD_SHAMAN_LV28, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x263D8840, std::vector<uint16_t> {EXECUTIONER_LV26, LIZARD_SHAMAN_LV28, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x26D6DF30, std::vector<uint16_t> {THIEF_LV21, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 10, 2),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 10, 2),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 10, 2) });
		out.emplace_back(0x25FCD190, std::vector<uint16_t> {LIZARD_SHAMAN_LV28, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2762B3B0, std::vector<uint16_t> {SKELETON_RIDER_LV26, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 5, 0, 0, 0, 0, 1, 1, 3, 3) });
		out.emplace_back(0x265B4AC0, std::vector<uint16_t> {SKELETON_RIDER_LV26, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0x265B4D10, std::vector<uint16_t> {EXECUTIONER_LV26, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x25AAEDB0, std::vector<uint16_t> {DEAD_FENCER_LV30, DUKE_MIRAGE_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x25D67ED0, std::vector<uint16_t> {ZOMBIE_LV26, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 6, 6) });
		out.emplace_back(0x25D68040, std::vector<uint16_t> {ZOMBIE_LV26, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		break;
	case (CLCK):
		out.emplace_back(0xF79B4D0, std::vector<uint16_t> {SNIPER_ORC_LV30, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 3, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0xF79B5F0, std::vector<uint16_t> {SNIPER_ORC_LV30, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 1, 1) });
		out.emplace_back(0xF79B9E0, std::vector<uint16_t> {SNIPER_ORC_LV30, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x11A19050, std::vector<uint16_t> {VASSAGO_LV34, SNIPER_ORC_LV30, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x11A19440, std::vector<uint16_t> {SNIPER_ORC_LV30, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0xF92F330, std::vector<uint16_t> {WHITE_GRAVIAL_LV27, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 3, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 3, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0xFD748F0, std::vector<uint16_t> {WHITE_GRAVIAL_LV27, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0xFD74C50, std::vector<uint16_t> {IRON_GLADIATOR_LV31, WHITE_GRAVIAL_LV27, FIGHT_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1) });
		out.emplace_back(0xFD753A0, std::vector<uint16_t> {IRON_GLADIATOR_LV31, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 2) });
		out.emplace_back(0x11E9D5C0, std::vector<uint16_t> {WHITE_GRAVIAL_LV27, FLAME_DEMON_LV31, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1) });
		out.emplace_back(0x11E9CE70, std::vector<uint16_t> {FLAME_DEMON_LV31, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x11E9D380, std::vector<uint16_t> {WHITE_GRAVIAL_LV27, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x11E9D890, std::vector<uint16_t> {WHITE_GRAVIAL_LV27, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0xFD75040, std::vector<uint16_t> {WHITE_GRAVIAL_LV27, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x11E9CB10, std::vector<uint16_t> {WHITE_GRAVIAL_LV27, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1013C180, std::vector<uint16_t> {UNDEAD_LORD_LV33, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1) });
		out.emplace_back(0x1013C3C0, std::vector<uint16_t> {UNDEAD_LORD_LV33, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1013C720, std::vector<uint16_t> {UNDEAD_LORD_LV33, FLAME_DEMON_LV31, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1013C960, std::vector<uint16_t> {UNDEAD_LORD_LV33, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1013CB10, std::vector<uint16_t> {UNDEAD_LORD_LV33, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x11438620, std::vector<uint16_t> {GREAT_ARMOR_LV35, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0x108662B0, std::vector<uint16_t> {UNDEAD_LORD_LV33, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x122E7D40, std::vector<uint16_t> {HARPY_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x122E7E60, std::vector<uint16_t> {HARPY_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x11249650, std::vector<uint16_t> {HARPY_LV32, LIZARD_SHAMAN_LV28, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x11249D10, std::vector<uint16_t> {LIZARD_SHAMAN_LV28, HARPY_LV32, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x116266A0, std::vector<uint16_t> {DEATH_RIPPER_LV29, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 50, 3) });
		out.emplace_back(0x10B1DDD0, std::vector<uint16_t> {IRON_GLADIATOR_LV31, HARPY_LV32, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x10B1E490, std::vector<uint16_t> {IRON_GLADIATOR_LV31, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x10B1E250, std::vector<uint16_t> {IRON_GLADIATOR_LV31, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x10DC0DC0, std::vector<uint16_t> {DEAD_FENCER_LV30, DUKE_MIRAGE_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x12B5A9C0, std::vector<uint16_t> {DEAD_BARON_LV31, DUKE_MIRAGE_LV75, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x11050D50, std::vector<uint16_t> {NECROMANCER_LV31, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x110512F0, std::vector<uint16_t> {NECROMANCER_LV31, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 3, 1) });
		out.emplace_back(0x10404550, std::vector<uint16_t> {DEAD_BARON_LV31, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 2) });
		out.emplace_back(0x10404670, std::vector<uint16_t> {DEAD_BARON_LV31, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 6, 3) });
		out.emplace_back(0x1215F070, std::vector<uint16_t> {NECROMANCER_LV31, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x106BE450, std::vector<uint16_t> {NECROMANCER_LV31, ZOMBIE_LV42, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 2) });
		out.emplace_back(0x106BE600, std::vector<uint16_t> {NECROMANCER_LV31, WIGHT_LV35, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 8, 2),
			EnemyLocation(1, 48, 0, 0, 0, 0, 0, 1, 255, 4) });
		break;
	case (RUIN):
		out.emplace_back(0x12DD9AC0, std::vector<uint16_t> {BONE_SOLDIER_LV18, UNDEAD_LORD_LV33, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 3, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 3, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 3, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 3, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 2, 1, 12, 4) });
		out.emplace_back(0x12DDA360, std::vector<uint16_t> {BONE_SOLDIER_LV18, UNDEAD_LORD_LV33, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 6, 4) });
		out.emplace_back(0x14BE4140, std::vector<uint16_t> {UNDEAD_LORD_LV33, NECROMANCER_LV35, BONE_SOLDIER_LV18, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 4, 0, 0, 2, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 2, 0, 1, 1, 1, 1),
			EnemyLocation(2, 56, 0, 0, 0, 0, 1, 1, 255, 4) });
		out.emplace_back(0x14BE4700, std::vector<uint16_t> {NECROMANCER_LV35, UNDEAD_LORD_LV33, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 1, 3, 1),
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 1, 3, 1),
			EnemyLocation(1, 48, 0, 0, 0, 0, 0, 1, 255, 4) });
		out.emplace_back(0x1303DA50, std::vector<uint16_t> {UNDEAD_LORD_LV33, ASSASSIN_ZOMBIE_LV34, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 8, 4),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1) });
		out.emplace_back(0x1303DDB0, std::vector<uint16_t> {ASSASSIN_ZOMBIE_LV34, UNDEAD_LORD_LV33, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 4, 4) });
		out.emplace_back(0x1303E370, std::vector<uint16_t> {UNDEAD_LORD_LV33, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 4, 1) });
		out.emplace_back(0x14E343D0, std::vector<uint16_t> {UNDEAD_LORD_LV33, ASSASSIN_ZOMBIE_LV34, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 8, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 8, 1) });
		out.emplace_back(0x14E34A50, std::vector<uint16_t> {JIN_LV36, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 1, 1) });
		out.emplace_back(0x14E350E0, std::vector<uint16_t> {JIN_LV36, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 1) });
		out.emplace_back(0x1321BC30, std::vector<uint16_t> {JIN_LV36, FIGHT_BARRIER, THUNDER_DEMON_LV38, UNDEAD_LORD_LV33}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 5, 0, 0, 0, 0, 2, 1, 1, 1),
			EnemyLocation(2, 4, 0, 0, 2, 0, 0, 1, 4, 4),
			EnemyLocation(3, 4, 0, 0, 0, 0, 1, 1, 6, 6) });
		out.emplace_back(0x150BBD40, std::vector<uint16_t> {ARMORED_SPRINTER_LV33, THUNDER_DEMON_LV38, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x150BC0A0, std::vector<uint16_t> {ARMORED_SPRINTER_LV33, THUNDER_DEMON_LV38, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x150BC490, std::vector<uint16_t> {ARMORED_SPRINTER_LV33, UNDEAD_LORD_LV33, THUNDER_DEMON_LV38, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 1, 1, 4, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 2, 1, 8, 2),
			EnemyLocation(1, 4, 0, 0, 0, 0, 2, 1, 15, 3),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 8, 4) });
		out.emplace_back(0x1347C250, std::vector<uint16_t> {RAPID_SNIPER_LV31, UNDEAD_LORD_LV33, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 2, 0, 0, 1, 1, 1) });




		out.emplace_back(0x1347C640, std::vector<uint16_t> {UNDEAD_LORD_LV33, RAPID_SNIPER_LV31, BATTLE_BARRIER, 0}, std::vector<EnemyLocation> {	
		EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x13967D30, std::vector<uint16_t> {UNDEAD_LORD_LV33, VASSAGO_LV34, SKELETON_TROOPER_LV35, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 1, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 4, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 1, 1, 2, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 1, 1, 2, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 4, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 2, 1, 4, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 2, 1, 8, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 2, 1, 8, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 2, 1, 4, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 2, 1, 4, 1) });
		out.emplace_back(0x13967840, std::vector<uint16_t> {SKELETON_TROOPER_LV35, UNDEAD_LORD_LV33, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0x136474B0, std::vector<uint16_t> {SKELETON_TROOPER_LV35, BATTLE_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 2, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 2, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 2, 1, 1) });
		out.emplace_back(0x13ABF750, std::vector<uint16_t> {WIGHT_LV35, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0x13ABFA80, std::vector<uint16_t> {FLAME_DEMON_LV38, WIGHT_LV35, FIGHT_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1) });
		out.emplace_back(0x13ABFF90, std::vector<uint16_t> {WIGHT_LV35, FLAME_DEMON_LV38, BATTLE_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(2, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x13C65660, std::vector<uint16_t> {FISHMAN_LV35, WIGHT_LV35, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 1, 2, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 1, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 2, 1, 1) });
		out.emplace_back(0x13C65DF0, std::vector<uint16_t> {FISHMAN_LV35, SLOGRA_LV37, WIGHT_LV35, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(1, 2, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 1, 1, 1, 1) });
		out.emplace_back(0x13C666F0, std::vector<uint16_t> {SLOGRA_LV37, WIGHT_LV35, FISHMAN_LV35, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 3, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 6, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(2, 6, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(2, 6, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(2, 6, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 2, 1, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 2, 1, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 2, 1, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 2, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 3, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 3, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 3, 1, 1, 1) });
		out.emplace_back(0x13E77090, std::vector<uint16_t> {GREAT_ARMOR_LV35, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x13E77360, std::vector<uint16_t> {GREAT_ARMOR_LV35, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x13E77630, std::vector<uint16_t> {GREAT_ARMOR_LV35, BATTLE_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x14009840, std::vector<uint16_t> {GREAT_ARMOR_LV35, RAPID_SNIPER_LV31, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x14009B10, std::vector<uint16_t> {GREAT_ARMOR_LV35, RAPID_SNIPER_LV31, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x141D9460, std::vector<uint16_t> {SLOGRA_LV37, WHITE_DRAGON_LV38, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0x141D9870, std::vector<uint16_t> {WHITE_DRAGON_LV38, FISHMAN_LV35, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 7, 8, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 7, 8, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 7, 8, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 7, 8, 0, 2, 0, 0, 1, 8, 3) });
		out.emplace_back(0x141DAA20, std::vector<uint16_t> {WHITE_DRAGON_LV38, FISHMAN_LV35, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 7, 8, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 7, 8, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 7, 8, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 7, 8, 0, 2, 0, 0, 1, 8, 3) });
		out.emplace_back(0x141DA630, std::vector<uint16_t> {FISHMAN_LV35, SLOGRA_LV37, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 16, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 16, 2),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 255, 3),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 255, 3) });
		out.emplace_back(0x14703440, std::vector<uint16_t> {SPIRIT_LV32, BATTLE_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 255, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 255, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 255, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 255, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 255, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x147038C0, std::vector<uint16_t> {SPIRIT_LV32, BATTLE_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 255, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 255, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 255, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 255, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 255, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 255, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x149D0F40, std::vector<uint16_t> {GAIBON_LV34, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 1, 1, 1) });
		out.emplace_back(0x149D14E0, std::vector<uint16_t> {GAIBON_LV34, SLOGRA_LV37, BATTLE_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x143108E0, std::vector<uint16_t> {SKELETON_TROOPER_LV35, FISHMAN_LV35, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x14310BB0, std::vector<uint16_t> {SKELETON_TROOPER_LV35, FISHMAN_LV35, BATTLE_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 16, 4),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x14310E80, std::vector<uint16_t> {SKELETON_TROOPER_LV35, FISHMAN_LV35, BATTLE_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1443FBE0, std::vector<uint16_t> {FISHMAN_LV35, SKELETON_TROOPER_LV35, JIN_LV36, FIGHT_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 2, 1, 24, 6),
			EnemyLocation(1, 4, 0, 0, 0, 0, 3, 1, 4, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 3, 1, 4, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 3, 1, 4, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 3, 1, 4, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 3, 1, 4, 1) });
		break;
	case (INFT):
		out.emplace_back(0x1EE49890, std::vector<uint16_t> {SPIRIT_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 6, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 10, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 6, 2),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 10, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 1, 6, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 1, 1, 6, 2),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 10, 1) });
		out.emplace_back(0x1EE49DB0, std::vector<uint16_t> {SPIRIT_LV32, FINAL_GUARD_LV42, FIGHT_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(1, 4, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 6, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(1, 6, 0, 0, 2, 0, 0, 2, 1, 1) });
		out.emplace_back(0x1F4406F0, std::vector<uint16_t> {FINAL_GUARD_LV42, UNDEAD_LORD_LV38, FIGHT_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 5, 5),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 10, 5) });
		out.emplace_back(0x1F440A50, std::vector<uint16_t> {FINAL_GUARD_LV42, SPIRIT_LV32, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 8, 4) });
		out.emplace_back(0x1F440D30, std::vector<uint16_t> {UNDEAD_LORD_LV38, SPIRIT_LV32, FIGHT_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 9, 3),
			EnemyLocation(1, 4, 0, 0, 0, 0, 2, 1, 3, 3) });
		out.emplace_back(0x1F441120, std::vector<uint16_t> {UNDEAD_LORD_LV38, SPIRIT_LV32, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 3, 3),
			EnemyLocation(0, 4, 0, 0, 0, 0, 2, 1, 9, 3) });
		out.emplace_back(0x1FA081D0, std::vector<uint16_t> {BLAZE_PHANTOM_LV39, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0x1FA08830, std::vector<uint16_t> {BLAZE_PHANTOM_LV39, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0x1FA08500, std::vector<uint16_t> {BONE_SOLDIER_LV38, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 4, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 4, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 4, 1) });
		out.emplace_back(0x211F3260, std::vector<uint16_t> {BLAZE_PHANTOM_LV39, SPIRIT_LV32, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 1, 3, 1),
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 1, 3, 1),
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 1, 3, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 9, 3) });
		out.emplace_back(0x1F789960, std::vector<uint16_t> {SPIRIT_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 2) });
		out.emplace_back(0x1F789A80, std::vector<uint16_t> {UNICORN_LV39, SPIRIT_LV32, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 9, 3) });
		out.emplace_back(0x1F789C30, std::vector<uint16_t> {SPIRIT_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 3) });
		out.emplace_back(0x1F789D50, std::vector<uint16_t> {UNICORN_LV39, SPIRIT_LV32, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 12, 3) });
		out.emplace_back(0x1F0D67D0, std::vector<uint16_t> {WHITE_DRAGON_LV38, SPIRIT_LV32, UNICORN_LV39, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(2, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(2, 0, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1F0D6E00, std::vector<uint16_t> {SPIRIT_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 1) });
		out.emplace_back(0x1F0D6FB0, std::vector<uint16_t> {WHITE_DRAGON_LV38, UNICORN_LV39, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2032ADD0, std::vector<uint16_t> {ECTOPLASM_LV37, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2032AF80, std::vector<uint16_t> {ECTOPLASM_LV37, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0x2032B380, std::vector<uint16_t> {ECTOPLASM_LV37, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x217EF450, std::vector<uint16_t> {WIGHT_LV36, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x217EF600, std::vector<uint16_t> {ECTOPLASM_LV37, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 1) });
		out.emplace_back(0x217EF840, std::vector<uint16_t> {THUNDER_DRAGON_LV40, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x217EFA80, std::vector<uint16_t> {ECTOPLASM_LV37, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x207E2730, std::vector<uint16_t> {THUNDER_DRAGON_LV40, WIGHT_LV36, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x20DD6A30, std::vector<uint16_t> {THUNDER_DRAGON_LV40, ECTOPLASM_LV37, UNDEAD_LORD_LV43, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 4, 3, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 4, 3, 1),
			EnemyLocation(2, 2, 0, 0, 0, 0, 0, 4, 3, 1),
			EnemyLocation(2, 2, 0, 0, 0, 0, 0, 4, 3, 1) });
		out.emplace_back(0x20B3E2C0, std::vector<uint16_t> {GILEE_LV31, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x20B3E3E0, std::vector<uint16_t> {ECTOPLASM_LV37, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 5, 5) });
		out.emplace_back(0x1FCF52D0, std::vector<uint16_t> {BLAZE_PHANTOM_LV39, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 24, 6) });
		out.emplace_back(0x1FCF57E0, std::vector<uint16_t> {GILEE_LV31, ECTOPLASM_LV37, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 1),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 10, 5) });
		out.emplace_back(0x21435840, std::vector<uint16_t> {BLAZE_PHANTOM_LV39, GILEE_LV31, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 6, 3),
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 6, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 6, 1) });
		out.emplace_back(0x1FCF5510, std::vector<uint16_t> {GILEE_LV31, BLAZE_PHANTOM_LV39, FIGHT_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 1, 12, 3) });
		out.emplace_back(0x2002B650, std::vector<uint16_t> {UNDEAD_LORD_LV38, BONE_SOLDIER_LV38, FIGHT_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 24, 3),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 1, 24, 3) });
		out.emplace_back(0x2002B920, std::vector<uint16_t> {THUNDER_DRAGON_LV40, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x2002BD10, std::vector<uint16_t> {UNDEAD_LORD_LV38, THUNDER_DRAGON_LV40, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 60, 4),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 4, 4),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x21610CC0, std::vector<uint16_t> {AMDUSCIAS_LV39, ECTOPLASM_LV37, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 3, 1),
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 3, 1),
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 3, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 1) });
		out.emplace_back(0x21611020, std::vector<uint16_t> {UNDEAD_LORD_LV38, AMDUSCIAS_LV39, FIGHT_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 10, 2),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(0, 6, 0, 0, 0, 0, 0, 1, 10, 2) });
		out.emplace_back(0x219F0F30, std::vector<uint16_t> {SPECTRAL_SWORD_LV47, ECTOPLASM_LV37, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x209B8C40, std::vector<uint16_t> {THUNDER_DRAGON_LV40, SPECTRAL_SWORD_LV47, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x205D66C0, std::vector<uint16_t> {ECTOPLASM_LV37, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x205D67E0, std::vector<uint16_t> {FINAL_GUARD_LV42, THUNDER_DRAGON_LV40, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 2, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		break;
	case (DRAC):
		//Baljhet
		out.emplace_back(0x29F99D30, std::vector<uint16_t> {THIEF_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x29F99F70, std::vector<uint16_t> {SPIRIT_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1) });
		out.emplace_back(0x29F99580, std::vector<uint16_t> {THIEF_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 3, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 3, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x29F9A360, std::vector<uint16_t> {SPIRIT_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1) });
		out.emplace_back(0x29F997C0, std::vector<uint16_t> {THIEF_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 3, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 3, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 3, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x29F9A240, std::vector<uint16_t> {SPIRIT_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1) });
		out.emplace_back(0x29F99A00, std::vector<uint16_t> {THIEF_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 3, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 3, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 3, 0, 0, 0, 0, 0, 2, 1, 1) });
		out.emplace_back(0x29F9A090, std::vector<uint16_t> {SPIRIT_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 1) });

		//Garibaldi
		out.emplace_back(0xDDC2540, std::vector<uint16_t> {DEAD_BARON_LV12, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 3, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 3, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 3, 3, 1) });
		out.emplace_back(0xDDC2960, std::vector<uint16_t> {ARMOR_KNIGHT_LV15, DEAD_BARON_LV12, FIGHT_BARRIER, DEAD_BARON_LV31}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 5, 32, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 5, 32, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 5, 32, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 5, 32, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(2, 5, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 5, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(3, 5, 16, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(3, 5, 16, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(3, 5, 16, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(3, 5, 16, 0, 0, 0, 1, 1, 1, 1) });
		out.emplace_back(0xDDC3140, std::vector<uint16_t> {THIEF_LV15, THIEF_LV32, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 32, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 1, 32, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(1, 1, 16, 0, 0, 0, 0, 1, 6, 1),
			EnemyLocation(1, 1, 16, 0, 0, 0, 0, 1, 6, 1) });
		out.emplace_back(0xF5D2740, std::vector<uint16_t> {SKELETON_LV9, GOLDEN_BONES_LV1, SKELETON_LV38, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 3, 32, 0, 0, 0, 0, 2, 10, 1),
			EnemyLocation(0, 3, 32, 0, 0, 0, 0, 2, 10, 1),
			EnemyLocation(0, 3, 32, 0, 0, 0, 0, 2, 10, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 2, 1, 1),
			EnemyLocation(0, 3, 32, 0, 0, 0, 0, 2, 10, 1),
			EnemyLocation(0, 3, 32, 0, 0, 0, 0, 2, 10, 1),
			EnemyLocation(2, 1, 16, 0, 0, 0, 0, 1, 5, 1),
			EnemyLocation(2, 1, 16, 0, 0, 0, 0, 1, 5, 1),
			EnemyLocation(2, 1, 16, 0, 0, 0, 0, 1, 5, 1),
			EnemyLocation(2, 1, 16, 0, 0, 0, 0, 1, 5, 1),
			EnemyLocation(2, 1, 16, 0, 0, 0, 0, 1, 5, 1) });
		//out.emplace_back(0xE71BEC0, std::vector<uint16_t> {BLOOD_SKELETON_LV75, 0, 0, 0}, std::vector<EnemyLocation> {	
		//	EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 4, 1),
		//	EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 4, 1),
		//	EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 4, 1),
		//	EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 4, 1),
		//	EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 4, 1),
		//	EnemyLocation(0, 2, 0, 0, 0, 0, 0, 2, 4, 1) });
		out.emplace_back(0xE71C490, std::vector<uint16_t> {EVIL_CORE_LV42, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 1) });
		out.emplace_back(0xE88E5C0, std::vector<uint16_t> {LEGION_LV52, NUCULAIS_LV53, HEAL_ZONE_LV0, FIGHT_BARRIER}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 5, 0, 0, 1, 0, 0, 1, 1, 1),
			EnemyLocation(1, 5, 0, 0, 3, 0, 1, 1, 1, 1),
			EnemyLocation(2, 9, 0, 0, 0, 0, 2, 1, 1, 1) });
		out.emplace_back(0xE88ED20, std::vector<uint16_t> {LEGION_ZOMBIE_LV99, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 49, 0, 0, 1, 0, 0, 1, 255, 6) });

		//Mortvia
		out.emplace_back(0x24948FC0, std::vector<uint16_t> {FISHMAN_LV45, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x249490E0, std::vector<uint16_t> {WHITE_DRAGON_LV38, FISHMAN_LV45, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 2, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 6, 3) });
		out.emplace_back(0x24022930, std::vector<uint16_t> {FIGHT_BARRIER, FISHMAN_LV45, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 12, 6) });
		out.emplace_back(0x228944F0, std::vector<uint16_t> {WHITE_DRAGON_LV38, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x228946A0, std::vector<uint16_t> {WHITE_DRAGON_LV38, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x246CF5C0, std::vector<uint16_t> {FISHMAN_LV45, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 2, 0, 0, 1, 2, 2) });
		out.emplace_back(0x246CF6E0, std::vector<uint16_t> {THIEF_LV15, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x228943D0, std::vector<uint16_t> {THIEF_LV15, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });

		//Dracula's Castle
		out.emplace_back(0x278D21F0, std::vector<uint16_t> {SLOGRA_LV45, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x278D2310, std::vector<uint16_t> {SLOGRA_LV45, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x278D28B0, std::vector<uint16_t> {SLOGRA_LV45, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x278D25E0, std::vector<uint16_t> {GAIBON_LV45, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x27A5F940, std::vector<uint16_t> {SLOGRA_LV45, GAIBON_LV45, FIGHT_BARRIER, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 3, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x27A5FDC0, std::vector<uint16_t> {RAPID_SNIPER_LV40, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x27BA97F0, std::vector<uint16_t> {RED_OGRE_LV48, FIGHT_BARRIER, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 5, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x27BA9640, std::vector<uint16_t> {RAPID_SNIPER_LV40, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x27D82220, std::vector<uint16_t> {SPIRIT_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x27D82340, std::vector<uint16_t> {SPIRIT_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 15, 3) });
		out.emplace_back(0x27D81FE0, std::vector<uint16_t> {RAPID_SNIPER_LV40, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x27D82460, std::vector<uint16_t> {RAPID_SNIPER_LV40, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x27EE0900, std::vector<uint16_t> {FROST_DEMON_LV43, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x27EE0750, std::vector<uint16_t> {SPIRIT_LV32, FROST_DEMON_LV43, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 2, 0, 0, 2, 0, 0, 1, 3, 3) });
		out.emplace_back(0x28014C50, std::vector<uint16_t> {ARMORED_SPRINTER_LV44, FROST_DEMON_LV43, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 3, 3) });
		out.emplace_back(0x280E4210, std::vector<uint16_t> {ARMORED_SPRINTER_LV44, FINAL_GUARD_LV42, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x280E3F40, std::vector<uint16_t> {ARMORED_SPRINTER_LV44, FIGHT_BARRIER, FINAL_GUARD_LV42, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(2, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x28014F20, std::vector<uint16_t> {ARMORED_SPRINTER_LV44, FROST_DEMON_LV43, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 1, 1) });
		out.emplace_back(0x28014E00, std::vector<uint16_t> {ARMORED_SPRINTER_LV44, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x27EE0A20, std::vector<uint16_t> {SPIRIT_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 6, 6) });
		out.emplace_back(0x27D82220, std::vector<uint16_t> {SPIRIT_LV32, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x18A9EC40, std::vector<uint16_t> {UNDEAD_LORD_LV43, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 6) });
		out.emplace_back(0x18D00950, std::vector<uint16_t> {WHITE_DRAGON_LV38, UNDEAD_LORD_LV43, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x18D00B90, std::vector<uint16_t> {WHITE_DRAGON_LV38, FLAME_DEMON_LV43, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 3, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 3, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 4, 4) });
		out.emplace_back(0x18FAA4E0, std::vector<uint16_t> {FROST_DRAGON_LV39, UNDEAD_LORD_LV43, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x18FAA9F0, std::vector<uint16_t> {UNDEAD_LORD_LV43, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x18FAA720, std::vector<uint16_t> {FROST_DRAGON_LV39, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x18FAA8D0, std::vector<uint16_t> {FROST_DEMON_LV43, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 4, 4) });
		out.emplace_back(0x192952D0, std::vector<uint16_t> {EXECUTIONER_LV47, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x19294EE0, std::vector<uint16_t> {UNDEAD_LORD_LV43, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 6) });
		out.emplace_back(0x19295000, std::vector<uint16_t> {FIGHT_BARRIER, EXECUTIONER_LV47, UNDEAD_LORD_LV43, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 5, 0, 0, 0, 0, 2, 1, 1, 1),
			EnemyLocation(1, 6, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(2, 4, 0, 0, 0, 0, 0, 1, 8, 4) });
		out.emplace_back(0x19551260, std::vector<uint16_t> {VASSAGO_LV41, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x19551410, std::vector<uint16_t> {VASSAGO_LV41, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 3, 1) });
		out.emplace_back(0x19551530, std::vector<uint16_t> {VASSAGO_LV41, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x197D6350, std::vector<uint16_t> {FLEA_MAN_LV40, SKELETON_LV38, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x197D66B0, std::vector<uint16_t> {SKELETON_LV38, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 20, 6) });
		out.emplace_back(0x197D6500, std::vector<uint16_t> {FLEA_MAN_LV40, SKELETON_LV38, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x19B5CE80, std::vector<uint16_t> {EFREET_LV45, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x19B5CD60, std::vector<uint16_t> {JIN_LV45, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x19B5CFA0, std::vector<uint16_t> {EFREET_LV45, JIN_LV45, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x19E8E250, std::vector<uint16_t> {ZOMBIE_LV42, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 6) });
		out.emplace_back(0x19E8E490, std::vector<uint16_t> {ZOMBIE_LV42, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 10, 6) });
		out.emplace_back(0x19E8E370, std::vector<uint16_t> {GHOUL_LV42, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 6) });
		out.emplace_back(0x1A1B8B50, std::vector<uint16_t> {GHOUL_LV42, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1A1B8F40, std::vector<uint16_t> {ASSASSIN_ZOMBIE_LV44, GHOUL_LV42, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 10, 4) });
		out.emplace_back(0x1A1B90F0, std::vector<uint16_t> {ASSASSIN_ZOMBIE_LV44, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x1A4F3C40, std::vector<uint16_t> {CYCLOPS_LV47, ASSASSIN_ZOMBIE_LV44, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x1A4F3A90, std::vector<uint16_t> {RED_OGRE_LV48, ASSASSIN_ZOMBIE_LV44, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x1A4F38E0, std::vector<uint16_t> {RED_OGRE_LV48, CYCLOPS_LV47, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x1A829D30, std::vector<uint16_t> {DEATH_RIPPER_LV40, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 4, 0, 0, 0, 0, 1, 1, 6, 6) });
		out.emplace_back(0x1A829A60, std::vector<uint16_t> {FIGHT_BARRIER, CYCLOPS_LV47, DEATH_RIPPER_LV40, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 5, 0, 0, 0, 0, 2, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 2, 0, 0, 1, 3, 3),
			EnemyLocation(2, 4, 0, 0, 0, 0, 0, 1, 6, 3) });
		out.emplace_back(0x1A829EE0, std::vector<uint16_t> {DEATH_RIPPER_LV40, CYCLOPS_LV47, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 1, 1, 3, 3) });
		out.emplace_back(0x1A9FAA30, std::vector<uint16_t> {HARPY_LV46, CYCLOPS_LV47, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 2, 0, 0, 1, 2, 2) });
		out.emplace_back(0x1ACA4350, std::vector<uint16_t> {AMDUSCIAS_LV44, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 6, 6) });
		out.emplace_back(0x1ACA4470, std::vector<uint16_t> {AMDUSCIAS_LV44, HARPY_LV46, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x1AF16B90, std::vector<uint16_t> {IRON_GLADIATOR_LV47, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x1AF168C0, std::vector<uint16_t> {FIGHT_BARRIER, IRON_GLADIATOR_LV47, HARPY_LV46, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 5, 0, 0, 0, 0, 2, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(2, 4, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x1B197440, std::vector<uint16_t> {FINAL_GUARD_LV42, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 4, 4) });
		out.emplace_back(0x1B197560, std::vector<uint16_t> {RAPID_SNIPER_LV40, FINAL_GUARD_LV42, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x1B41EB10, std::vector<uint16_t> {IRON_GLADIATOR_LV47, FINAL_GUARD_LV42, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 2, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 3, 3) });
		out.emplace_back(0x1B41E840, std::vector<uint16_t> {RAPID_SNIPER_LV40, IRON_GLADIATOR_LV47, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 2, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1B71F890, std::vector<uint16_t> {RAPID_SNIPER_LV40, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1B71F6E0, std::vector<uint16_t> {RAPID_SNIPER_LV40, IRON_GLADIATOR_LV47, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 3),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x1B9FE860, std::vector<uint16_t> {RAPID_SNIPER_LV40, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1B9FEBC0, std::vector<uint16_t> {RAPID_SNIPER_LV40, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1B9FEE90, std::vector<uint16_t> {SLOGRA_LV45, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 2, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x1B9FEA10, std::vector<uint16_t> {RAPID_SNIPER_LV40, SLOGRA_LV45, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 2, 2),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 2, 2) });
		out.emplace_back(0x1BBE2C30, std::vector<uint16_t> {GAIBON_LV45, 0, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1BBE2840, std::vector<uint16_t> {FIGHT_BARRIER, SLOGRA_LV45, GAIBON_LV45, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 1, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(0, 5, 0, 0, 0, 0, 1, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(1, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 0, 1, 1, 1),
			EnemyLocation(2, 4, 0, 0, 0, 0, 0, 1, 1, 1) });
		out.emplace_back(0x1BE38930, std::vector<uint16_t> {GILEE_LV31, THIEF_LV32, 0, 0}, std::vector<EnemyLocation> {	
			EnemyLocation(0, 0, 0, 0, 0, 0, 0, 1, 3, 1),
			EnemyLocation(1, 0, 0, 0, 0, 0, 0, 1, 20, 5) });
		break;
	}
	return out;
}