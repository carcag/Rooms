#pragma once

#include <sstream>
#include <string>

#include "Item.h"

class Outfit :
	public Item
{
protected:
	int m_defense;
public:
	Outfit(std::string outfitLine);
	~Outfit();
	std::string toString();
};

