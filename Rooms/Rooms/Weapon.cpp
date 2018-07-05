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

	description = "weapon named ";
	description += m_name;
	description += " with ";
	description += m_attack;
}