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

std::default_random_engine dre{20251215};
std::uniform_int_distribution uid{ 1, 20251215 };

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
	Human() = default;
	Human(const std::string& n) : name{ n } {}
	virtual void render() const override {
		std::cout << id << " - Human : " << name << std::endl;
	}
private:
	std::string name{ "이름없음" };
};

class Monster :public Game {
public:

	virtual void render() const override {
		std::cout << id << " - Monster : " << num << std::endl;
	}
private:
	int num{uid(dre)};

};


int main()
{
	Human h;
	Monster m;

	Game* g[2]{ &h,&m };
	// 내가 관리하는 Game 객체들의 render를 호출
	// 그런데 Human일때만 render 하고 싶다. (up casting은 언제나 문제 없다 / down casting을 위한 dynamic_cast )
	for (Game* obj : g) {
		if(dynamic_cast<Human*>(obj))
			obj->render();
	}


	// 내 게임에서 움직일 Monster들, Human객체들을 다형성을 이용하여 관리한다. 

	//전체 몇 객체를 관리할지 프로그램 실행 시 결정할 수 있도록 사용자가 입력한 숫자를 사용한다. 
	// 동전을 던져 앞면이면 Human, 뒷면이면 Monster객체를 생성한다. 

	// 도형 문제들과 유사한 문제들 포함
	// num개 객체에 render명령으로 다형성이 구현됨을 확인한다. 
	// Human 객체만 name오름차순으로 정렬하여 출력하고 싶다. 방법이 없겠니?
	// 내 게임세상에서 Monster들의 num값을 -100하고 싶다. 
	// 내 게임 세상에서 Monster들을 모두 제거 하고 싶다. 

	//메모리 그림그려라

	Game** objList;

	//save("main.cpp");
}

