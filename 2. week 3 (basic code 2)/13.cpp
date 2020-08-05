#include<iostream>
#include<ctime>/*rand()를 위해 선언*/
using namespace std;

int main()
{
	
	int a=0,b=0;
	do {
		cout << "1:가위 2:바위 3:보 중에 선택하시오.종료를 원하면 0 " << endl;/*종료는 0*/
		cin >> a;
		
	     srand(time(NULL));/*난수값 초기화*/
    if(a==1)/*선택한 가위바위보 중 알맞는걸 분별*/
		cout << "당신: 가위 "<< endl;
	if (a == 2)
		cout << "당신: 바위 " << endl;
	if (a == 3)
		cout << "당신: 보 " << endl;
		
		b = rand() % 3 + 1;/*가위 바위 보 중 하나를 랜덤으로 생성 1~3 중 난수 생성*/
		if ((b == 1)&&(a!=0))/*a가 종료가 아닐때 컴퓨터가 가위일경우*/
		{
			cout << "컴퓨터: 가위" << endl;
			if (a == b)/*a와b를 비교하여 결과 출력*/
				cout << "비김"<< endl;
			if (a == 2)
				cout << "승리" << endl;
			if (a == 3)
				cout << "패배" << endl;

		}
		if ((b == 2)&&(a != 0))/*a가 종료가 아닐때 컴퓨터가 바위일경우*/
		{
			cout << "컴퓨터: 바위" << endl;
			if (a == b)/*a와b를 비교하여 결과 출력*/
				cout << "비김" << endl;
			if (a == 1)
				cout << "패배" << endl;
			if (a == 3)
				cout << "승리" << endl;


		}
		if ((b == 3) && (a != 0))/*a가 종료가 아닐때 컴퓨터가 보일경우*/
		{
			cout << "컴퓨터: 보" << endl;

			if (a == b)/*a와b를 비교하여 결과 출력*/
				cout << "비김" << endl;
			if (a == 1)
				cout << "승리" << endl;
			if (a == 2)
				cout << "패배" << endl;
		}
		if (a == 0)/*종료*/
			cout << "종료합니다..." << endl;
	} while (a != 0);/*a를 0으로 초기와 했었기 때문에 do while문 사용하여 한번은 반복되게하여 a값을 입력받는다.*/


	system("pause");
	return 0;

}