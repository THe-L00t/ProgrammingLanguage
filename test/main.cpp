//------------------------------------------------------------------------------------------------------------
//	�Լ� 
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <random>
#include <print>
#include <algorithm>
#include <map>

#include "save.h"

std::default_random_engine dre{};
std::uniform_int_distribution uid{0,9999'9999};

// int 1000���� ������ �޸𸮸� Ȯ���Ѵ�. 
// �� int ���� ����������(���Ƿ�/���ڴ��) ä���.
// ���� ū ���� ã�� ȭ�鿡 ����϶� (�ǽ�)

int main()
{
	int num[1000];
	for (int& i : num) {
		i = uid(dre);
	}
	int max{std::numeric_limits<int>::min()};
	for (const int& i : num) {
		std::print("{:10}", i);
		if (max < i) max = i;
	}
	std::cout << std::endl << "���� ū ���� " << max << "�Դϴ�." << std::endl;
	

	//save("main.cpp");
}
