//------------------------------------------------------------------------------------------------------------
// 같은 자료형을 갖는 많은 수의 자료가 있을 때 할 수 있는 일 - 정렬 
// 동적 할당
// 파일에 있는 많은 수의 자료를 읽어 와서 원하는 대로 처리 
//------------------------------------------------------------------------------------------------------------
#include <iostream>

#include "save.h"

char pangram[]{"the quick brown fox jumps over the lazy dog"}; // 문자열 관련 ASCII 설명

int main()
{
	std::cout << std::addressof(pangram) << std::endl;	//주소 8바이트 
	std::cout << std::hex<< (int)pangram << std::endl;	//4바이트
	
	//save("main.cpp");
}

