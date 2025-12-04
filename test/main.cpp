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
	//C++에서 다형성을 구현하는 핵심 Keyword - virtual
	//실제 객체마다 vptr이 생성
	virtual void move() {
		std::cout << "움직이는것을 대표" << std::endl;
		// kind별 행동 나누기(동적 다형성)
	}

private:
	int a;
	int kind;
};

class Bird final: public Animal {
public:
	virtual void move() override{	
		std::cout << "새" << std::endl;
	}
private:
	int b1;
	int b2;
};

class Dog : public Animal {
public:
	// 상속에만 사용되는 멤버함수 overriding
	virtual void move() override final{	//오버라이딩은 다형성/상속의 경우에만 사용
		std::cout << "개" << std::endl;
	}
private:
	int d;
};

int main()
{
	Dog dog;
	Bird bird;

	Animal* animals[2];
	animals[0] = &dog;
	animals[1] = &bird;

	// 다형성을 구현
	for (Animal* p : animals)
		p->move();

	//save("main.cpp");
}

