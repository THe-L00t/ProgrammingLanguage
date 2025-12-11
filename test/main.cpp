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
	// [시험문제 예시] - 6~7 문제, 70분

	/* 내 게임에서 움직일 Monster들, Human객체들을 다형성을 이용하여 관리한다.
	수업시간에 코딩한 class를 사용한다.
	다른 Derived class를 만들 수 있어야 한다. 

	전체 전체 관리할 Game을 상속한 클래스 객체들의 수 num은 시험시간에 제공한다. (파일로 제공) 
	객체 생성 규칙도 시험시간에 알려준다. (Human 이름 등 필요한 값들)

	어떤 방식으로 전체 객체를 관리하였나 써라. 

	관리하기 위해 만든 메모리와 num개의 관리하는 Game 객체 중에서 첫번째 객체를 정확하게 그림으로 그려라.
	(메모리 위치와 이름을 표기하라)

	*0점 방지*
	num개 객체에 render명령으로 다형성이 구현됨을 확인한다. 
	
	*어려움*
	Human 객체만 name오름차순으로 정렬하여 출력하고 싶다. 방법이 없겠니?
	
	
	내 게임세상에서 Monster들의 num값을 -100하고 싶다. 
	- 추가 코딩한 내용을 모두 써라 

	내 게임 세상에서 Monster들을 모두 제거 하고 싶다. 
	몇 개 객체가 남게되나?
	코딩한 내용을 답지에 써라 
	
	(확장)
	num 까지 관리하였는데 더 큰 수를 관리하고 싶다. 
	
	메모리 그림그려라*/

	// 끝내기 전에 메모리를 정리하라. 
	// 어떻게 코딩했나?

	Game** objList;

	//save("main.cpp");
}

