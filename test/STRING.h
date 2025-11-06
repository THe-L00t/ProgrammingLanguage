#pragma once
#include <iostream>

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



