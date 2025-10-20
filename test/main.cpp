//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>

#include "save.h"

//[����] ���� �ڵ��ϰ� �ִ� ������ "main.cpp"�̴� 
// �ܾ ��� �� ������ ����϶�
// ���⿡ �ܾ ��� �޸𸮿� �����϶�
// ������������ �����϶� 
// ���� ����� ����϶� 


int main()
{
	unsigned cnt{}; //
	{
		std::ifstream in{ "main.cpp" };
		if (not in) return 404;
		std::string temp{};
		while (in >> temp) {
			++cnt;
		}
	}
	std::ifstream in{ "main.cpp" };
	if (not in) return 404;
	// �ܾ���� �ǽð��� �ľǵǾ���
	// ���� ������ �ذ��϶�

	std::string* strings = new std::string[cnt];
	
	for (size_t i = 0; i < cnt; ++i)
	{
		in >> strings[i];
	}
	qsort(strings, cnt, sizeof(std::string), [](const void* a, const void* b) {
		return *(std::string*)a < *(std::string*)b? -1 : 1 ;
		});
	for (size_t i = 0; i < cnt; ++i)
	{
		std::cout << strings[i] << std::endl;
	}

	//save("main.cpp");
}

