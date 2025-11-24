//------------------------------------------------------------------------------------------------------------
// 12. 15 - 기말 고사 : 다형성 구현 - 강의때 사용한 코드 이용
// 클래스간의 관계 - 상속(inheritance), 템플릿
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <print>
#include <fstream>

#include "STRING.h"
#include "save.h"

using namespace std;
extern bool observe;

std::default_random_engine dre{};
std::uniform_int_distribution<int> uid{ 'a','z' };
std::uniform_int_distribution sizeuid{ 10,30 };
std::uniform_int_distribution rid{ 1,100'0000 };

// [문제] main()이 문제없이 실행되도록 필요한 코딩을 추가하라
class Dog {
public:
	Dog() {
		int nSize = sizeuid(dre);
		char* temp = new char[nSize+1];
		for (size_t i = 0; i < nSize; ++i)
		{
			temp[i] = uid(dre);
		}
		temp[nSize] = '\0';
		name = temp;
		delete[] temp;
		id = rid(dre);
	}
	void operator()() const{
		std::print("[{:8}] - ", id);
		std::cout << name << std::endl;
	}

	size_t nameSize() const {
		return name.length();
	}
	friend std::ostream& operator<< (std::ostream & os, const Dog & d) {
		return os << d.id << " " << d.name ;
	}
private:
	STRING name;
	int id;
};

int main()
{
	// dogs를 파일에 기록한다
	std::ofstream out{ "개천마리.txt" };
	
	Dog dogs[1000];	


	for (const Dog& dog : dogs) {
		out << dog << std::endl;		
	}
	
	//save("main.cpp");
}

