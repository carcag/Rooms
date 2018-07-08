#pragma once

#include <sstream>
#include <string>

#include "Item.h"

class Weapon :
	public Item
{
protected:
	int m_attack;

public:
	Weapon(std::string weaponLine);
	~Weapon();
	std::string toString();
};