#pragma once
#include <string>
#include <iostream>

#include <time.h>

class Item
{
protected:
	std::string m_name;
	int m_itemSize;
	std::string m_itemID;
	static int m_iterator;
public:
	Item();
	~Item();
	virtual std::string toString();
};