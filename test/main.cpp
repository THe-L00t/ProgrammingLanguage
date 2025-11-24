//------------------------------------------------------------------------------------------------------------
// 12. 15 - 기말 고사 : 다형성 구현 - 강의때 사용한 코드 이용
// 클래스간의 관계 - 상속(inheritance), 템플릿
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <random>

#include "STRING.h"
#include "save.h"

using namespace std;
extern bool observe;

std::default_random_engine dre{};
std::uniform_int_distribution<int> uid{ 'a','z' };
std::uniform_int_distribution sizeuid{ 10,30 };

// [문제] main()이 문제없이 실행되도록 필요한 코딩을 추가하라
class Dog {
public:
	Dog() {
		int nSize = sizeuid(dre);
		char* temp = new char[nSize+1];
		for (size_t i = 0; i < nSize; ++i)
		{
			temp[i] = uid(dre);
		}
		temp[nSize] = '\0';
		name = temp;
		delete[] temp;
	}
	size_t nameSize() const {
		return name.length();
	}
	friend std::ostream& operator<< (std::ostream & os, const Dog & d) {
		return os << d.name << " - " << d.name.length();
	}
private:
	STRING name;
};

int main()
{
	// 연산자 오버로딩 중에서 강의하지 않은 연산자가 있다. () - 함수 호출 연산자
	
	Dog dogs[10];	// Dog는 생성시 [10,30] 임의의 길이를 갖는 STRING name멤버가 있다. 
				// name은 생성시 랜덤 소문자로 초기화된다. 

	// [문제] Dog를 name 길이 기준 오름차순으로 정렬하라 
	qsort(dogs, 10, sizeof(Dog), [](const void* a, const void* b) {
		return (int)((*(Dog*)a).nameSize() - (*(Dog*)b).nameSize());
		});
	 

	for (const Dog& dog : dogs) {
		std::cout << dog << std::endl;
	}

	
	//save("main.cpp");
}

