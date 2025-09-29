//------------------------------------------------------------------------------------------------------------
// reference - 객체에 붙일 수 있는 별명(alias)
// qsort
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <random>
#include <print>

#include "save.h"

std::random_device rd{};
std::default_random_engine dre{rd()};
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
	// 이 함수를 qsort가 호출해서 2개의 int를 바꿀지 말지 물어본다. 
	// cosnt -> 메모리를 읽기만 하겠다는 약속(Read Only Memory)
	// void* -> qsort함수 입장에서 이 메모리가 원래는 어떤 자료형인지 나는 관심이 없다. 
	//			그런데 오름차순 너는 이 메모리의 원래 형식을 잘 알고 있겠지?
	//			그러니 원하는 형식으로 네 마음대로 알아서 변환해서 써
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

