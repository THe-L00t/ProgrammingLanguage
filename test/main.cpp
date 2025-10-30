//------------------------------------------------------------------------------------------------------------
// 12. 15 - 기말 고사 : 다형성 구현
// 사용자 정의 자료형 
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

