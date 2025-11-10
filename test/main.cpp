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

int main()
{
	STRING s[]{ "333", "1", "55555", "4444", "22" };

	//[문제] s를 글자수 기준 오름차순으로 정렬하라
	qsort(s, sizeof(s) / sizeof(STRING), sizeof(STRING), [](const void* a, const void* b) {
		return (*(STRING*)a).length() < (*(STRING*)b).length() ? -1 : 1;
		});
	
	for (const STRING& s : s) {
		std::cout << s << std::endl;
	}
	//save("main.cpp");
}

