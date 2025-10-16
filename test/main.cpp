//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <print>

#include "save.h"

//[문제] e class에서 다운받은 실행파일을 실행하면 폴더에 
// "몇개인지모르는int값들.txt" 파일에 생성된다. 
// 여기에는 정확하게 2000만개의 int값이 저장되어 있다. 
// 오름차순으로 정렬하라.
// 정렬된 int값을 화면에 모두 출력하라. 한 개의 int를 20칸에 맞추어라.
#define mn 2000'0000
 
int main()
{
	std::ifstream in{ "몇개인지모르는int값들.txt" };
	if (not in) return 404;

	int* nums = new int[mn];
	int temp{};
	size_t idx{};
	while (in >> temp) {
		nums[idx++] = temp;
	}
	qsort(&nums[0], mn,sizeof(int), [](const void* a, const void* b) {
		return *(int*)a - *(int*)b;
		});

	for (size_t i = 0; i < mn; i++)
	{
		std::print("{:20}", nums[i]);
	}

	//save("main.cpp");
}

