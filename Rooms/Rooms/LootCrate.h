#pragma once

#include <vector>
#include <random>

#include "Outfit.h"
#include "Weapon.h"

class LootCrate
{
protected:
	std::vector<Item*> m_content;
public:
	LootCrate();
	~LootCrate();
};

