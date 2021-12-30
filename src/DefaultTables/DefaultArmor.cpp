#include "../../h/DefaultTables/DefaultArmor.h"
#include "../../h/Util.h"

ArmorSet DefaultArmor::getDefaultArmorSet(std::fstream & fs)
{
	ArmorSet out;
	out.reserve(26);


	////// Body Armor //////

	//Alucart Mail	
	out.emplace_back(fs, 0x007AD64C);
	//Sport's Kit	
	out.emplace_back(fs, 0x007AD6E4);
	//Special Ops	
	out.emplace_back(fs, 0x007AD77C);
	//Hide Armor	
	out.emplace_back(fs, 0x007AD814);
	//Sport's Jersey	
	out.emplace_back(fs, 0x007AD8AC);
	//Clown Suit	
	out.emplace_back(fs, 0x007AD944);
	//Prince's Clothes	
	out.emplace_back(fs, 0x007AD9DC);
	//Soft Leather Armor	
	out.emplace_back(fs, 0x007ADA74);
	//Black Belt Suit	
	out.emplace_back(fs, 0x007ADB0C);
	//Hard Leather Armor	
	out.emplace_back(fs, 0x007ADBA4);
	//Kendo Suit	
	out.emplace_back(fs, 0x007ADC3C);
	//Lorica	
	out.emplace_back(fs, 0x007ADCD4);
	//Hanzou's Clothes	
	out.emplace_back(fs, 0x007ADD6C);
	//Lamellar	
	out.emplace_back(fs, 0x007ADE04);
	//Eastern Armor	
	out.emplace_back(fs, 0x007ADE9C);
	//Brigandine	
	out.emplace_back(fs, 0x007ADF34);
	//Chain Mail	
	out.emplace_back(fs, 0x007ADFCC);
	//Half Plate	
	out.emplace_back(fs, 0x007AE064);
	//Barbarian Armor	
	out.emplace_back(fs, 0x007AE0FC);
	//Banded Mail	
	out.emplace_back(fs, 0x007AE194);
	//Dracula's Clothes	
	out.emplace_back(fs, 0x007AE22C);
	//Plate Mail	
	out.emplace_back(fs, 0x007AE2C4);
	//Field Armor	
	out.emplace_back(fs, 0x007AE35C);
	//Cuirassair Armor	
	out.emplace_back(fs, 0x007AE3F4);
	//Parade Armor	
	out.emplace_back(fs, 0x007AE48C);
	//Maximillian Armor	
	out.emplace_back(fs, 0x007AE524);

	
	return out;
}

ArmorSet DefaultArmor::getDefaultHelmetSet(std::fstream & fs)
{
	ArmorSet out;
	out.reserve(21);

	//School Cap	
	out.emplace_back(fs, 0x007AEA7C);
	//Topknot	
	out.emplace_back(fs, 0x007AEB14);
	//Ten-Gallon Hat	
	out.emplace_back(fs, 0x007AEBAC);
	//Leather Helm	
	out.emplace_back(fs, 0x007AEC44);
	//Stone Mask	
	out.emplace_back(fs, 0x007AECDC);
	//Face Guard	
	out.emplace_back(fs, 0x007AED74);
	//Corinthian Helmet	
	out.emplace_back(fs, 0x007AEE0C);
	//Iron Mask	
	out.emplace_back(fs, 0x007AEEA4);
	//Tengu Mask	
	out.emplace_back(fs, 0x007AEF3C);
	//Pumpkin Head	
	out.emplace_back(fs, 0x007AEFD4);
	//Thracian Helmet	
	out.emplace_back(fs, 0x007AF06C);
	//Gallic Helmet	
	out.emplace_back(fs, 0x007AF104);
	//Frog Mouth Helm	
	out.emplace_back(fs, 0x007AF19C);
	//Sallet	
	out.emplace_back(fs, 0x007AF234);
	//Masakado's Helm	
	out.emplace_back(fs, 0x007AF2CC);
	//Barrel Helm	
	out.emplace_back(fs, 0x007AF364);
	//Lobster Tail Pod	
	out.emplace_back(fs, 0x007AF3FC);
	//Armet	
	out.emplace_back(fs, 0x007AF494);
	//Burgonet	
	out.emplace_back(fs, 0x007AF52C);
	//Crest Helm	
	out.emplace_back(fs, 0x007AF5C4);
	//Cross Helmet	
	out.emplace_back(fs, 0x007AF65C);

	
	return out;
}