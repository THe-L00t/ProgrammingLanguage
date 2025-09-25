//------------------------------------------------------------------------------------------------------------
// change
// 두 개 변수의 값을 서로 바꾸는 함수를 만든다. 
// pointer, reference, 원격 조종
//------------------------------------------------------------------------------------------------------------
#include <iostream>

#include "save.h"

void change(int*, int*);

void change(int* a, int* b) {
	int temp{ *a };
	*a = *b;
	*b = temp;
}

int main()
{
	int a[]{ 9,3,7,1,2,6,4,5,0,8 };

	// [문제] 가장 큰 숫자가 제일 오른쪽으로 옮겨라
	for (size_t i = 0; i < 9; i++)
	{
		if (a[i] > a[i + 1]) change(&a[i], &a[i + 1]);
	}

	for (int num : a) {
		std::cout << num << ' ';
	}
	std::cout << std::endl;
	
	//save("main.cpp");
}

