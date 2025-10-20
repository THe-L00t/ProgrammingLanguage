//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>

#include "save.h"

//[����] e class���� �ٿ���� "������𸣴�int����.txt" ���Ͽ���
// int���� ����Ǿ� �ִ�. 
// 1. ��� �� ������ ����϶�
// 2. ���� ū ���� ã�� ����϶�
 
int main()
{
	std::ifstream in{ "������𸣴�int����.txt" };

	int max = std::numeric_limits<int>::min();
	int temp{}, cnt{}, offset{};
	while (in >> temp) {
		++cnt;
		if (max < temp) {
			max = temp;
			offset = cnt;
		}
	}
	std::cout << "1. ��� " << cnt << "���Դϴ�. " << std::endl;
	std::cout << "2. ���� ū ���� " << max <<"���� "<< offset << "��° ���Դϴ�. " << std::endl;

	//save("main.cpp");
}

