#include<iostream>
using namespace std;

class Complex
{
private:
	double R1; //실수부 변수
	double NR1; //허수부 변수
	double R2; //계산에서 쓰일 실수부 변수
	double NR2; //계산에서 쓰일 허수부 변수

public:
	//#1
	void setR1(double a);//실수부 설정자                     각 set과 get은 대응된다. ex)setNum2 needs getNum2
	void setNR1(double b);//허수부 설정자
	double getR1();//실수부 접근자
	double getNR1();//허수부 접근자
//#2	
	void setR2(double c);
	void setNR2(double d);
	double getR2();
	double getNR2();
	void print();//복소수 출력
	void print2();
	void addsub(int f);//덧셈뺄셈 이행하는 함수

};
//#1
void Complex::setR1(double a)//실수부 설정자
{
	R1 = a;

}
double Complex::getR1()//실수부 접근자
{
	return R1;
}

void Complex::setNR1(double b)//허수부 설정자
{
	NR1 = b;
}

double Complex::getNR1()//허수부 접근자
{
	return NR1;
}

void Complex::print()//복소수 출력함수
{
	cout << R1 << " + " << NR1 << "i" << endl;
}
//#2
void Complex::setR2(double c)
{
	R2 = c;

}
double Complex::getR2()
{
	return R2;
}

void Complex::setNR2(double d)
{
	NR2 = d;
}

double Complex::getNR2()
{
	return NR2;
}

void Complex::print2()
{
	cout << R2 << " + " << NR2 << "i" << endl;
}

void Complex::addsub(int f)//덧셈 뺄셈 연산 함수
{
	if (f == 0) {
		if (R1 >= R2 && NR1 >= NR2)
			cout << "result= " << R1 - R2 << "+" << NR1 - NR2 << "i" << endl;
		if (R2 >= R1 && NR2 >= NR1)
			cout << "result= " << R2 - R1 << "+" << NR2 - NR1 << "i" << endl;
		if (R2 >= R1 && NR1 >= NR2)
			cout << "result= " << R2 - R1 << "+" << NR1 - NR2 << "i" << endl;
		if (R1 >= R2 && NR2 >= NR1)
			cout << "result= " << R1 - R2 << "+" << NR2 - NR1 << "i" << endl;
	}

	if (f == 1)
		cout << "result= " << R1 + R2 << "+" << NR1 + NR2 << "i" << endl;//덧셈

}
int main()
{
	Complex complex;
	int select;

	double s1, s2;//두번째 복소수의 실수,허수를 받는변수
	complex.setR1(12.0);
	complex.setNR1(17.9);
	complex.print();
	cout << "두번째 복소수의 실수와 허수를 입력하세요 ex)21.0(간격)23.2  : ";
	cin >> s1 >> s2;
	complex.setR2(s1);
	complex.setNR2(s2);
	complex.print2();
	do {
		cout << "덧셈을 하고싶으면 1 빼기를 하고싶으면 0을 선택하세요. (종료는 2) ";
		cin >> select;
		complex.addsub(select);
	} while (select != 2);
	system("pause");
	return 0;

}