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
	STRING s[]{ "1","22","333","4444","55555" };
	for (const STRING& c : s) {	//레퍼런스 사용으로 메모리 최적화(?)
		std::cout << c << std::endl;
	}
	//save("main.cpp");
}

