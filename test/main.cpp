//------------------------------------------------------------------------------------------------------------
//	
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>

#include "save.h"

int main()
{
	std::cout << "Hello, World!" << std::endl;
	
	std::ifstream in{ "main.cpp" };
	in >> std::noskipws;

	std::ofstream out{"ProgrammingLanguage_BackUp.txt",std::ios::app};
	
	char c;
	while (in >> c)
		out << c;
}