#include<iostream>
using namespace std;

class Triangle
{
private:

	double high;//����
	double down;//�غ�
	

public:
	void setArea(double a, double b);//���� �غ� ������
    void getArea();//������ ���� ������
};


void Triangle::setArea(double a, double b)//���� �غ��� �޾� ��ü ������ ����.
{
	high = a;
	down = b;
}

void Triangle::getArea()//������ ������ �� ���.
{
	cout<< "result= "<< high * down / 2;
}

int main()
{
	Triangle tri;
	double a, b;
	cout << "�غ��� ���̸� �����ּ���. ex)2(����)3. : ";//���̿� �غ� �Է¹޴´�.
	cin >> a >> b;
	tri.setArea(a, b);//������
	tri.getArea();//������

	system("pause");
	return 0;
}