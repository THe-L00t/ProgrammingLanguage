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
	std::string s1{ "2025년 11월 13일" };
	std::string s2{ " 오늘은 수능 시험일" };
	
	std::string s3 = s1 + s2;		

	std::cout << s3 << std::endl;
	//save("main.cpp");
}

