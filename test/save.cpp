#include "save.h"

#include <iostream>
#include <fstream>
#include <chrono>

void save(std::string_view fileName)
{
	std::ifstream in{ fileName.data()};
	in >> std::noskipws;

	std::ofstream out{ "ProgrammingLanguage_BackUp.txt",std::ios::app };

	char c;
	while (in >> c)
		out << c;
}
