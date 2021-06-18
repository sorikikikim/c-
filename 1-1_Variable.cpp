#include <iostream>

using namespace std;

int main()
{
	//1. 변수란? 변할 수 있는 수
	//cf) 상수 : 변할 수 없는 수

	/*
	1. 변수의 자료형
	2. 변수의 이름
	3. 변수가 어디에 저장되는가(메모리 영역)?
	*/

	int a; //변수 선언
	/*
	1. 숫자로 시작할 수 없음.
	2. c++에서 사용하고 있는 키워드는 사용할 수 없음.
	3. white space를 사용할 수 없음
	*/
	a = 7; //값 대입
	int b = 3; //초기화 = 변수선언 && 값 대입

	//변수는 사용되기 이전에 정의되어야 함.
	cout << "a = " << a << " b = " << b << endl;
	cout << "a address= " << &a << " b address = " << &b << endl;

	return 0;
}