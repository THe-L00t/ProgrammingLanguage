//------------------------------------------------------------------------------------------------------------
// 12. 15 - �⸻ ��� : ������ ����
// ����� ���� �ڷ��� 
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>

#include "save.h"

struct Point2D { //alignment = 8byte
	int x{};
	int y{};

	void show() {	//show(this) : hidden argument,  this : ��� ����Լ��� ù��° ����
		std::cout << "(" << x << ", " << y << ")" << std::endl;
	}
};

int main()
{
	Point2D points[100];

	for (Point2D p : points) {
		p.show();
	}
	//save("main.cpp");
}

