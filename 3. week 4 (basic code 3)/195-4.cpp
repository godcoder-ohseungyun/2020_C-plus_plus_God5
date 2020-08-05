#include<iostream>
#include<cmath>/*pow와 sqrt를 사용하기위한 선언*/
using namespace std;

double dist_2d(double, double, double, double);/*코드에 사용된 함수정보를 담고있는 함수원형*/

int main()
	{
	double x1, y1, x2, y2;/*좌표는 실수를 포함하기때문에 double형으로 변수형 선언*/
	cout << "두 점의 좌표를 입력해 주세요ex)3 2 -2 4(단, 소수점 5째 자리까지 반올림하여 표기합니다.) " << endl;
	cin >> x1 >> y1 >> x2 >> y2;

	cout << "두 좌표사이의 거리는  " << dist_2d(x1, y1, x2, y2) << " 입니다." << endl;/*함수를 호출하여 결과값 출력*/
	system("pause");
	return 0;

	}
	
double dist_2d(double x1, double y1, double x2, double y2) /*입력값 double형과 출력값 double로 실수를 포함하게함.*/
{

	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));/*좌표사이 거리를 구하는 공식을 sqrt,pow 로 나타내여 반환값을 나타낸다.*/

}