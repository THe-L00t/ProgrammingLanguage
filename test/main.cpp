//------------------------------------------------------------------------------------------------------------
//	강의 소개, save파일 만들기, 컴파일 환경 설정
// 환경]
// VS 버전 17.14.13 (August 2025)
// Release모드, x64
// 미리 보기 - 최신 C++ 초안의 기능(/std:c++latest)
// C/C++ - SDL검사 : 아니요(/sdl-)
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>

#include "save.h"

int main()
{
	std::cout << "Hello, World!" << std::endl;
	
	std::ifstream in{ "main.cpp" };
	in >> std::noskipws;

	char c;
	while (in >> c)
		std::cout << c;
}