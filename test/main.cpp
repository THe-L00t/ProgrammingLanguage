//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <print>

#include "save.h"

// [문제] "numberFile.txt"가 있다. 
// 여기에는 몇 개인지 모르는 int값이 기록되어 있다. 
// 읽어서 화면에 출력하라.


int main()
{
	std::ifstream in{ "numberFile.txt" };
	// 위의 코드를 두 줄로 나누지 않은 의도 = RAII


	int num, cnt{};
	while (in >> num) {	// 파일의 끝 EOF
		std::cout << num << std::endl;
		cnt++;
	}
	std::cout << cnt << "개 입니다. " << std::endl;

	//save("main.cpp");
}

