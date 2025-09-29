//------------------------------------------------------------------------------------------------------------
// reference - 객체에 붙일 수 있는 별명(alias)
// qsort
//------------------------------------------------------------------------------------------------------------
#include <iostream>

#include "save.h"

//c++언어는 같은 이름의 함수를 사용할 수 있다. - 함수 오버로딩(function overloading) 
//void change(int, int); 오류가 발생한다
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

