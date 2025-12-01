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
#include <random>

#include "STRING.h"
#include "save.h"

using namespace std;
extern bool observe;

std::default_random_engine dre;
std::uniform_int_distribution uid{ 1,10'0000 };
std::uniform_int_distribution<int> nuid{ 'a', 'z'};

class Animal {
public:
	Animal() {
		int temp = uid(dre) % 10;
		for (size_t i = 0; i < temp; ++i)
		{
			name += static_cast<char>(nuid(dre));
		}
	};
	Animal(const char* name) : name{ name } {
		std::cout << "Animal 생성" << std::endl;
	}
	
	virtual void move() {
	}
protected:	// 상속을 위한 access modifier
	std::string name;

};

class Dog : public Animal {
public:
	Dog() {
		spd = uid(dre);
	};
	Dog(const char* s) : Animal{s} {
		spd = uid(dre);
	}
	
	void move() override {
		std::cout <<"나는 " << name<<"야. " << "내 속도는 " << spd << std::endl;
	}

	int GetSpd() const {
		return spd;
	}
private:
	int spd{};
};

int main()
{
	//[문제] 문제없이 실행되도록 필요한 코드를 추가하세요
	Dog dogs[1000];		//speed값을 [1,10'000] 랜덤값으로 설정한다. 

	// speed 기준 오름차순으로 정렬한다. 
	qsort(dogs, 1000, sizeof(Dog), [](const void* a, const void* b) {
		return ((Dog*)a)->GetSpd() - ((Dog*)b)->GetSpd();
		});
	// 가장 빠른 dogs의 정보를 화면에 출력한다. 
	dogs[999].move();
	//std::end(dogs)->move();	프로그램 사망함 더 알아보기
	
	//save("main.cpp");
}

