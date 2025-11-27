//------------------------------------------------------------------------------------------------------------
// 12. 15 - 기말 고사 : 다형성 구현 - 강의때 사용한 코드 이용
// 클래스간의 관계 - 상속(inheritance)
// - 코드 재사용
// - 다형성(polymorphism)
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <fstream>

#include "STRING.h"
#include "save.h"

using namespace std;
extern bool observe;

// 객체 설계 SOLID

class StarString : public std::string {
	friend std::ostream& operator<<(std::ostream& os, const StarString& s) {
		for (const char c : s) {
			if (isdigit(c)) os << '*';
			else os << c;
		}
		return os;
	}
};

// [문제] std::string과 기능은 같은데 숫자를 '*'로 출력하는 클래스 코딩해라 
int main()
{
	StarString s{ "2025년 11월 27일 - 상속은 코드를 재사용하려고 한다." };
	
	std::cout << s << std::endl;

	//save("main.cpp");
}

