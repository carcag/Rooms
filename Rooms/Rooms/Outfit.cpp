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

	description = m_name;
	description += ":\n\t Defense => ";
	description += std::to_string(m_defense);
	description += "\n";
	return (description);
}