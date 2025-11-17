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
	STRING s{ "두번째 내용" };
	STRING t = "첫번째 내용" + s;
	//위의 내용을 살려보자 


	//save("main.cpp");
}

