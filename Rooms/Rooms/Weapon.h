#pragma once
#include "Item.h"
class Weapon :
	public Item
{
protected:
	int m_attack;
public:
	Weapon();
	~Weapon();
	std::string toString();
};