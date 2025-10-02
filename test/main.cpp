//------------------------------------------------------------------------------------------------------------
// 같은 자료형을 갖는 많은 수의 자료가 있을 때 할 수 있는 일 - 정렬 
// 동적 할당
// 파일에 있는 많은 수의 자료를 읽어 와서 원하는 대로 처리 
//------------------------------------------------------------------------------------------------------------
#include <iostream>

#include "save.h"

char pangram[]{"the quick brown fox jumps over the lazy dog"}; // 문자열 관련 ASCII 설명

int main()
{
	qsort(pangram, sizeof(pangram), sizeof(char), [](const void* a, const void* b) {
		char A = *(char*)a; char B = *(char*)b;
		if (A not_eq B) return (A < B) ? -1 : 1;
		else return 0;
		});
	for (const char& c : pangram) {
		std::cout << c;
	}
	std::cout << std::endl;
	//save("main.cpp");
}

