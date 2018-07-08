#pragma once

#include <vector>

#include "Item.h"

class Inventory
{
protected:
	int InventorySize;
	std::vector<Item*> itemList;
public:
	Inventory();
	~Inventory();
};