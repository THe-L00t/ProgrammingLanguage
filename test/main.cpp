//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>

#include "save.h"

//[����] ���� �ڵ��ϰ� �ִ� ������ "main.cpp"�̴� 
// �� ���Ͽ��� ��� �� �ܾ �ִ��� ����϶� 
//(�ܾ�) �������� �и��� ���� ������ ���Ѵ�. 


int main()
{
	std::ifstream in{ "main.cpp" };
	std::ofstream out{ "�빮��MAIN.CPP" };
	if (not in) return 404;
	std::string temp{};
	int cnt{};
	while (in >> temp) {
		++cnt;
	}
	std::cout << cnt << "�� �Դϴ�.";

	//save("main.cpp");
}

