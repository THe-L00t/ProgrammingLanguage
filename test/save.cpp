#include "save.h"

#include <iostream>
#include <fstream>
#include <chrono>

void save(const std::string& fileName)
{
	std::ifstream in{ fileName };


	std::ofstream out{ "ProgrammingLanguage_BackUp.txt",std::ios::app };
}
