#include<iostream>
#include<cmath>/*pow����� ���� ��Ŭ���*/
#define PI acos(-1);/*pi�� ����*/

using namespace std;

int main() {
	double a, b, c;
	cout << "���� �������� �Է��ϼ���." << endl;
	cin >> a;
	b = pow(a, 2) * 4 * PI;/*ǥ���� ���ϴ� ����*/
	c = pow(a, 3) * (4 / 3) * PI;/*ü�� ���ϴ� ����*/

	cout << "ǥ������" << b << "�̰�" << " " << "ü����" << c << "�̴�" << endl;
	system("pause");
	return 0;
}