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

// [����] 10������ �������� ���� int�� ������ �� 
// ������������ �����ϰ� 
// ȭ�鿡 1��(80����)�� 10���� ����϶�

void change(int&, int&);
void change(int& a, int& b)
{
	int temp{ a };
	a = b;
	b = temp;
}

int nums[100'000];

int main()
{
	for (int& n : nums) {
		n = uid(dre);
	}
	qsort(nums, 100'000, sizeof(int), [](const void* a, const void* b) {
		int A = *(int*)(a); int B = *(int*)(B);
		return (A > B) ? 1 : 0;
		});
	for (int& n : nums) {
		n = uid(dre);
	}
	
	
	//save("main.cpp");
}

