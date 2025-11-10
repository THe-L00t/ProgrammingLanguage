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
	for (const STRING& c : s) {	//c++ const consistency
		std::cout << c << std::endl;
		//c.show(); -> 한정자 맞춰주기 
	}
	//save("main.cpp");
}

