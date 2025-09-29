//------------------------------------------------------------------------------------------------------------
// reference - ��ü�� ���� �� �ִ� ����(alias)
// qsort
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <random>
#include <print>

#include "save.h"

std::random_device rd{};
std::default_random_engine dre{rd()};
std::uniform_int_distribution uid{ 0,99'9999 };

// [����] 10������ �������� ���� int�� ������ �� 
// ������������ �����ϰ� 
// ȭ�鿡 1��(80����)�� 10���� ����϶�

void change(int&, int&);
void change(int& a, int& b)
{
	int temp{ a };
	a = b;
	b = temp;
}

const int size{ 100'000 };
int nums[size];

int main()
{
	for (int& n : nums) {
		n = uid(dre);
	}
	// �� �Լ��� qsort�� ȣ���ؼ� 2���� int�� �ٲ��� ���� �����. 
	// cosnt -> �޸𸮸� �б⸸ �ϰڴٴ� ���(Read Only Memory)
	// void* -> qsort�Լ� ���忡�� �� �޸𸮰� ������ � �ڷ������� ���� ������ ����. 
	//			�׷��� �������� �ʴ� �� �޸��� ���� ������ �� �˰� �ְ���?
	//			�׷��� ���ϴ� �������� �� ������� �˾Ƽ� ��ȯ�ؼ� ��
	qsort(nums, size, sizeof(int), [](const void* a, const void* b) {
		int A = *(int*)a; int B = *(int*)b;
		if (A < B) return -1;
		else if (A > B) return 1;
		else return 0;
		});
	int cnt{};
	for (int& n : nums) {
		std::print("{:>8}", n);
		cnt++;
		if (cnt % 10 == 0) {
			std::cout << std::endl;
		}
	}


	//save("main.cpp");
}

