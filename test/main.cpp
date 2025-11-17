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

class INT {
public:
	INT(int i) :data{ i } {

	}

	INT& operator++() {
		++data;
		return *this;
	}
	//post-increment
	const INT& operator++(int i) {	// 여기의 int는 place-holer
		INT temp{ *this };
		++(*this);
		return std::move(temp);
	}

	friend std::ostream& operator<<(std::ostream& os, const INT& i) {
		return os << i.data;
	}
private:
	int data{};
};


int main()
{
	STRING s{ "the quick brown fox jumps over the lazy dog" };
	qsort();

	//save("main.cpp");
}

