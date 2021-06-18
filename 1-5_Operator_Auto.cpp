#include <iostream>
using namespace std;

int main()
{
	/*
	+ : 두 개의 피연산자의 합
	- : 첫 번째 피연산자 - 두 번째 피연산자
	* : 두 개의 피연산자의 곱
	/ : 첫 번째 피연산자에서 두 번째 피연산자를 나누기 -> 두개의 피연산자가 모두 정수이면 결과값은 '몫'
	% : 첫 번째 피연산자에서 두 번째 피연산자를 나누어 나머지 구하기 -> 부동 소수점(실수)에서는 사용할 수 없음
	*/

	int a = 10;
	int b = 3;

	int c = a + b;
	int d = a - b;
	int e = a * b;
	int f = a / b;
	int g = a % b;

	cout << "c : " << c << endl;
	cout << "d : " << d << endl;
	cout << "e : " << e << endl;
	cout << "f : " << f << endl;
	cout << "g : " << g << endl;

	//auto
	auto x = 0.00; //float
	float y = 0; //float
	auto z = 0; //int

	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
	cout << "z : " << z << endl;
	return 0;
}