//------------------------------------------------------------------------------------------------------------
//	�Լ� 
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>

#include "save.h"

// [����] int �� 2���� �Է¹޾ƶ�. 
// 2���� int�� ���ڷ� �޾� �հ踦 �����ϴ� �Լ� add�� �ۼ��Ͽ�
// �հ踦 ȭ�鿡 ����϶�
// main�� �������� �ǵ���� ����ǵ��� �϶�

int add(int&, int&);	// function declaration, prototype, signature
//	�޸𸮿� ����

int add(int& a, int& b) {	//function definition, �޸𸮸� ��ġ��
	return a + b;
}

int main()
{
	int a{}, b{};
	std::cout << "int 2���� �Է¹޾� �հ踦 ����ϴ� ���α׷�" << std::endl;
	std::cout << "�� 2���� �Է��ϼ��� - ";
	std::cin >> a >> b;

	std::cout << a << " + " << b << " = " << add(a, b) << std::endl;

	std::cout << std::addressof(add) << std::endl;

	//save("main.cpp");
}
