#pragma once
#include <iostream>
// 헤더에는 클래스를 선언한다
class STRING {
public:
	STRING();
	STRING(const char* c);
	~STRING();

	size_t length();

	friend std::ostream& operator<<(std::ostream& os, const STRING& s) {
		return os << s.data;
	}
private:
	size_t len{};
	char* data{ nullptr };
};



