#include <iostream>
#include <print>
#include "STRING.h"

using std::cout;
unsigned STRING::sid{};

//CPP에서 클래스를 정의한다.
STRING::STRING()
	:id{++sid}
{
	std::println("[{:4}] 디폴트 생성 - 주소:{:014}, 개수:{:<3}, 글주소:{:014}", id, (void*)(STRING*)this, len, (void*)(char*)data);
	// print에 주소 사용 시 주의
}

STRING::STRING(const char* c) 
	: len{ strlen(c) }, id{ ++sid }
{
	data = new char[len];
	memcpy(data, c, len);	//초고속 복사 - DMA
	std::cout << "생성자" << std::endl;
}

STRING::~STRING()
{
	delete[] data;
}

size_t STRING::length()
{
	return len;
}
