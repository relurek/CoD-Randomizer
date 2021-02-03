#include "EnemyEncounter.h"

void EnemyEncounter::write(std::fstream fs)
{
	uint8_t two = 2;				// Want specific control over length
	uint32_t loc = offset;

	fs.seekp(loc);
	for (size_t i = 0; i < ids.size(); i++)
	{
		fs.write(reinterpret_cast <char*> (&two), 2);
		fs.write(reinterpret_cast <char*> (&ids[i]), 2);
	}
	loc += 16;

	for (EnemyLocation en : locs)
	{
		fs.seekp(loc);

		fs.write(reinterpret_cast <char*> (&ids[en.enemyIndex]), 2);
		fs.write(reinterpret_cast <char*> (&en.range), 2);
		fs.write(reinterpret_cast <char*> (&en.resp), 2);
		fs.write(reinterpret_cast <char*> (&en.u1), 2);
		fs.write(reinterpret_cast <char*> (&en.u2), 2);
		fs.write(reinterpret_cast <char*> (&en.u3), 2);
		fs.write(reinterpret_cast <char*> (&en.u4), 2);
		fs.write(reinterpret_cast <char*> (&en.u5), 2);
		fs.write(reinterpret_cast <char*> (&en.spawnNum), 2);
		fs.write(reinterpret_cast <char*> (&en.simulNum), 2);

		loc += 64;
	}
}