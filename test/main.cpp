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
extern bool observe;

int main()
{
	
	STRING s{ "2025년 11월 20일" };
	for (size_t i = 0; i < s.length(); i++)
	{
		std::cout << s.operator[](i) << std::endl; 
	}

	//save("main.cpp");
}

