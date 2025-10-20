//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>

#include "save.h"

//[문제] 지금 코딩하고 있는 파일은 "main.cpp"이다 
// 단어가 모두 몇 개인지 출력하라
// 여기에 단어를 모두 메모리에 저장하라
// 오름차순으로 정렬하라 
// 정렬 결과를 출력하라 


int main()
{
	unsigned cnt{}; //
	{
		std::ifstream in{ "main.cpp" };
		if (not in) return 404;
		std::string temp{};
		while (in >> temp) {
			++cnt;
		}
	}
	std::ifstream in{ "main.cpp" };
	if (not in) return 404;
	// 단어개수가 실시간에 파악되었다
	// 다음 문제를 해결하라

	std::string* strings = new std::string[cnt];
	
	for (size_t i = 0; i < cnt; ++i)
	{
		in >> strings[i];
	}
	qsort(strings, cnt, sizeof(std::string), [](const void* a, const void* b) {
		return *(std::string*)a < *(std::string*)b? -1 : 1 ;
		});
	for (size_t i = 0; i < cnt; ++i)
	{
		std::cout << strings[i] << std::endl;
	}

	//save("main.cpp");
}

