//------------------------------------------------------------------------------------------------------------
// 12. 15 - 기말 고사 : 다형성 구현
// 사용자 정의 자료형 
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

#include "save.h"

using namespace std;

class Dog {	//맴버 변수를 private하게 -> class
public:
	Dog() {					//스페셜 함수 - default constructor
		name = "댕댕이";
		std::cout << "디폴트 생성자" << endl;	 //defalut ctor
		PlaySound(L"Dog-Bark.wav", 0, SND_FILENAME | SND_ASYNC);
	}

	Dog(std::string n) :name{ n } {}

	~Dog() {	//destructor
		std::cout << "소멸자" << std::endl;
	}

	void bark() {
		std::cout << name << std::endl;
	}

//캡슐화(capsulization), 추상화(abstraction), 정보 은닉(infomation hiding)
private:
	std::string name{};
};

int main()
{


	//save("main.cpp");
}

