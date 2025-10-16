//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>

#include "save.h"

//[문제] e class에서 다운받은 "몇개인지모르는int값들.txt" 파일에는
// int값이 저장되어 있다. 
// 1. 모두 몇 개인지 출력하라
// 2. 제일 큰 값을 찾아 출력하라
 
int main()
{
	std::ifstream in{ "몇개인지모르는int값들.txt" };

	int max = std::numeric_limits<int>::min();
	int temp{}, cnt{}, offset{};
	while (in >> temp) {
		++cnt;
		if (max < temp) {
			max = temp;
			offset = cnt;
		}
	}
	std::cout << "1. 모두 " << cnt << "개입니다. " << std::endl;
	std::cout << "2. 가장 큰 값은 " << max <<"으로 "<< offset << "번째 값입니다. " << std::endl;

	//save("main.cpp");
}

