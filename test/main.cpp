//------------------------------------------------------------------------------------------------------------
// 12. 15 - 기말 고사 : 다형성 구현
// 사용자 정의 자료형 
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>

#include "save.h"

class Dog {	//맴버 변수를 private하게 -> class
public:
	Dog() {	//생성자 
		name = "댕댕이";
	}
	Dog(std::string& n) :name{ n } {}
	void show() {
		std::cout << name << std::endl;
	}
private:
	std::string name{};
};

int main()
{
	Dog dogs[10];	

	for (Dog& d : dogs) {
		d.show();
	}

	//save("main.cpp");
}

