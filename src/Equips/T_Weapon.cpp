#include "../../h/Equips/T_Weapon.h"

	//uint32_t val1;
	//file.seekp(loc1);
	//file.read(reinterpret_cast<char *> (&val), 4);

T_Weapon::T_Weapon(std::fstream & fs, uint32_t offIn)
{
	offset = offIn;
	read(fs);
}

void T_Weapon::write(std::fstream & fs)
{
	fs.seekp(offset);

	fs.write(reinterpret_cast<char *> (&recipeID), 4);
	fs.write(reinterpret_cast<char *> (&nameID), 4);
	fs.write(reinterpret_cast<char *> (&discID), 4);
	fs.write(reinterpret_cast<char *> (&menuModelID), 4);
	fs.write(reinterpret_cast<char *> (&palette), 4);
	fs.write(reinterpret_cast<char *> (&menuIconID), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&maxNum), 4);
	fs.write(reinterpret_cast<char *> (&value), 4);
	fs.write(reinterpret_cast<char *> (&sell), 4);
	fs.write(reinterpret_cast<char *> (&recipeUnlock), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);

	fs.write(reinterpret_cast<char *> (&str), 4);
	fs.write(reinterpret_cast<char *> (&con), 4);
	fs.write(reinterpret_cast<char *> (&luk), 4);
	fs.write(reinterpret_cast<char *> (&atk), 4);
	fs.write(reinterpret_cast<char *> (&def), 4);

	fs.write(reinterpret_cast<char *> (&poisonRes), 4);
	fs.write(reinterpret_cast<char *> (&curseRes), 4);
	fs.write(reinterpret_cast<char *> (&stoneRes), 4);
	fs.write(reinterpret_cast<char *> (&paralyzeRes), 4);
	fs.write(reinterpret_cast<char *> (&fireRes), 4);
	fs.write(reinterpret_cast<char *> (&iceRes), 4);
	fs.write(reinterpret_cast<char *> (&thunderRes), 4);
	fs.write(reinterpret_cast<char *> (&windRes), 4);
	fs.write(reinterpret_cast<char *> (&earthRes), 4);
	fs.write(reinterpret_cast<char *> (&lightRes), 4);
	fs.write(reinterpret_cast<char *> (&darkRes), 4);

	fs.write(reinterpret_cast<char *> (&unknownByte5), 4);
	fs.write(reinterpret_cast<char *> (&weaponTypeID), 4);
	fs.write(reinterpret_cast<char *> (&animSetID), 4);
	fs.write(reinterpret_cast<char *> (&skill), 4);
	fs.write(reinterpret_cast<char *> (&animSpeed), 4);
	fs.write(reinterpret_cast<char *> (&model), 4);
	fs.write(reinterpret_cast<char *> (&sheathe), 4);

	fs.write(reinterpret_cast<char *> (&unknownByte6), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&sheatheOffset), 4);
	fs.write(reinterpret_cast<char *> (&unknownByte8), 4);
	fs.write(reinterpret_cast<char *> (&unknownByte9), 4);

	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
}

void T_Weapon::read(std::fstream & fs) 
{
	fs.seekp(offset);

	fs.read(reinterpret_cast<char *> (&recipeID), 4);
	fs.read(reinterpret_cast<char *> (&nameID), 4);
	fs.read(reinterpret_cast<char *> (&discID), 4);
	fs.read(reinterpret_cast<char *> (&menuModelID), 4);
	fs.read(reinterpret_cast<char *> (&palette), 4);
	fs.read(reinterpret_cast<char *> (&menuIconID), 4);
	fs.read(reinterpret_cast<char *> (&tail0), 4);
	fs.read(reinterpret_cast<char *> (&tail0), 4);
	fs.read(reinterpret_cast<char *> (&maxNum), 4);
	fs.read(reinterpret_cast<char *> (&value), 4);
	fs.read(reinterpret_cast<char *> (&sell), 4);
	fs.read(reinterpret_cast<char *> (&recipeUnlock), 4);
	fs.read(reinterpret_cast<char *> (&tail0), 4);
	fs.read(reinterpret_cast<
		char *> (&tail0), 4);

	fs.read(reinterpret_cast<char *> (&str), 4);
	fs.read(reinterpret_cast<char *> (&con), 4);
	fs.read(reinterpret_cast<char *> (&luk), 4);
	fs.read(reinterpret_cast<char *> (&atk), 4);
	fs.read(reinterpret_cast<char *> (&def), 4);

	fs.read(reinterpret_cast<char *> (&poisonRes), 4);
	fs.read(reinterpret_cast<char *> (&curseRes), 4);
	fs.read(reinterpret_cast<char *> (&stoneRes), 4);
	fs.read(reinterpret_cast<char *> (&paralyzeRes), 4);
	fs.read(reinterpret_cast<char *> (&fireRes), 4);
	fs.read(reinterpret_cast<char *> (&iceRes), 4);
	fs.read(reinterpret_cast<char *> (&thunderRes), 4);
	fs.read(reinterpret_cast<char *> (&windRes), 4);
	fs.read(reinterpret_cast<char *> (&earthRes), 4);
	fs.read(reinterpret_cast<char *> (&lightRes), 4);
	fs.read(reinterpret_cast<char *> (&darkRes), 4);

	fs.read(reinterpret_cast<char *> (&unknownByte5), 4);
	fs.read(reinterpret_cast<char *> (&weaponTypeID), 4);
	fs.read(reinterpret_cast<char *> (&animSetID), 4);
	fs.read(reinterpret_cast<char *> (&skill), 4);
	fs.read(reinterpret_cast<char *> (&animSpeed), 4);
	fs.read(reinterpret_cast<char *> (&model), 4);
	fs.read(reinterpret_cast<char *> (&sheathe), 4);

	fs.read(reinterpret_cast<char *> (&unknownByte6), 4);
	fs.read(reinterpret_cast<char *> (&tail0), 4);
	fs.read(reinterpret_cast<char *> (&sheatheOffset), 4);
	fs.read(reinterpret_cast<char *> (&unknownByte8), 4);
	fs.read(reinterpret_cast<char *> (&unknownByte9), 4);

	fs.read(reinterpret_cast<char *> (&tail0), 4);
	fs.read(reinterpret_cast<char *> (&tail0), 4);
	fs.read(reinterpret_cast<char *> (&tail0), 4);
	fs.read(reinterpret_cast<char *> (&tail0), 4);
	fs.read(reinterpret_cast<char *> (&tail0), 4);
	fs.read(reinterpret_cast<char *> (&tail0), 4);
	fs.read(reinterpret_cast<char *> (&tail0), 4);
	fs.read(reinterpret_cast<char *> (&tail0), 4);
}