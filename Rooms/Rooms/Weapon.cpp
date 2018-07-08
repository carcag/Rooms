#include "stdafx.h"
#include "Weapon.h"

Weapon::Weapon(std::string weaponLine)
{
	std::istringstream weaponDescription(weaponLine);
	std::string weaponAttack;
	std::string weaponInventorySize;

	getline(weaponDescription, m_name, '=');
	getline(weaponDescription, weaponAttack, '=');
	getline(weaponDescription, weaponInventorySize, '=');
	
	m_attack = std::stoi(weaponAttack);
	m_itemSize = std::stoi(weaponInventorySize);
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
	description += "\n\t Size => ";
	description += std::to_string(m_itemSize);
	description += "\n";
	return (description);
}