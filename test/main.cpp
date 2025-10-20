//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <print>

#include "save.h"

//[����] e class���� �ٿ���� ���������� �����ϸ� ������ 
// "������𸣴�int����.txt" ���Ͽ� �����ȴ�. 
// ���⿡�� ��Ȯ�ϰ� 2000������ int���� ����Ǿ� �ִ�. 
// ������������ �����϶�.
// ���ĵ� int���� ȭ�鿡 ��� ����϶�. �� ���� int�� 20ĭ�� ���߾��.
#define mn 2000'0000
 
int main()
{
	std::ifstream in{ "������𸣴�int����.txt" };
	if (not in) return 404;

	int* nums = new int[mn];
	int temp{};
	size_t idx{};
	while (in >> temp) {
		nums[idx++] = temp;
	}
	qsort(&nums[0], mn,sizeof(int), [](const void* a, const void* b) {
		return *(int*)a - *(int*)b;
		});

	for (size_t i = 0; i < mn; i++)
	{
		std::print("{:20}", nums[i]);
	}

	//save("main.cpp");
}

