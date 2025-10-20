//------------------------------------------------------------------------------------------------------------
// FILE I/O
//------------------------------------------------------------------------------------------------------------
#INCLUDE <IOSTREAM>
#INCLUDE <FSTREAM>


#INCLUDE "SAVE.H"

//[문제] 지금 코딩하고 있는 파일은 "MAIN.CPP"이다 
// "MAIN.CPP의 소문자를 모두 대문자로 바꿔 저장한 "MAIN.CPP"를 만들어라 


INT MAIN()
{
	STD::IFSTREAM IN{ "MAIN.CPP" };
	STD::OFSTREAM OUT{ "대문자MAIN.CPP" };
	IF (NOT IN) RETURN 404;
	CHAR TEMP{};
	INT CNT{};
	IN >> STD::NOSKIPWS;
	WHILE (IN >> TEMP) {
		OUT << STATIC_CAST<CHAR>(TOUPPER(TEMP));
	}
	

	//SAVE("MAIN.CPP");
}

