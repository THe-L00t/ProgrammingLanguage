//------------------------------------------------------------------------------------------------------------
//	자료형과 변수 
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>

#include "save.h"

int gn;

int main()
{	
	int n;
	float f;
	int* np = new int{};

	std::cout <<"지역변수 n의 주소 :   " << std::addressof(n) << std::endl;
	std::cout << "지역변수 f의 주소 :   " << std::addressof(f) << std::endl;
	std::cout << "전역변수 gn의 주소 :  " << std::addressof(gn) << std::endl;
	std::cout << "동적할당변수의 주소 : " << np << std::endl;

	save("main.cpp");
}