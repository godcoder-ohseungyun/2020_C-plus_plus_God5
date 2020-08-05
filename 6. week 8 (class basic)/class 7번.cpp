#include<iostream>
using namespace std;

class Triangle
{
private:

	double high;//높이
	double down;//밑변
	

public:
	void setArea(double a, double b);//높이 밑변 설정자
    void getArea();//연산한 면적 접근자
};


void Triangle::setArea(double a, double b)//높이 밑변을 받아 객체 변수에 설정.
{
	high = a;
	down = b;
}

void Triangle::getArea()//면적을 연산한 후 출력.
{
	cout<< "result= "<< high * down / 2;
}

int main()
{
	Triangle tri;
	double a, b;
	cout << "밑변과 높이를 적어주세요. ex)2(간격)3. : ";//높이와 밑변 입력받는다.
	cin >> a >> b;
	tri.setArea(a, b);//설정자
	tri.getArea();//접근자

	system("pause");
	return 0;
}