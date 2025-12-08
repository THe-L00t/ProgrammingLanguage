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

//		Game
//		/  \ 
//	Human  Monster
//

class Game {
public:
	Game() :id{ ++gid } {}
	virtual void render() const = 0;
protected:
	int id;
	static int gid;
};

int Game::gid{ 0 };

class Human :public Game {
public:
	virtual void render() const override {
		std::cout << "Human - render" << std::endl;
	}
};

class Monster :public Game {
public:

	virtual void render() const override {
		std::cout << "Monster - render" << std::endl;
	}
};


int main()
{


	//save("main.cpp");
}

