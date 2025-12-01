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

class Animal {
public:
	Animal() = default;
	Animal(const char* name) : name{ name } {
		std::cout << "Animal 생성" << std::endl;
	}
	~Animal() {
		std::cout << "Animal 소멸" << std::endl;
	}
	virtual void move() {
		cout << "난" << name << "야,";
	}
private:
	std::string name;

};

class Dog : public Animal {
public:
	Dog() = default;
	Dog(const char* s) : Animal{s} {
		std::cout << "Dog 생성" << std::endl;
	}
	~Dog() {
		std::cout << "Dog 소멸" << std::endl;
	}
	void move() override {
		Animal::move();
		std::cout << "내 속도는 " << spd << std::endl;
	}
private:
	int spd{};
};

int main()
{
	// [문제] 생성자와 소멸자가 어떤 순서로 호출되는지 관찰하라
	Dog dog{"코코"};
	dog.move();
	//save("main.cpp");
}

