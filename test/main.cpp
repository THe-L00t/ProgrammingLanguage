//------------------------------------------------------------------------------------------------------------
// 같은 자료형을 갖는 많은 수의 자료가 있을 때 할 수 있는 일 - 정렬 
// 동적 할당
// 파일에 있는 많은 수의 자료를 읽어 와서 원하는 대로 처리 
//------------------------------------------------------------------------------------------------------------
#include <iostream>

#include "save.h"

char pangram[]{"the quick brown fox jumps over the lazy dog"}; 
int main()
{
	qsort(pangram, (sizeof pangram -1)/sizeof(char), sizeof(char), [](const void* a, const void* b) {
		return *(char*)a - *(char*)b;
		});
	/*for (const char& c : pangram) {
		std::cout << c;
	}*/
	std::cout << pangram << std::endl;
	std::cout << std::endl;
	//save("main.cpp");
}

