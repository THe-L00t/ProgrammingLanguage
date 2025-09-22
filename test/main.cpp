//------------------------------------------------------------------------------------------------------------
// 변수와 메모리 
// STACK의 한계  / 1MB
//------------------------------------------------------------------------------------------------------------
#include <iostream>

#include "save.h"

// [문제] 지역변수란 무엇인가?	-> 전역변수가 아닌 모든 변수
// 어디에 위치하나?			-> STACK segment
// 얼마만큼 쓸 수 있나?		->1 Megabyte
int cnt{1};

void func();

void func() {
	int n[10'000]{};	//40kb *25 ==> 1mb
	std::cout << cnt++ << "번 불렸습니다" <<n[9'999]<< std::endl;

	// recursive fuction call 
	func();
	std::cout << n[0] << std::endl;
}

int main()
{
	// [문제] 지역변수는 STACK에 위치하는데 프로그램 실행 중에 
	// 계속 지역변수를 요청하면 언젠가는 더 이상 STACK을 사용할 수 없게 된다.
	// --> STACK overflow
	// 그렇게 해보세요
	
	/*int num[250*1024]{};
	for (auto& n : num) {
		std::cout << n << std::endl;
	}*/
	func();
	
	//save("main.cpp");
}
