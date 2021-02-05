#include <fstream>
#include "../../h/Equips/T_Armor.h"



void T_Armor::write(std::fstream & fs)
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

	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
	fs.write(reinterpret_cast<char *> (&tail0), 4);
}