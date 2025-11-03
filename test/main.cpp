//------------------------------------------------------------------------------------------------------------
// 12. 15 - 기말 고사 : 다형성 구현 - 강의때 사용한 코드 이용
// 사용자 정의 자료형 
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>

#include "save.h"

using namespace std;

class STRING {
public:
	STRING(){}
	STRING(const char* c) : len{ strlen(c) } {
		data = new char[len];
		memcpy(data, c, len);	//초고속 복사 
	}
	~STRING() {
		delete[] data;
	}

	size_t length() {
		return len;
	}

	friend std::ostream& operator<<(std::ostream& os, const STRING& s) {
		return os << s.data;
	}
private:
	size_t len{};
	char* data;
};



int main()
{
	STRING s{ "C++ 클래스 만들때 special functions - 6" };
	std::cout << s.length() << std::endl;
	std::cout << s << std::endl;

	//save("main.cpp");
}

