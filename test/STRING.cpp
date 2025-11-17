#include <iostream>
#include <print>
#include "STRING.h"

using std::cout;
unsigned STRING::sid{};
bool observe{ false };

//CPP에서 클래스를 정의한다.
STRING::STRING()
	:id{++sid}
{
	if(observe) std::println("[{:4}] 디폴트 생성   - 주소:{:014}, 개수:{:<3}, 글주소:{:014}", id, (void*)(STRING*)this, len, (void*)(char*)data);

}

STRING::STRING(const char* c) 
	: len{ strlen(c) }, id{ ++sid }
{
	data = new char[len];
	memcpy(data, c, len);	//초고속 복사 - DMA
	if (observe)std::println("[{:4}] 생성자        - 주소:{:014}, 개수:{:<3}, 글주소:{:014}", id, (void*)(STRING*)this, len, (void*)(char*)data);
}

STRING::~STRING()
{	//이 클래스는 생성시에 자원을 확보한 클래스이다. 
	//소멸되기 직전에 호출되는 함수인 소멸자에서 자원을 해제해 주어야한다. 
	if (observe)std::println("[{:4}] 소멸자        - 주소:{:014}, 개수:{:<3}, 글주소:{:014}", id, (void*)(STRING*)this, len, (void*)(char*)data);
	delete[] data;
	//쓸데 없는 코드 
	//len = 0;
	//data = nullptr;
}

STRING::STRING(const STRING& other)
	:id{ ++sid }
{
	//깊은 복사
	len = other.len;
	data = new char[len];
	memcpy(data, other.data, len);
	if (observe)std::println("[{:4}] 복사생성자    - 주소:{:014}, 개수:{:<3}, 글주소:{:014}", id, (void*)(STRING*)this, len, (void*)(char*)data);
}

STRING& STRING::operator=(const STRING& other)
{
	if (this == &other) return *this;	//자신과 같을경우 바로 반환
	delete[] data;
	len = other.len;
	data = new char[len];
	memcpy(data, other.data, len);
	if (observe)std::println("[{:4}] 복사할당연산자- 주소:{:014}, 개수:{:<3}, 글주소:{:014}", id, (void*)(STRING*)this, len, (void*)(char*)data);
	return *this;
}

STRING STRING::operator+(const STRING& rhs)
{
	STRING temp;
	temp.len = len + rhs.len;
	temp.data = new char[temp.len];
	memcpy(temp.data, data, len);
	memcpy(temp.data + len, rhs.data, rhs.len);
	return temp;
}

size_t STRING::length() const
{
	return len;
}

STRING operator+(const char* lhs, const STRING& rhs)
{
	STRING temp;
	size_t len{ strlen(lhs) };
	temp.len = len + rhs.len;
	temp.data = new char[temp.len];
	memcpy(temp.data, lhs, len);
	memcpy(temp.data + len, rhs.data, rhs.len);
	return temp;
}

std::ostream& operator<<(std::ostream& os, const STRING& s)
{
	for (size_t i = 0; i < s.len; i++)
	{
		os << s.data[i];
	}
	//return os << s.data;
	return os;
}


