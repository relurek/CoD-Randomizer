#include "../h/Util.h"


uint32_t getBlockOffset(int32_t id)
{
	if (id <= 79)
		return WEAPON_OFFSET;
	if (id <= 113)
		return ARMOR_OFFSET;
	if (id <= 142)
		return HELMET_OFFSET;
	if (id <= 169)
		return ACC_OFFSET;
	if (id <= 204)
		return USE_OFFSET;
	if (id <= 260)
		return MAT_OFFSET;
	if (id <= 281)
		return SKILL_OFFSET;
	if (id <= 304)
		return TRANSIENT_OFFSET;
	if (id <= 312)
		return SPECIAL_OFFSET;
	if (id <= 341)
		return KEYS_OFFSET;
	if (id <= 355)
		return SHARD_OFFSET;
	if (id <= 368)
		return SUB_OFFSET;

	else
		return CREST_OFFSET;
}

std::string copyFile(std::string seed, std::string inName, std::string outName)
{
	std::string dir;

	fs::create_directory("rando");

	if (outName == "")
	{
		dir = "rando/Curse of Darkness - " + seed + ".iso";
		fs::copy_file(inName, dir);
	}
	else
	{
		dir = "rando/" + outName + ".iso";
		fs::copy_file(inName, dir);
	}
	return dir;
}

bool fileExists(std::string file)
{
	return fs::exists(file);
}