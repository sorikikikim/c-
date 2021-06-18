#include <iostream>

using namespace std;

int main()
{
	//char : 작은 문자열
	int a = 77;
	char b = 'a';
	//null 문자 '\0'
	// "" >> 명시적으로 null문자가 포함, char형은 하나의 문자만 저장해야해서 "" 사용 불가능

	cout << b << endl;

	//bool : 0 혹은 1, 0이 아닌 수는 무조건 1로 출력 
	bool x = 0;
	bool y = 1;
	bool z = 10;

	cout << x << " " << y << " " << z << endl;

	return 0;
}