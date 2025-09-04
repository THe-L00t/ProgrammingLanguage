#include "save.h"

#include <iostream>
#include <fstream>
#include <chrono>

void save(std::string_view fileName)	//code convention:
{
	std::ifstream in{ fileName.data()};
	in >> std::noskipws;

	std::ofstream out{ "ProgrammingLanguage_BackUp.txt",std::ios::app };

	auto now = std::chrono::system_clock::now();
	using namespace std::literals;
	now += 9h;

	out << '\n' << '\n';
	out << "=====================================================" << std::endl;
	out << "저장시간:" << now << std::endl;
	out << "=====================================================" << std::endl;
	out << '\n';

	char c;
	while (in >> c)
		out << c;
}
