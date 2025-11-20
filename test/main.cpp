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
	observe = true;
	STRING s{ "the quick brown fox jumps over the lazy dog" };
	qsort(s.getData(), s.length(), sizeof(char), [](const void* a, const void* b) {
		return *(char*)a - *(char*)b;
		});


	std::cout << s << std::endl;

	//save("main.cpp");
}

