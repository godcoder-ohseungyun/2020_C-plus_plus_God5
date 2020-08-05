#include<iostream>
using namespace std;

namespace Cylinder//namespace로 변수와 사용할 함수의 이름공간을 지정한다.
{
	double high, r;
	double cylinder(double r, double high = 1.0) { return r * r * 3.14 * high; };//반지름과 높이를 입력받아 부피를 계산하여 출력하는 함수.
}

int main()
{
	using namespace Cylinder;//namespace Cylinder 를 사용 한다고 선언
	
	int a;
	
	cout << "원기둥의 높이가 주어진경우 1 그렇지 않은경우 2를 입력해주세요." << endl;//디폴트 값을 사용할지 안할지 판단하기위해 기준을 입력
	cin >> a;
	if (a == 1)//높이를 아는경우
	{
		cout << endl << "반지름을 입력하세요." << endl;
        cin >> r;
		cout << endl << "높이를 입력하세요." << endl;
	   cin >> high;
	   cout << endl << cylinder(r,high) << " cm(3)" << endl;
	}

	
	if (a == 2)//높이를 모르는경우 디폴트 값 사용
	{
		cout << endl << "반지름을 입력하세요." << endl;
		cin >> r;
		cout << endl << cylinder(r)<<" cm(3)" << endl;//반지름만 입력하여 높이에 디폴트 값을 사용한다 
	}
	system("pause");
	return 0;
}