//------------------------------------------------------------------------------------------------------------
//	�ڷ����� ���� 
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>

#include "save.h"

int gn;

int main()
{	
	int n;
	float f;
	int* np = new int{};

	std::cout <<"�������� n�� �ּ� :   " << std::addressof(n) << std::endl;
	std::cout << "�������� f�� �ּ� :   " << std::addressof(f) << std::endl;
	std::cout << "�������� gn�� �ּ� :  " << std::addressof(gn) << std::endl;
	std::cout << "�����Ҵ纯���� �ּ� : " << np << std::endl;

	save("main.cpp");
}