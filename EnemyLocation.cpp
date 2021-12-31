#include "h/Enemies/EnemyLocation.h"

EnemyLocation::EnemyLocation(std::fstream & fs, std::vector<uint16_t> ids)
{
	read(fs, ids);
}

void EnemyLocation::write(std::fstream & fs, std::vector<uint16_t> ids)
{
	fs.write(reinterpret_cast <char*> (&ids[enemyIndex]), 2);
	fs.write(reinterpret_cast <char*> (&range), 2);
	fs.write(reinterpret_cast <char*> (&resp), 2);
	fs.write(reinterpret_cast <char*> (&u1), 2);
	fs.write(reinterpret_cast <char*> (&u2), 2);
	fs.write(reinterpret_cast <char*> (&u3), 2);
	fs.write(reinterpret_cast <char*> (&u4), 2);
	fs.write(reinterpret_cast <char*> (&u5), 2);
	fs.write(reinterpret_cast <char*> (&spawnNum), 2);
	fs.write(reinterpret_cast <char*> (&simulNum), 2);
}

void EnemyLocation::read(std::fstream & fs, std::vector<uint16_t> ids)
{
	uint16_t enemyID = 99;
	fs.read(reinterpret_cast <char*> (&enemyID), 2);
	fs.read(reinterpret_cast <char*> (&range), 2);
	fs.read(reinterpret_cast <char*> (&resp), 2);
	fs.read(reinterpret_cast <char*> (&u1), 2);
	fs.read(reinterpret_cast <char*> (&u2), 2);
	fs.read(reinterpret_cast <char*> (&u3), 2);
	fs.read(reinterpret_cast <char*> (&u4), 2);
	fs.read(reinterpret_cast <char*> (&u5), 2);
	fs.read(reinterpret_cast <char*> (&spawnNum), 2);
	fs.read(reinterpret_cast <char*> (&simulNum), 2);


	if (enemyID == 204)
		printf("Uh oh");

	enemyIndex = 99;
	for (size_t i = 0; i < ids.size(); i++)
	{
		if (enemyID == ids[i])
		{
			enemyIndex = (uint8_t)i;
		}
	}

	if (enemyIndex >= ids.size() || enemyIndex == 99)
		printf("Uh oh");
}