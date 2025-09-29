//------------------------------------------------------------------------------------------------------------
// reference - 객체에 붙일 수 있는 별명(alias)
// qsort
//------------------------------------------------------------------------------------------------------------
#include <iostream>

#include "save.h"

void change(int&, int&);
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

