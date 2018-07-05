#include "stdafx.h"
#include "Outfit.h"


Outfit::Outfit()
{
	m_name = "FeldUniform m22";
	m_defense = 12;
}

Outfit::~Outfit()
{
}

std::string Outfit::toString()
{
	std::string description;

	description = "weapon named ";
	description += m_name;
	description += " with ";
	description += m_defense;
}