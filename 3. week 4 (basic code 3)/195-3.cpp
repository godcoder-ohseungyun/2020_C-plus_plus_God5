#include<iostream>
#include<cmath>//pow�� �������� ����
using namespace std;

void ipower(int, int);//n^k���� ����Ͽ� ����ϴ� �Լ�.

int main()
{
	int i;

	cout << "3^0~3^10���� ����ϰڽ��ϴ�." << endl;
	for (i = 0; i <= 10; i++)//3^0~3^10 ���� ����ϱ����� 10�� �ݺ��Ѵ�.
	{
		ipower(3, i);//ipower�Լ� 2��° �Է°� int p�� i�� �Է������ν� ���ϴ� ���� ����ϰ��Ѵ�. 

	}
	cout << "===========" << endl;
	system("pause");
	return 0;

}

void ipower(int num, int p)
{
	cout << "===========" << endl;
	cout << num << "^" << p << "= " << pow(num, p) << endl;//pow�� �̿��� num^p�� ����Ͽ� ����ϰ���.


}