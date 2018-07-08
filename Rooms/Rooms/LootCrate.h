#pragma once

#include <vector>
#include <random>

#include "Outfit.h"
#include "Weapon.h"
#include "IniReader.h"

class LootCrate
{
protected:
	std::vector<Item*> m_content;
	IniReader *m_iniWeapon;
	IniReader *m_iniOutfit;

	bool isNextItem(int);
public:
	LootCrate();
	~LootCrate();
	std::string contentDescription();
};

