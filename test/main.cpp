//------------------------------------------------------------------------------------------------------------
// change
// �� �� ������ ���� ���� �ٲٴ� �Լ��� �����. 
// pointer, reference, ���� ����
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

	change(&a[0], &a[1]);

	for (int num : a) {
		std::cout << num << ' ';
	}
	std::cout << std::endl;
	
	//save("main.cpp");
}

