#include "stdafx.h"
#include "Weapon.h"


Weapon::Weapon()
{
	m_name = "maschinenpistole 40";
	m_attack = 40;
}


Weapon::~Weapon()
{
}

std::string Weapon::toString()
{
	std::string description;

	description = m_name;
	description += ":\n\t Attack => ";
	description += std::to_string(m_attack);
	description += "\n";
	return (description);
}