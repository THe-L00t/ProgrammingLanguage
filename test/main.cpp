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
std::uniform_int_distribution uid{ 0,1 };


class Animal {
public:
	virtual ~Animal() {}
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


// [실습] 동물농장 주인이다. 모두 10마리의 Dog와 Bird를 사육한다. 
// 10 마리를 수용하는 우리가 있다. 
// 주사위를 던져서 짝수면 Dog, 홀수면 Bird를 우리에 넣는다.
// 모든 동물들에게 move하도록 햇다. 
// 다형성이 잘 구현되는지 확인하자 

void dieAnimal(Animal** a, int idx) {
	delete (a[idx-1]);
	std::cout << a[idx-1] << std::endl;
	memcpy(a + idx - 1, a + idx, sizeof(Animal*)*(10-idx));
}


int main()
{
	Animal* animals[10];
	for (size_t i = 0; i < 10; i++)
	{
		int temp = uid(dre);
		animals[i] = (temp == 1) ? (Animal*)new Dog() : (Animal*)new Bird();
	}
	int i{};
	for (Animal* p : animals) {
		std::cout << ++i << " - ";
		p->move();
	}
	dieAnimal(animals, 5);
	i=0;
	for (Animal* p : animals) {
		std::cout << ++i << " - " << p << " ";
		p->move();

	}
	
	// 
		
	//save("main.cpp");
}

