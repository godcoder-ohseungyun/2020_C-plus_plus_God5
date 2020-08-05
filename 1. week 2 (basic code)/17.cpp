#include<iostream>
using namespace std;

int main() {
	double a, b;
back:/*연속으로 알아볼수있도록 하기위해 원점을 입력하면 종료되도록 goto,back을 추가*/
	cout << "x,y좌표를 입력하시오 (원점을 입력하면 종료)" << endl;

	cin >> a >> b;/*x,y좌표를 입력 받는다*/

	if ((a > 0) && (b > 0))/*1사분면 조건 논리연산자 &&를 이용 참이될 경우를 판단*/
		cout << "1사분면!" << endl;

	if ((a < 0) && (b > 0))/*2사분면 조건*/
		cout << "2사분면!" << endl;

	if ((a > 0) && (b < 0))/*4사분면 조건*/
		cout << "4사분면!" << endl;

	if ((a < 0) && (b < 0))/*3사분면 조건*/
		cout << "3사분면!" << endl;

	if ((a == 0) && (b == 0))/*종료 조건*/
	{
		cout << "원점입니다" << endl;
		system("pause");
		return 0;
	}
	goto back;/*원점을 입력하지 않는 이상 계속하여 입력가능*/

	return 0;

}
