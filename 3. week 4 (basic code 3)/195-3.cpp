#include<iostream>
#include<cmath>//pow를 쓰기위해 선언
using namespace std;

void ipower(int, int);//n^k승을 계산하여 출력하는 함수.

int main()
{
	int i;

	cout << "3^0~3^10까지 출력하겠습니다." << endl;
	for (i = 0; i <= 10; i++)//3^0~3^10 까지 출력하기위해 10번 반복한다.
	{
		ipower(3, i);//ipower함수 2번째 입력값 int p에 i를 입력함으로써 원하는 값을 출력하게한다. 

	}
	cout << "===========" << endl;
	system("pause");
	return 0;

}

void ipower(int num, int p)
{
	cout << "===========" << endl;
	cout << num << "^" << p << "= " << pow(num, p) << endl;//pow를 이용해 num^p를 계산하여 출력하게함.


}