//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>


#include "save.h"

//[����] ���� �ڵ��ϰ� �ִ� ������ "main.cpp"�̴� 
// "main.cpp�� �ҹ��ڸ� ��� �빮�ڷ� �ٲ� ������ "MAIN.CPP"�� ������ 


int main()
{
	std::ifstream in{ "main.cpp" };
	std::ofstream out{ "�빮��MAIN.CPP" };
	if (not in) return 404;
	char temp{};
	int cnt{};
	in >> std::noskipws;
	while (in >> temp) {
		out << static_cast<char>(toupper(temp));
	}
	

	//save("main.cpp");
}

