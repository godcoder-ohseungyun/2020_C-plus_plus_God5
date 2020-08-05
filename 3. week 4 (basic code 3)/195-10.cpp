#include<iostream>
using namespace std;

void print_menu();//메뉴를 출력하는 함수입니다.
int get_menu_number(int);//메뉴에 해당하는 번호를 입력받아 판단하는 함수입니다.
void pick_hamburger();//햄버거 선택시 햄버거를 출력하는 함수입니다.
void pick_cheeze();//치즈버거 선택시 치즈버거를 출력하는 함수입니다.
void pick_sand();//센드위치 선택시 센드위치를 출력하는 함수입니다.
int main()
{
	int a=0;
do//a를 초기화 하여 상관없지만 a값을 입력받기 전임으로 do while문을 이용하여 한번 실행한후 while의 참거짓을 판별한다.
	{
	    print_menu();
		cin >> a;
		if (get_menu_number(a) == 0)//get menu number 함수에서 입력번호가 알맞으면 1 틀리면 0을 return하게 하였다.
		cout << "잘못 입력하였습니다." << endl;

		if (get_menu_number(a) == 1)
			break;
	} while (a != 4);//print menu함수에서 4에 해당하는 번호는 종료임으로 입력값a=4이면 루프를 빠져나온다.
	if (a == 1)
		pick_hamburger();//a가 1일경우 햄버거에 해당함으로 햄버거를 출력하는 함수를 사용.
	if (a == 2)
	  pick_cheeze();//a가 2일경우 치즈버거에 해당함으로 치즈버거를 출력하는 함수를 사용.
	if (a == 3)
	   pick_sand();//a가 3일경우 센드위치에 해당함으로 센드위치를 출력하는 함수를 사용.
	if (a == 4)
	{
		cout << "종료합니다." << endl;//a=4면 종료에 해당함으로 종료한다.
		system("pause");
		return 0;
	}
	system("pause");
	return 0;
}

void print_menu() {//각 메뉴에 해당하는 넘버를 출력해준다(안내)
	cout << "1. 햄버거" << endl << "2. 치즈버거" << endl << "3. 샌드위치" << endl << "4. 종료" << endl << "원하는 메뉴를 선택하세요." << endl;
}

int get_menu_number(int n){//main 함수에서 a 즉 입력값을 받아 메뉴에 해당하는 넘버인 1~4안에 해당하면 1을 반환 else 0을 반환(0의경우 n > 4 || n < 1연산으로 분별)
	if (n > 4 || n < 1)
		return 0;
	else
		return 1;
}
//각 메뉴 출력하는 함수들.
void pick_hamburger() {
	cout << "햄버거 나왔습니다 ^-^b" <<endl;
}
void pick_cheeze() { 
	cout << "치즈버거 나왔습니다 ^-^b" << endl;
}
void pick_sand(){
	cout << "샌드위치 나왔습니다 ^-^b" << endl;
}