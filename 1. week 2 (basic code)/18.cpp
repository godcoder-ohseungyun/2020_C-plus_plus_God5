#include<iostream>
#include<cmath>/*sqrt와 pow 를 이용하기 위해 인클루드*/
using namespace std;

int main() {
	double a, b, c;
	double result1, result2;/* 이차방정식 근은 2개임으로 각 각 선언*/
	cout << "ax^2+bx+c형식의 방정식 a b c를 입력하세요." << endl;
	cin >> a >> b >> c;
	result1 = (-b + (sqrt(pow(b, 2) - (a * c * 4)))) / 2 * a;/*근의 공식 적용*/
	result2 = (-b - (sqrt(pow(b, 2) - (a * c * 4)))) / 2 * a;
	cout << a << "x^2" << " " << b << "x +" << c << "의 근은" << "" << result1 << " " << result2 << "이다" << endl;
	system("pause");
	return 0;

}