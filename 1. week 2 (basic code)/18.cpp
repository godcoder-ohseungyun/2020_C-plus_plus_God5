#include<iostream>
#include<cmath>/*sqrt�� pow �� �̿��ϱ� ���� ��Ŭ���*/
using namespace std;

int main() {
	double a, b, c;
	double result1, result2;/* ���������� ���� 2�������� �� �� ����*/
	cout << "ax^2+bx+c������ ������ a b c�� �Է��ϼ���." << endl;
	cin >> a >> b >> c;
	result1 = (-b + (sqrt(pow(b, 2) - (a * c * 4)))) / 2 * a;/*���� ���� ����*/
	result2 = (-b - (sqrt(pow(b, 2) - (a * c * 4)))) / 2 * a;
	cout << a << "x^2" << " " << b << "x +" << c << "�� ����" << "" << result1 << " " << result2 << "�̴�" << endl;
	system("pause");
	return 0;

}