//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>

#include "save.h"

//[문제] 지금 코딩하고 있는 파일은 "main.cpp"이다 
// 이 파일에는 모두 몇 단어가 있는지 출력하라 
//(단어) 공백으로 분리된 문자 집합을 말한다. 


int main()
{
	std::ifstream in{ "main.cpp" };
	std::ofstream out{ "대문자MAIN.CPP" };
	if (not in) return 404;
	std::string temp{};
	int cnt{};
	while (in >> temp) {
		++cnt;
	}
	std::cout << cnt << "개 입니다.";

	//save("main.cpp");
}

