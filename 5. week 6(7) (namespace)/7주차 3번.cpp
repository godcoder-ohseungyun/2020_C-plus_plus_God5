#include<iostream>
using namespace std;

void get_input(double& loan, double& interest);//참조의 의한 호출을 위하여 래퍼런스를 이용해 함수를 구현.

int main()
{
	double a, b;//대출금,이율을 입력받을 변수 
	cout << "대출금을 입력하세요." << endl;
	cin >> a;
	cout <<endl <<"이율을 입력하세요." << endl;
	cin >> b;
	cout << endl << "원금을 제외한 매달 발생하는 이자는 ";
	get_input(a, b);//void 형태의 함수로 인자를 레퍼런스로 받아 이자를 계산하여 출력한다.

	system("pause");
	return 0;
}

void get_input(double& loan, double& interest)
{
	cout << loan * (interest / 100) <<" 원 입니다. " << endl;//반환값을 갖지 않는 함수로 출력을 바로 해준다.
}