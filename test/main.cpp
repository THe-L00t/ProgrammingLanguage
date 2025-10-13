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
	std::cout << std::endl;	// '\n'�� ���� - �Է¹��۰� flush�ǳ� �ȵǳ��� ����

	//save("main.cpp");
}

