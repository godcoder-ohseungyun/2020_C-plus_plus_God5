#include<iostream>

using namespace std;

namespace Salary //namespace를 사용하여 변수와 함수의 이름공간을 지정한다.
{
	double salary, rate;//월급,소득세율
	double workpay(double &a, double b = 20) { return a + (a * (b / 100)); };//월급에 소득세율을 더하는 함수정의.

}

int main()
{
	using namespace Salary;//Salary namespace를 사용하겠다는 선언 이제 namespace안에 정의한 변수와 함수를 " :: "없이 사용할수있다.
	int a;//지역변수 a 아래 16번 줄을 위하여
	cout << "소득세율을 알면 1번 모르면 2번을 입력하세요.." << endl;
	cin >> a;

	if (a == 1)//소득세율을 아는경우
	{
		cout << endl <<"월급을 적으세요" << endl;
		cin >> salary;
		cout << endl << "소득세율을 적으세요." << endl;
		cin >> rate;
		cout << endl << workpay(salary, rate) << endl;//변수 값을 함수에 전달하여 반환값을 출력.
	}

	if(a==2)//소득세율을 모르는경우
	{
		cout << endl << "월급을 적으세요" << endl;
		cin >> salary;
		cout << endl << workpay(salary) << endl;//salary만 전달하여 자동으로 위 함수에서 디폴트값으로 지정해둔 20을 rate에 적용하게 한다.
	}
	
	system("pause");
	return 0;
}
