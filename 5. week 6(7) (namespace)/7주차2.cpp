#include<iostream>
using namespace std;

namespace Cylinder//namespace�� ������ ����� �Լ��� �̸������� �����Ѵ�.
{
	double high, r;
	double cylinder(double r, double high = 1.0) { return r * r * 3.14 * high; };//�������� ���̸� �Է¹޾� ���Ǹ� ����Ͽ� ����ϴ� �Լ�.
}

int main()
{
	using namespace Cylinder;//namespace Cylinder �� ��� �Ѵٰ� ����
	
	int a;
	
	cout << "������� ���̰� �־������ 1 �׷��� ������� 2�� �Է����ּ���." << endl;//����Ʈ ���� ������� ������ �Ǵ��ϱ����� ������ �Է�
	cin >> a;
	if (a == 1)//���̸� �ƴ°��
	{
		cout << endl << "�������� �Է��ϼ���." << endl;
        cin >> r;
		cout << endl << "���̸� �Է��ϼ���." << endl;
	   cin >> high;
	   cout << endl << cylinder(r,high) << " cm(3)" << endl;
	}

	
	if (a == 2)//���̸� �𸣴°�� ����Ʈ �� ���
	{
		cout << endl << "�������� �Է��ϼ���." << endl;
		cin >> r;
		cout << endl << cylinder(r)<<" cm(3)" << endl;//�������� �Է��Ͽ� ���̿� ����Ʈ ���� ����Ѵ� 
	}
	system("pause");
	return 0;
}