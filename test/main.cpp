//------------------------------------------------------------------------------------------------------------
// reference - 객체에 붙일 수 있는 별명(alias)
// qsort
// 10.27 월 - 중간고사 
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <random>
#include <print>

#include "save.h"

char pangram[]{"the quick brown fox jumps over the lazy dog"};

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

