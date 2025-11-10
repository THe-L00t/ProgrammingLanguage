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
	// 프로그램이 죽는 이유	:	s2가 먼저 사라지며 같이 가리키고 있던 free-stroe메모리를 반환, 댕글링 포인터 
	STRING s1{ "12345" };
	STRING s2 = s1;
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	//save("main.cpp");
}

