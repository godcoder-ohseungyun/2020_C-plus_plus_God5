#include<iostream>
#include<cmath>/*pow�� sqrt�� ����ϱ����� ����*/
using namespace std;

double dist_2d(double, double, double, double);/*�ڵ忡 ���� �Լ������� ����ִ� �Լ�����*/

int main()
	{
	double x1, y1, x2, y2;/*��ǥ�� �Ǽ��� �����ϱ⶧���� double������ ������ ����*/
	cout << "�� ���� ��ǥ�� �Է��� �ּ���ex)3 2 -2 4(��, �Ҽ��� 5° �ڸ����� �ݿø��Ͽ� ǥ���մϴ�.) " << endl;
	cin >> x1 >> y1 >> x2 >> y2;

	cout << "�� ��ǥ������ �Ÿ���  " << dist_2d(x1, y1, x2, y2) << " �Դϴ�." << endl;/*�Լ��� ȣ���Ͽ� ����� ���*/
	system("pause");
	return 0;

	}
	
double dist_2d(double x1, double y1, double x2, double y2) /*�Է°� double���� ��°� double�� �Ǽ��� �����ϰ���.*/
{

	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));/*��ǥ���� �Ÿ��� ���ϴ� ������ sqrt,pow �� ��Ÿ���� ��ȯ���� ��Ÿ����.*/

}