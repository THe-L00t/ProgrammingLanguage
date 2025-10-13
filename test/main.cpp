//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <print>

#include "save.h"


int main()
{
	std::ofstream out{"numberFile.txt"};
	for (size_t i = 0; i < 100; ++i)
	{
		std::print(out,"{:4}", i+1);
	}
	out << std::endl;
	std::cout << std::endl;	// '\n'과 동일 - 입력버퍼가 flush되나 안되나의 차이

	//save("main.cpp");
}

