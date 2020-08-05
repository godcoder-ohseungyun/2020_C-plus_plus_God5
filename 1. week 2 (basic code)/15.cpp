#include<iostream>
#include<cmath>/*pow사용을 위해 인클루드*/
#define PI acos(-1);/*pi값 정의*/

using namespace std;

int main() {
	double a, b, c;
	cout << "구의 반지름을 입력하세요." << endl;
	cin >> a;
	b = pow(a, 2) * 4 * PI;/*표면적 구하는 공식*/
	c = pow(a, 3) * (4 / 3) * PI;/*체적 구하는 공식*/

	cout << "표면적은" << b << "이고" << " " << "체적은" << c << "이다" << endl;
	system("pause");
	return 0;
}