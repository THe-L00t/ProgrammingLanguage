//------------------------------------------------------------------------------------------------------------
// ���� �ڷ����� ���� ���� ���� �ڷᰡ ���� �� �� �� �ִ� �� - ���� 
// ���� �Ҵ�
// ���Ͽ� �ִ� ���� ���� �ڷḦ �о� �ͼ� ���ϴ� ��� ó�� 
//------------------------------------------------------------------------------------------------------------
#include <iostream>

#include "save.h"

char pangram[]{"the quick brown fox jumps over the lazy dog"}; // ���ڿ� ���� ASCII ����

int main()
{
	qsort(pangram, sizeof(pangram), sizeof(char), [](const void* a, const void* b) {
		char A = *(char*)a; char B = *(char*)b;
		if (A not_eq B) return (A < B) ? -1 : 1;
		else return 0;
		});
	for (const char& c : pangram) {
		std::cout << c;
	}
	std::cout << std::endl;
	//save("main.cpp");
}

