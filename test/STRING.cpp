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

}

STRING::STRING(const char* c) 
	: len{ strlen(c) }, id{ ++sid }
{
	data = new char[len];
	memcpy(data, c, len);	//초고속 복사 - DMA
	std::println("[{:4}] 생성자      - 주소:{:014}, 개수:{:<3}, 글주소:{:014}", id, (void*)(STRING*)this, len, (void*)(char*)data);
}

STRING::~STRING()
{	//이 클래스는 생성시에 자원을 확보한 클래스이다. 
	//소멸되기 직전에 호출되는 함수인 소멸자에서 자원을 해제해 주어야한다. 
	std::println("[{:4}] 소멸자      - 주소:{:014}, 개수:{:<3}, 글주소:{:014}", id, (void*)(STRING*)this, len, (void*)(char*)data);
	delete[] data;
}

STRING::STRING(const STRING& other)
	:id{ ++sid }
{
	//깊은 복사
}

STRING& STRING::operator=(const STRING&)
{
	// TODO: 여기에 return 문을 삽입합니다.
}

size_t STRING::length()
{
	return len;
}
