#pragma once
#include <string>
#include <iostream>

class Item
{
protected:
	std::string m_name;
public:
	Item();
	~Item();
	virtual std::string toString() = 0;
};