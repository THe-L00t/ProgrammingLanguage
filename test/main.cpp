//------------------------------------------------------------------------------------------------------------
// ���� �ڷ����� ���� ���� ���� �ڷᰡ ���� �� �� �� �ִ� �� - ���� 
// ���� �Ҵ�
// ���Ͽ� �ִ� ���� ���� �ڷḦ �о� �ͼ� ���ϴ� ��� ó�� 
//------------------------------------------------------------------------------------------------------------
#include <iostream>

#include "save.h"

char pangram[]{"the quick brown fox jumps over the lazy dog"}; 
int main()
{
	qsort(pangram, (sizeof pangram -1)/sizeof(char), sizeof(char), [](const void* a, const void* b) {
		return *(char*)a - *(char*)b;
		});
	/*for (const char& c : pangram) {
		std::cout << c;
	}*/
	std::cout << pangram << std::endl;
	std::cout << std::endl;
	//save("main.cpp");
}

