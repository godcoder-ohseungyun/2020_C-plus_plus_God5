#include<iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
back:/*10000이상의 정수를 입력했을 때 잘못입력했다는 출력과함께 다시 돌아오게함*/
	cout << "10000미만의 정수를 입력하시오." << endl;
	cin >> a;

	if (a >= 10000)
	{
		cout << "잘못 입력하셨습니다.\n";
		goto back;/*잘못 입력했을때  back으로 보냄*/
	}
	b = (int)a / 1000;/*각 자리수의 값을 구하는 식 나머지와 나눗셈 이용*/
	c = (int)(a % 1000) / 100;
	d = (int)((a % 1000) % 100) / 10;
	e = (int)(((a % 1000) % 100) % 10) / 1;

	cout << "천의 자리 백의자리 십의자리 일의자리는 각각" << b << " " << c << " " << d << " " << e << "이다." << endl;
	system("pause");
	return 0;
}