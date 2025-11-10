//------------------------------------------------------------------------------------------------------------
// 12. 15 - 기말 고사 : 다형성 구현 - 강의때 사용한 코드 이용
// special 함수
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <memory>

#include "STRING.h"
#include "save.h"

using namespace std;

int main()
{
	STRING s1{ "2025년" };
	STRING s2{ "11월 10일" };
	s2 = s1;

	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	//save("main.cpp");
}

