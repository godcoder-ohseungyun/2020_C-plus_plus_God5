#include<iostream>
using namespace std;

void get_input(double& loan, double& interest);//������ ���� ȣ���� ���Ͽ� ���۷����� �̿��� �Լ��� ����.

int main()
{
	double a, b;//�����,������ �Է¹��� ���� 
	cout << "������� �Է��ϼ���." << endl;
	cin >> a;
	cout <<endl <<"������ �Է��ϼ���." << endl;
	cin >> b;
	cout << endl << "������ ������ �Ŵ� �߻��ϴ� ���ڴ� ";
	get_input(a, b);//void ������ �Լ��� ���ڸ� ���۷����� �޾� ���ڸ� ����Ͽ� ����Ѵ�.

	system("pause");
	return 0;
}

void get_input(double& loan, double& interest)
{
	cout << loan * (interest / 100) <<" �� �Դϴ�. " << endl;//��ȯ���� ���� �ʴ� �Լ��� ����� �ٷ� ���ش�.
}