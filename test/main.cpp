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
	STRING s{ "2025년 11월 17일" };

	std::cout << s << std::endl;// ostream의 멤버 함수로는 작성할 수 없다.


	//save("main.cpp");
}

