//------------------------------------------------------------------------------------------------------------
// 12. 15 - 기말 고사 : 다형성 구현 - 강의때 사용한 코드 이용
// 사용자 정의 자료형 
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <memory>

#include "STRING.h"
#include "save.h"

using namespace std;


STRING s{ "123" };

int main()
{
	std::cout << "------------------------- 메인 시작" << std::endl;
	STRING s{ "1" };
	std::unique_ptr<STRING> p{new STRING{ "55555" } };	// 이름을 주었을때와 주지 않았을때의 차이  
	std::cout << "------------------------- 메인 끝" << std::endl;
	//save("main.cpp");
}

