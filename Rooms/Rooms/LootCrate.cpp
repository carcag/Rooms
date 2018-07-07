#include "stdafx.h"
#include "LootCrate.h"

std::string LootCrate::contentDescription()
{
	std::string description;

	description = "Description of the content of the loot crate :\n";
	for(std::vector<Item*>::iterator it = m_content.begin(); it != m_content.end(); ++it)
	{
		description += static_cast<Item*>(*it)->toString();
	}

	return (description);
}

bool LootCrate::isNextItem(int next)
{
	if (next > 50)
		return (true);
	return (false);
}

LootCrate::LootCrate()
{
	std::random_device rand;
	std::mt19937_64 mersenne(rand());
	std::uniform_int_distribution<> randomizer(1, 100);
	int type = 0;

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
	} while (isNextItem(randomizer(mersenne)));
}


LootCrate::~LootCrate()
{
}
