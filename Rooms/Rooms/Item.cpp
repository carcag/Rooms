#include "stdafx.h"
#include "Item.h"

int Item::m_iterator = 0;


Item::Item()
{
	time_t secondPastEpoch = time(0);
	m_itemID += std::to_string(secondPastEpoch);
	m_itemID += std::to_string(m_iterator);
	++m_iterator;
}

Item::~Item()
{
}

std::string Item::toString()
{
	return ("");
}