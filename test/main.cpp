//------------------------------------------------------------------------------------------------------------
//	
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <thread>
#include <chrono>

#include "save.h"

// [����] ȭ�鿡 ���ڸ� 10�� ����غ���

int main()
{	
	for (size_t i = 0; i < 10; i++) {
		std::cout << "hello, world!" << std::endl;
		using namespace std::chrono_literals;
		std::this_thread::sleep_for(300ms);
	}

	save("main.cpp");

}