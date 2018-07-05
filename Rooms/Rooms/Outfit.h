#pragma once
#include "Item.h"
class Outfit :
	public Item
{
protected:
	int m_defense;
public:
	Outfit();
	~Outfit();
	std::string toString();
};

