#include "stdafx.h"
#include "LootCrate.h"


LootCrate::LootCrate()
{
	std::random_device rand;
	std::mt19937_64 mersenne(rand());
	std::uniform_int_distribution<> randomizer(1, 100);
	int type;

	do
	{
		type = randomizer(mersenne);
		if (type < 50)
		{
			Outfit *a = new Outfit();
			m_content.push_back(a);
		}
		else
		{
			Weapon *w = new Weapon();
			m_content.push_back(w);
		}
	} while (isNextItem());
}


LootCrate::~LootCrate()
{
}
