#pragma once
#include <cstdint>
#include <fstream>
#include <vector>
#include "Util.h"


class ItemLocation
{
public:
	
	ItemLocation(Zone zoneIn, uint32_t offsetIn, uint16_t itemIn, bool strengthIn = false, bool glideIn = false, bool timeIn = false, bool circleIn = false)
		: zone(zoneIn), offset(offsetIn), item(itemIn), strength(strengthIn), glide(glideIn), time(timeIn), circle(circleIn) {};

	void write(std::fstream & fs);

	void reqStrength();
	void reqGlide();
	void reqTime();
	void reqCircle();
private:
	Zone zone;
	uint32_t offset;
	uint16_t item;
	bool strength;
	bool glide;
	bool time;
	bool circle;
};