//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>


#include "save.h"

//[문제] 지금 코딩하고 있는 파일은 main.cpp이다. 
// 소문자의 개수를 세서 다음과 같이 출력하라 
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

