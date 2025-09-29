//------------------------------------------------------------------------------------------------------------
// reference - ��ü�� ���� �� �ִ� ����(alias)
// qsort
//------------------------------------------------------------------------------------------------------------
#include <iostream>

#include "save.h"

//c++���� ���� �̸��� �Լ��� ����� �� �ִ�. - �Լ� �����ε�(function overloading) 
//void change(int, int); ������ �߻��Ѵ�
void change(int*, int*);
void change(int&, int&);
void change(int* a, int* b) {
	int temp{ *a };
	*a = *b;
	*b = temp;
}
void change(int& a, int& b) {
	int temp{ a };
	a = b;
	b = temp;
}

int main()
{
	int a{ 1 }, b{ 2 };

	change(a, b);

	//save("main.cpp");
}

