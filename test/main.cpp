//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>

#include "save.h"

//[문제] 지금 코딩하고 있는 파일은 "main.cpp"이다 
// 단어가 모두 몇 개인지 출력하라
// 여기에 단어를 모두 메모리에 저장하라
// 오름차순으로 정렬하라 
// 정렬 결과를 출력하라 


int main()
{
	unsigned cnt{}; //
	{
		std::ifstream in{ "main.cpp" };
		if (not in) return 404;
		std::string temp{};
		while (in >> temp) {
			++cnt;
		}
	}
	std::ifstream in{ "main.cpp" };
	if (not in) return 404;
	// 단어개수가 실시간에 파악되었다
	// 다음 문제를 해결하라

	std::string* strings = new std::string[cnt];
	
	for (size_t i = 0; i < cnt; ++i)
	{
		in >> strings[i];
	}
	qsort(strings, cnt, sizeof(std::string), [](const void* a, const void* b) {
		return *(std::string*)a < *(std::string*)b? -1 : 1 ;
		});
	for (size_t i = 0; i < cnt; ++i)
	{
		std::cout << strings[i] << std::endl;
	}

	//save("main.cpp");
}

//시험 해설
/*
	1. 메인 키워드 : 고급 입출력
	내 감점 이유 : 예외를 던지는 것이 아닌 failbit를 세팅한다. 예외를 던진다고 표현하여 감점.
	고급 입출력은 형식을 변환한다. int 변수에 값을 받기때문에 2025라는 숫자만 읽음. 
	그 뒤 버퍼에 남은 '년'을 읽으려 하나 숫자가 아님. 이때 오류로 인해 failbit 세트한다. 이때 숫자 0이 들어감
	나머지는 clear나 ignore를 하지 않았기 때문에 이후 고급 입출력 동작 X

	2. 1로 예상하는 것이 일반적
	그러나 출력은 4
	이 과정에서 예측해보는 해설이 정답

	3. 정보가 모자라기때문에 알 수 없다 
	change(string, string)
	change(string&, string&)

	4. 핵심 키워드 : free store에 메모리를 계속 요청, 고갈되며 프로그램 사망
	힙(HEAP) 이라는 단어 쓰지 말 것 






*/