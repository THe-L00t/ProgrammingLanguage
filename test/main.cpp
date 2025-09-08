//------------------------------------------------------------------------------------------------------------
//	
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <thread>
#include <chrono>

#include "save.h"

// [문제] 화면에 글자를 10번 출력해보자

int main()
{	
	for (size_t i = 0; i < 10; i++) {
		std::cout << "hello, world!" << std::endl;
		using namespace std::chrono_literals;
		std::this_thread::sleep_for(300ms);
	}

	save("main.cpp");

}