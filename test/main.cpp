//------------------------------------------------------------------------------------------------------------
// reference - 객체에 붙일 수 있는 별명(alias)
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
	// sorting -> 알고리즘 코드를 이용하면 된다. 
	qsort(nums, size, sizeof(int), [](const void* a, const void* b) {
		int A = *(int*)a; int B = *(int*)b;
		if (A < B) return -1;
		else if (A > B) return 1;
		else return 0;
		});
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

