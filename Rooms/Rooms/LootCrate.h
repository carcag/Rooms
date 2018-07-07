#pragma once

#include <vector>
#include <random>

#include "Outfit.h"
#include "Weapon.h"

class LootCrate
{
protected:
	std::vector<Item*> m_content;

	bool isNextItem(int);
public:
	LootCrate();
	~LootCrate();
	std::string contentDescription();
};

