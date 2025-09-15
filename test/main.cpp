//------------------------------------------------------------------------------------------------------------
//	함수 
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <random>
#include <print>
#include <algorithm>
#include <map>

#include "save.h"

std::default_random_engine dre{};
std::uniform_int_distribution uid{0,9999'9999};

// int 1000개를 저장할 메모리를 확보한다. 
// 각 int 값을 랜덤값으로(임의로/제멋대로) 채운다.
// 제일 큰 값을 찾아 화면에 출력하라 (실습)

int main()
{
	int num[1000];
	for (int& i : num) {
		i = uid(dre);
	}
	int max{std::numeric_limits<int>::min()};
	for (const int& i : num) {
		std::print("{:10}", i);
		if (max < i) max = i;
	}
	std::cout << std::endl << "제일 큰 값은 " << max << "입니다." << std::endl;
	

	//save("main.cpp");
}
