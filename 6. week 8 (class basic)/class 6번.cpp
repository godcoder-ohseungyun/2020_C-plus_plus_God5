#include<iostream>
using namespace std;

class Complex
{
private:
	double R1; //�Ǽ��� ����
	double NR1; //����� ����
	double R2; //��꿡�� ���� �Ǽ��� ����
	double NR2; //��꿡�� ���� ����� ����

public:
	//#1
	void setR1(double a);//�Ǽ��� ������                     �� set�� get�� �����ȴ�. ex)setNum2 needs getNum2
	void setNR1(double b);//����� ������
	double getR1();//�Ǽ��� ������
	double getNR1();//����� ������
//#2	
	void setR2(double c);
	void setNR2(double d);
	double getR2();
	double getNR2();
	void print();//���Ҽ� ���
	void print2();
	void addsub(int f);//�������� �����ϴ� �Լ�

};
//#1
void Complex::setR1(double a)//�Ǽ��� ������
{
	R1 = a;

}
double Complex::getR1()//�Ǽ��� ������
{
	return R1;
}

void Complex::setNR1(double b)//����� ������
{
	NR1 = b;
}

double Complex::getNR1()//����� ������
{
	return NR1;
}

void Complex::print()//���Ҽ� ����Լ�
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

void Complex::addsub(int f)//���� ���� ���� �Լ�
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
		cout << "result= " << R1 + R2 << "+" << NR1 + NR2 << "i" << endl;//����

}
int main()
{
	Complex complex;
	int select;

	double s1, s2;//�ι�° ���Ҽ��� �Ǽ�,����� �޴º���
	complex.setR1(12.0);
	complex.setNR1(17.9);
	complex.print();
	cout << "�ι�° ���Ҽ��� �Ǽ��� ����� �Է��ϼ��� ex)21.0(����)23.2  : ";
	cin >> s1 >> s2;
	complex.setR2(s1);
	complex.setNR2(s2);
	complex.print2();
	do {
		cout << "������ �ϰ������ 1 ���⸦ �ϰ������ 0�� �����ϼ���. (����� 2) ";
		cin >> select;
		complex.addsub(select);
	} while (select != 2);
	system("pause");
	return 0;

}