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
	// [문제] s의 글자중에서 숫자를 찾아 '*'로 바꿔라
	for (size_t i = 0; i < s.length(); i++)
	{
		if (isdigit(s[i])) s[i] = '*';	//처음 왜 빨간줄이 뜨나 
	}


	std::cout << s << std::endl;

	//save("main.cpp");
}

