#include "STRING.h"
//CPP에서 클래스를 정의한다.
STRING::STRING()
{
}

STRING::STRING(const char* c) : len{ strlen(c) } {
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
