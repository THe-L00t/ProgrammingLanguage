//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>


#include "save.h"

//[문제] 지금 코딩하고 있는 파일은 "main.cpp"이다 
// "main.cpp의 소문자를 모두 대문자로 바꿔 저장한 "MAIN.CPP"를 만들어라 


int main()
{
	std::ifstream in{ "main.cpp" };
	std::ofstream out{ "대문자MAIN.CPP" };
	if (not in) return 404;
	char temp{};
	int cnt{};
	in >> std::noskipws;
	while (in >> temp) {
		out << static_cast<char>(toupper(temp));
	}
	

	//save("main.cpp");
}

