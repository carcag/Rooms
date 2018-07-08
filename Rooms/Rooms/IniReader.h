#pragma once

#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <random>

#include "Weapon.h"

class IniReader
{
protected:
	std::vector<std::string> m_lines;

public:
	IniReader(const std::string fileToRead);
	~IniReader();
	std::string getARandomLine();

};
