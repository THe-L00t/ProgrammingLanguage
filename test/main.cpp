//------------------------------------------------------------------------------------------------------------
// reference
// qsort
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <random>
#include <print>

#include "save.h"

std::default_random_engine dre{};
std::uniform_int_distribution uid{ 0,99'9999 };

// [문제] 10만개의 랜덤값을 갖는 int를 생성한 후 
// 오름차순으로 정렬하고 
// 화면에 1줄(80글자)에 10개씩 출력하라

void change(int&, int&);
void change(int& a, int& b)
{
	int temp{ a };
	a = b;
	b = temp;
}

const int size{ 100'000 };
int nums[size];

int main()
{
	for (int& n : nums) {
		n = uid(dre);
	}
	for (size_t i = 0; i < size-1; i++)
	{
		for (size_t j = 0; j < size-1 - i; j++)
		{
			if (nums[j] > nums[j + 1]) change(nums[j], nums[j + 1]);
		}
	}
	int cnt{};
	for (int& n : nums) {
		std::print("{:>8}", n);
		cnt++;
		if (cnt % 10 == 0) {
			std::cout << std::endl;
		}
	}
	
	
	//save("main.cpp");
}

