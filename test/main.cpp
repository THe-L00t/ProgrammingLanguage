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
	virtual void move() {
		cout << "모든 동물은 움직인다." << std::endl;
	}
protected:
	std::string name;

};

class Dog : public Animal {
public:
	Dog() = default;
	Dog(const char* s) {
		name = s;
	}
	void move() override {
		std::cout << "Dog : " << name << std::endl;
	}
private:
	int spd{};
};

int main()
{
	Dog dog{"코코"};
	dog.move();
	//save("main.cpp");
}

