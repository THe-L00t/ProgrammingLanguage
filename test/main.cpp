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
	// 파일을 읽을때는 요청을 한다. 성공했는지 여부를 확인해야 한다
	if (not in) {
		return 20251026;
	}


	int num, cnt{};
	while (in >> num) {	// 파일의 끝 EOF
		std::cout << num << std::endl;
		cnt++;
	}
	std::cout << cnt << "개 입니다. " << std::endl;

	//save("main.cpp");
}

