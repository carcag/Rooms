#include "stdafx.h"
#include "Outfit.h"


Outfit::Outfit(std::string outfitLine)
{
	std::istringstream outfitDescription(outfitLine);
	std::string outfitDefense;
	std::string outfitSize;

	getline(outfitDescription, m_name, '=');
	getline(outfitDescription, outfitDefense, '=');
	getline(outfitDescription, outfitSize, '=');

	m_defense = std::stoi(outfitDefense);
	m_itemSize = std::stoi(outfitSize);
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
	description += "\t Size => ";
	description += std::to_string(m_itemSize);
	description += "\n";
	return (description);
}