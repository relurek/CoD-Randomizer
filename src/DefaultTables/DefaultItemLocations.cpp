#include "../../h/DefaultTables/DefaultItemLocations.h"
#include "../../h/IDs/ItemIDs.h"

itemLocSet DefaultLocations::getDefaultLocationSet()
{
	itemLocSet out;
	//out.reserve() once I have all items and a final count

					// zone, offset, strength, glide, time, circle


	////// Abandoned Castle //////
	
	//Memorial Ticket
	out.emplace_back(Zone::CAST, 0x15B4F570, MEMORIAL_TICKET);
	//Quick Step
	out.emplace_back(Zone::CAST, 0x15C78510, QUICK_STEP);
	//Outside Potion
	out.emplace_back(Zone::CAST, 0x155A2200, POTION);
	//Map
	out.emplace_back(Zone::CAST, 0x167FB400, ABANDONED_CASTLE_MAP);
	//Crest
	out.emplace_back(Zone::CAST, 0x16993F80, DRAGON_CREST);
	//Inside Potion
	out.emplace_back(Zone::CAST, 0x15B4F530, POTION);
	//Bestiary
	out.emplace_back(Zone::CAST, 0x15D976A0, BESTIARY);
	//Wine Room Potion
	out.emplace_back(Zone::CAST, 0x17E76AD0, POTION);
	//Aluminum
	out.emplace_back(Zone::CAST, 0x17E76B50, ALUMINUM);
	//100G
	out.emplace_back(Zone::CAST, 0x178FDC90, G_100);
	//Weapon Combine
	out.emplace_back(Zone::CAST, 0x17D42AA0, WEAPON_COMBINE);
	//ID Crystal
	out.emplace_back(Zone::CAST, 0x17D42AE0, ID_EVO_CRYSTAL);
	//Bloody Room Potion
	out.emplace_back(Zone::CAST, 0x182BED20, POTION);
	//Double Step
	out.emplace_back(Zone::CAST, 0x16DB0B70, DOUBLE_STEP);


	////// Baljhet Mountains //////

	//Perfect Guard
	out.emplace_back(Zone::MNTN, 0x295FF600, PERFECT_GUARD);
	//Serum
	out.emplace_back(Zone::MNTN, 0x2A844170, SERUM);
	//XS Potion
	out.emplace_back(Zone::MNTN, 0x2A8441B0, XS_POTION, false, true);
	//Potion
	out.emplace_back(Zone::MNTN, 0x286C9000, POTION);
	//Magical Ticket
	out.emplace_back(Zone::MNTN, 0x286C91E0, MAGICAL_TICKET);
	//Map
	out.emplace_back(Zone::MNTN, 0x29C0D6D0, BALJHET_MOUNTAINS_MAP);
	//Steal
	out.emplace_back(Zone::MNTN, 0x286C91A0, STEAL);
	//ID Chart
	out.emplace_back(Zone::MNTN, 0x28F39110, ID_CHART);
	//Boiling Ring
	out.emplace_back(Zone::MNTN, 0x2A9BFAA0, BOILING_RING);
	//HP Max
	out.emplace_back(Zone::MNTN, 0x2A9BFA60, HP_MAX_UP, false, true);


	////// Garibaldi Temple //////
	
	//Outside Magic Ticket
	out.emplace_back(Zone::TMPL, 0x0CA0CE30, MAGICAL_TICKET);
	//HP Max
	out.emplace_back(Zone::TMPL, 0x0CA0CE70, HP_MAX_UP);
	//Memorial Ticket
	out.emplace_back(Zone::TMPL, 0x0D111830, MEMORIAL_TICKET);
	//1f Uncurse
	out.emplace_back(Zone::TMPL, 0x0D111430, UNCURSE);
	//Potion
	out.emplace_back(Zone::TMPL, 0x0EE8B910, POTION);
	//Map
	out.emplace_back(Zone::TMPL, 0x0CE8FAF0, GARIBALDI_TEMPLE_MAP);
	//Map Checker
	out.emplace_back(Zone::TMPL, 0x0CE8EFF0, MAP_CHECKER);
	//2f Serum
	out.emplace_back(Zone::TMPL, 0x0DB65420, SERUM);
	//2f Uncurse 1
	out.emplace_back(Zone::TMPL, 0x0DB65460, UNCURSE);
	//2f Uncurse 2
	out.emplace_back(Zone::TMPL, 0x0F033400, UNCURSE);
	//Ceremonial Tool
	out.emplace_back(Zone::TMPL, 0x0DF35920, CEREMONIAL_TOOL);
	//North Magic Ticket
	out.emplace_back(Zone::TMPL, 0x0E124540, MAGICAL_TICKET, true);
	//Sixth Sense Brooch
	out.emplace_back(Zone::TMPL, 0x0E357910, SIXTH_SENSE_BROOCH, true);
	//Sun Tears
	out.emplace_back(Zone::TMPL, 0x0E29B550, SUN_TEARS, true);


	////// Mortvia Aqueduct //////

	//Map
	out.emplace_back(Zone::MTVA, 0x2424D660, MORTVIA_AQUEDUCT_MAP);
	//ID Pocket
	out.emplace_back(Zone::MTVA, 0x22097550, EXTRA_ID_POCKET);
	//500g
	out.emplace_back(Zone::MTVA, 0x22262D70, G_500);
	//Brooch of Bonds
	out.emplace_back(Zone::MTVA, 0x22262DB0, BROOCH_OF_BONDS, false, true);
	//Spirit of Fuji
	out.emplace_back(Zone::MTVA, 0x23DE9C20, SPIRIT_OF_FUJI);
	//Drain Potion
	out.emplace_back(Zone::MTVA, 0x22BDC710, POTION);
	//Basin Potion
	out.emplace_back(Zone::MTVA, 0x23BD9F90, POTION);


	return out;
}