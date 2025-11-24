//------------------------------------------------------------------------------------------------------------
// 12. 15 - 기말 고사 : 다형성 구현 - 강의때 사용한 코드 이용
// 클래스간의 관계 - 상속(inheritance), 템플릿
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <memory>
#include <algorithm>

#include "STRING.h"
#include "save.h"

using namespace std;
extern bool observe;

// [문제] main()이 문제없이 실행되도록 필요한 코딩을 

int main()
{
	// 연산자 오버로딩 중에서 강의하지 않은 연산자가 있다. () - 함수 호출 연산자
	
	Dog dogs[10];	// Dog는 생성시 [10,30] 임의의 길이를 갖는 STRING name멤버가 있다. 
				// name은 생성시 랜덤 소문자로 초기화된다. 

	for (const Dog& dog : dogs) {
		std::cout << dog << std::endl;
	}

	
	//save("main.cpp");
}

