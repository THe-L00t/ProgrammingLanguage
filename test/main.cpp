//------------------------------------------------------------------------------------------------------------
// 12. 15 - �⸻ ��� : ������ ����
// ����� ���� �ڷ��� 
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>

#include "save.h"

struct Point2D {
	int x{};
	int y{};

	void show() {
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

