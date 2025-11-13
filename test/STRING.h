#pragma once
#include <iostream>
// 헤더에는 클래스를 선언한다
// 이 클래스는 자원을 확보하고 관리하는 클래스이다.
// 이 클래스에 special 함수들을 작성해야만 하는 이유를 공부한다. 
/*
	class 의 special 함수 
	1. STRING()								: default constructor
	2. ~STRING()							: destructor 

	3. STRING( const STRING& )				: copy constructor
	4. STRING& operator=( const STRING& )	: copy assignment operator

	5. STRING( STRING&& )					: move constructor
	6. STRING& operator=( STRING&& )		: move assignment operator
*/

class STRING {
public:
	//special 
	STRING();
	STRING(const char*);
	
	~STRING();

	STRING(const STRING&);
	STRING& operator=(const STRING&);
	//operator overloading
	friend std::ostream& operator<<(std::ostream& os, const STRING& s);

	friend STRING operator+(const STRING& a, const STRING& b);
	//interface : 멤버변수를 바깥으로 노출
	size_t length() const;	//정렬에 필요한 getter
	
	
private:
	STRING(size_t, char*);

	size_t len{};
	char* data{ nullptr };
	unsigned id;
	static unsigned sid;	//static 
};



