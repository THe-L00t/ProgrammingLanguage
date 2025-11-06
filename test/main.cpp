//------------------------------------------------------------------------------------------------------------
// 12. 15 - 기말 고사 : 다형성 구현 - 강의때 사용한 코드 이용
// 사용자 정의 자료형 
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>

#include "save.h"

using namespace std;



int main()
{
	STRING s{ "C++ 클래스 만들때 special functions - 6" };
	std::cout << s.length() << std::endl;
	std::cout << s << std::endl;

	//save("main.cpp");
}

