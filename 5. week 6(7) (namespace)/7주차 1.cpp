#include<iostream>

using namespace std;

namespace Salary //namespace�� ����Ͽ� ������ �Լ��� �̸������� �����Ѵ�.
{
	double salary, rate;//����,�ҵ漼��
	double workpay(double &a, double b = 20) { return a + (a * (b / 100)); };//���޿� �ҵ漼���� ���ϴ� �Լ�����.

}

int main()
{
	using namespace Salary;//Salary namespace�� ����ϰڴٴ� ���� ���� namespace�ȿ� ������ ������ �Լ��� " :: "���� ����Ҽ��ִ�.
	int a;//�������� a �Ʒ� 16�� ���� ���Ͽ�
	cout << "�ҵ漼���� �˸� 1�� �𸣸� 2���� �Է��ϼ���.." << endl;
	cin >> a;

	if (a == 1)//�ҵ漼���� �ƴ°��
	{
		cout << endl <<"������ ��������" << endl;
		cin >> salary;
		cout << endl << "�ҵ漼���� ��������." << endl;
		cin >> rate;
		cout << endl << workpay(salary, rate) << endl;//���� ���� �Լ��� �����Ͽ� ��ȯ���� ���.
	}

	if(a==2)//�ҵ漼���� �𸣴°��
	{
		cout << endl << "������ ��������" << endl;
		cin >> salary;
		cout << endl << workpay(salary) << endl;//salary�� �����Ͽ� �ڵ����� �� �Լ����� ����Ʈ������ �����ص� 20�� rate�� �����ϰ� �Ѵ�.
	}
	
	system("pause");
	return 0;
}
