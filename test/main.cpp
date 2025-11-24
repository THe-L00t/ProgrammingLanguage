//------------------------------------------------------------------------------------------------------------
// 12. 15 - 기말 고사 : 다형성 구현 - 강의때 사용한 코드 이용
// special 함수
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
#include <memory>
#include <algorithm>

#include "STRING.h"
#include "save.h"

using namespace std;
extern bool observe;

int main()
{
	
	STRING s[]{ "333","1","55555","22","4444" };
	observe = true;
	int cnt{};
	std::sort(begin(s), end(s), [&cnt](const STRING& a, const STRING& b) {
		++cnt;
		return a.length() < b.length();
		});
	observe = false;
	for (const STRING& s : s)
		std::cout << s << std::endl;

	
	//save("main.cpp");
}

