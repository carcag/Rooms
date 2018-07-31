#include "stdafx.h"
#include "IniReader.h"

std::string IniReader::getARandomLine()
{
	std::random_device rand;
	std::mt19937_64 mersenne(rand());
	std::uniform_int_distribution<> randomizer(0, m_lines.size() - 1);
	int lineNumber = randomizer(mersenne);

	return (m_lines[lineNumber]);
}

IniReader::IniReader(const std::string fileToread)
{
	std::string line;
	std::ifstream inifile(fileToread);

	if (inifile.is_open())
	{
		while (getline(inifile, line))
		{
			m_lines.push_back(line);
		}
		inifile.close();
	}
	else
	{
		std::cout << "Error : Cannot open the file \"" << fileToread
			<< "\"" << std::endl;
		exit(-1);
	}
}


IniReader::~IniReader()
{
	std::vector<std::string>().swap(m_lines);
}
