//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>


#include "save.h"

//[����] ���� �ڵ��ϰ� �ִ� ������ main.cpp�̴�. 
// �ҹ����� ������ ���� ������ ���� ����϶� 
// a-3
// b-2 
// z -0 


int main()
{
	int num['z' - 'a'+1]{};
	std::ifstream in{ "main.cpp" };
	char temp{};
	int cnt{};
	while (in >> temp) {
		if (islower(temp)) {
			num[temp - 'a']++;
		} 
	}
	char c{ 'a' };
	for (int& n : num) {
		std::cout << (char)(c++) << "-" << n << std::endl;
	}

	//save("main.cpp");
}

