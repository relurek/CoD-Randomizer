#include "../../h/DefaultTables/DefaultWeapons.h"
#include "../../h/Util.h"


WeaponSet DefaultWeapons::getDefaultWeaponSet(std::fstream & fs)
{
	WeaponSet out;
	out.reserve(70);

	////Weapons (read from iso)////


	///Swords///

	//Short Sword	
	out.emplace_back(fs, 0x007A9250);
	//Broad Sword	
	out.emplace_back(fs, 0x007A9318);
	//Ada	
	out.emplace_back(fs, 0x007A93E0);
	//Sword Breaker	
	out.emplace_back(fs, 0x007A94A8);
	//Schiavona	
	out.emplace_back(fs, 0x007A9570);
	//Kris Naga	
	out.emplace_back(fs, 0x007A9638);
	//Damascus Sword	
	out.emplace_back(fs, 0x007A9700);
	//Bastard Sword	
	out.emplace_back(fs, 0x007A97C8);
	//7 Bladed Sword	
	out.emplace_back(fs, 0x007A9890);
	//Laser Blade	
	out.emplace_back(fs, 0x007A9958);
	//Bamboo Sword	
	out.emplace_back(fs, 0x007A9A20);
	//Zweihander	
	out.emplace_back(fs, 0x007A9AE8);
	//Nodachi	
	out.emplace_back(fs, 0x007A9BB0);
	//Claymore	
	out.emplace_back(fs, 0x007A9C78);
	//Dragon Killer	
	out.emplace_back(fs, 0x007A9D40);
	//Muramasa	
	out.emplace_back(fs, 0x007A9E08);
	//Feather Sword	
	out.emplace_back(fs, 0x007A9ED0);
	//Foil	
	out.emplace_back(fs, 0x007A9F98);
	//Main Gauche	
	out.emplace_back(fs, 0x007AA060);
	//Rapier	
	out.emplace_back(fs, 0x007AA128);
	//Colichemarde	
	out.emplace_back(fs, 0x007AA1F0);
	//Estoc	
	out.emplace_back(fs, 0x007AA2B8);




	///Axes///

	//Bullova	
	out.emplace_back(fs, 0x007AA380);
	//Bardiche	
	out.emplace_back(fs, 0x007AA448);
	//Tabar	
	out.emplace_back(fs, 0x007AA510);
	//Battle Axe	
	out.emplace_back(fs, 0x007AA5D8);
	//War Hammer	
	out.emplace_back(fs, 0x007AA6A0);
	//Death's Scythe	
	out.emplace_back(fs, 0x007AA768);
	//Piko Piko Hammer	
	out.emplace_back(fs, 0x007AA830);
	//Gano	
	out.emplace_back(fs, 0x007AA8F8);
	//Frying Pan	
	out.emplace_back(fs, 0x007AA9C0);
	//Club	
	out.emplace_back(fs, 0x007AAA88);
	//Mace	
	out.emplace_back(fs, 0x007AAB50);
	//Pumpkin Mace	
	out.emplace_back(fs, 0x007AAC18);
	//Morgenstern	
	out.emplace_back(fs, 0x007AACE0);
	//Zaghnol	
	out.emplace_back(fs, 0x007AADA8);




	///Spears///

	//Deck Brush	
	out.emplace_back(fs, 0x007AAE70);
	//Bamboo Lance	
	out.emplace_back(fs, 0x007AAF38);
	//Dung	
	out.emplace_back(fs, 0x007AB000);
	//Sasumata	
	out.emplace_back(fs, 0x007AB0C8);
	//Lance	
	out.emplace_back(fs, 0x007AB190);
	//Naginata	
	out.emplace_back(fs, 0x007AB258);
	//Long Spear	
	out.emplace_back(fs, 0x007AB320);
	//Trident	
	out.emplace_back(fs, 0x007AB3E8);
	//Versatile Spear	
	out.emplace_back(fs, 0x007AB4B0);
	//Halberd	
	out.emplace_back(fs, 0x007AB578);
	//Nyoi-Bo	
	out.emplace_back(fs, 0x007AB640);
	//Do Sanga	
	out.emplace_back(fs, 0x007AB708);
	//Chauve-souris	
	out.emplace_back(fs, 0x007AB7D0);




	///Fist///

	//Champion Glove	
	out.emplace_back(fs, 0x007AB898);
	//Punch Rings	
	out.emplace_back(fs, 0x007AB960);
	//Baghnakhs	
	out.emplace_back(fs, 0x007ABA28);
	//Claws	
	out.emplace_back(fs, 0x007ABAF0);
	//Jur	
	out.emplace_back(fs, 0x007ABBB8);
	//Knuckle Duster	
	out.emplace_back(fs, 0x007ABC80);
	//Metal Glove	
	out.emplace_back(fs, 0x007ABD48);
	//Iron Shell Fists	
	out.emplace_back(fs, 0x007ABE10);
	//Ring	
	out.emplace_back(fs, 0x007ABED8);
	//Hora	
	out.emplace_back(fs, 0x007ABFA0);
	//Pata	
	out.emplace_back(fs, 0x007AC068);
	//Force Glove	
	out.emplace_back(fs, 0x007AC130);




	///???///

	//Gatling Gun	
	out.emplace_back(fs, 0x007AC1F8);
	//Bomb	
	out.emplace_back(fs, 0x007AC2C0);
	//Boomerang	
	out.emplace_back(fs, 0x007AC388);
	//Fire Flask	
	out.emplace_back(fs, 0x007AC450);
	//Shuriken	
	out.emplace_back(fs, 0x007AC518);
	//Hien	
	out.emplace_back(fs, 0x007AC5E0);
	//Spike Shield	
	out.emplace_back(fs, 0x007AC6A8);
	//Bat	
	out.emplace_back(fs, 0x007AC770);
	//Electric Guitar	
	out.emplace_back(fs, 0x007AC838);


	return out;
}