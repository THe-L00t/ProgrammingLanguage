//------------------------------------------------------------------------------------------------------------
// reference - 객체에 붙일 수 있는 별명(alias)
// qsort
//------------------------------------------------------------------------------------------------------------
#include <iostream>

#include "save.h"


int main()
{
	int a{ 1 };
	int& r{ a };
	
	r = 20250929;

	std::cout << sizeof(r) << std::endl;
	std::cout << std::addressof(r) << std::endl;
	std::cout << typeid(r).name() << std::endl;

	std::cout << std::addressof(a) << std::endl;

	//save("main.cpp");
}

