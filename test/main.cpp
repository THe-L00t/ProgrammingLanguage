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
	STRING s1{ "2025년 11월 13일" };
	STRING s2{ " 오늘은 수능 시험일" };
	
	STRING s3 = s1 + s2;	// 정상적이라면 복사생성자 4번 등장 후 3번 소멸자. 그러나 컴파일러가 temp를 그대로 s3에 이용
	// RVO라는 최적화 기법이다.  

	std::cout << s3 << std::endl;
	//save("main.cpp");
}

