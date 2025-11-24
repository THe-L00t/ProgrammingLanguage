//------------------------------------------------------------------------------------------------------------
// 12. 15 - 기말 고사 : 다형성 구현 - 강의때 사용한 코드 이용
// 클래스간의 관계 - 상속(inheritance), 템플릿
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <fstream>

#include "STRING.h"
#include "save.h"

using namespace std;
extern bool observe;

// [문제] 다운받은 파일 "개천마리.txt"에는 class Dog 객체 1000개가 저장되어 있다. 
// 파일을 본것과 같이 id
// 파일을 모두 읽어 Dog객체에 저장하라. 
// 읽은 Dog객체를 id기준 오름차순 정렬하라. 
// 화면에 id와 name를 출력하라. 
class Dog {
public:
	friend std::istream& operator>>(std::istream& is, Dog& rhs) {
		return is >> rhs.id >> rhs.name;
	}
private:
	int id{};
	std::string name{};
};

int main()
{
	Dog dogs[1000];

	
	//save("main.cpp");
}

