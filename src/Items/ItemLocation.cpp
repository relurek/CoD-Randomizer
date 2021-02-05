#include "../../h/Items/ItemLocation.h"
#include "../../h/Util.h"

void ItemLocation::write(std::fstream & fs)
{
	int32_t Boffset = getBlockOffset(item);

	uint32_t id = item + Boffset;

	fs.seekp(offset);
	fs.write(reinterpret_cast<char *> (&id), 2);
}

void ItemLocation::reqStrength() { strength = true; }
void ItemLocation::reqGlide() { glide = true; }
void ItemLocation::reqTime() { time = true; }
void ItemLocation::reqCircle() { circle = true; }