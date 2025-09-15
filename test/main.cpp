//------------------------------------------------------------------------------------------------------------
//	함수 
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>

#include "save.h"

// [문제] int 값 2개를 입력받아라. 
// 2개의 int를 인자로 받아 합계를 리턴하는 함수 add를 작성하여
// 합계를 화면에 출력하라
// main이 문제없이 의도대로 실행되도록 하라

int add(int&, int&);	// function declaration, prototype, signature
//	메모리와 무관

int add(int& a, int& b) {	//function definition, 메모리를 차치함
	return a + b;
}

int main()
{
	int a{}, b{};
	std::cout << "int 2개를 입력받아 합계를 출력하는 프로그램" << std::endl;
	std::cout << "값 2개를 입력하세요 - ";
	std::cin >> a >> b;

	std::cout << a << " + " << b << " = " << add(a, b) << std::endl;

	std::cout << std::addressof(add) << std::endl;

	//save("main.cpp");
}
