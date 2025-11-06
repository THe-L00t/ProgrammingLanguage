#include "STRING.h"

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
