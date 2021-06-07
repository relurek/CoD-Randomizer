#pragma once
#include <cstdint>
#include <filesystem>
#include <vector>
#include "./IDs/ItemIDs.h"
#include "./Equips/T_Armor.h"
#include "./Equips/T_Weapon.h"
class ItemLocation;
class EnemyEncounter;
namespace fs = std::filesystem;

enum Mode { shuffle, rando, null };
using itemLocSet = std::vector<ItemLocation>;
using enemyLocSet = std::vector<EnemyEncounter>;
enum Zone {
	CAST,		// Abandoned Castle
	MNTN,		// Baljhet Mountains
	TMPL,		// Garibaldi Temple
	MTVA,		// Mortvia Aqueduct
	FRST,		// Forest of Jigramunt
	ETNT,		// Tower of Eternity
	EVMR,		// Tower of Evermore
	CDVA,		// Cordova Town
	CLCK,		// Eneomaos Machine Tower
	RUIN,		// Aiolon Ruins
	INFT,		// Infinite Corridor
	DRAC		// Dracula's Castle
};
using WeaponSet = std::vector<T_Weapon>;
using ArmorSet = std::vector<T_Armor>;

//Retrieves ID of item in vector
uint32_t getBlockOffset(int32_t id);

//Creates a copy of the disc image
std::string copyFile(std::string seed, std::string inName, std::string outName);

bool fileExists(std::string file);