//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>


#include "save.h"

//[����] ���� �ڵ��ϰ� �ִ� ������ main.cpp�̴�. 
// ����ڰ� �Է��� ���ڰ� �� ���� ���Ǿ����� ����϶�
// ��) �Է� - a
// �� - a ������ ���� - 10


int main()
{
	int num['z' - 'a' + 1]{};
	std::ifstream in{ "main.cpp" };
	if (not in) return 404;
	char temp{};
	int cnt{};
	while (in >> temp) {
		if (islower(temp)) {
			++num[temp - 'a'];
		} 
	}
	/*char c{ 'a' };
	for (int& n : num) {
		std::cout << static_cast<char>(c++) << "-" << n << std::endl;
	}*/
	char input{};
	std::cout << "�Է� - ";
	std::cin >> input;
	std::cout << "�� - " << input << "������ ���� - " << num[input - 'a'] << std::endl;

	//save("main.cpp");
}

