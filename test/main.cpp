//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <print>

#include "save.h"

// [����] "numberFile.txt"�� �ִ�. 
// ���⿡�� �� ������ �𸣴� int���� ��ϵǾ� �ִ�. 
// �о ȭ�鿡 ����϶�.


int main()
{
	std::ifstream in{ "numberFile.txt" };
	// ������ �������� ��û�� �Ѵ�. �����ߴ��� ���θ� Ȯ���ؾ� �Ѵ�
	if (not in) {
		return 20251026;
	}


	int num, cnt{};
	while (in >> num) {	// ������ �� EOF
		std::cout << num << std::endl;
		cnt++;
	}
	std::cout << cnt << "�� �Դϴ�. " << std::endl;

	//save("main.cpp");
}

