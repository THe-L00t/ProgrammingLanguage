//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>


#include "save.h"

//[문제] 지금 코딩하고 있는 파일은 main.cpp이다. 
// 사용자가 입력한 문자가 몇 개나 사용되었는지 출력하라
// 예) 입력 - a
// 답 - a 문자의 개수 - 10


int main()
{
	int num['z' - 'a' + 1]{};
	std::ifstream in{ "main.cpp" };
	if (not in) return 404;
	char temp{};
	int cnt{};
	while (in >> temp) {
		if (islower(temp)) {
			++num[temp - 'a'];
		} 
	}
	/*char c{ 'a' };
	for (int& n : num) {
		std::cout << static_cast<char>(c++) << "-" << n << std::endl;
	}*/
	char input{};
	std::cout << "입력 - ";
	std::cin >> input;
	std::cout << "답 - " << input << "문자의 개수 - " << num[input - 'a'] << std::endl;

	//save("main.cpp");
}

