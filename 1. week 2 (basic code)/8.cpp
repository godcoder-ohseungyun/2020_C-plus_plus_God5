#include<iostream>
#include<cmath>/*pow로 제곱근을 계산하기 위해 인클루드 해준다*/
using namespace std;

int main() {
	int h, m, s, s1;
	cout << "시 분 초를 입력해 주세요" << endl;
	cin >> h >> m >> s;
	if (((m > 60) || (s > 60)) == 1)/*분,초는 60 이상의 수치로 기록될 수 없다*/
	{
		cout << "올바르지 않은 입력입니다 분과 초는 60미만의 수로 입력해주세요.\n";
		system("pause");
		return 0;
	}
	if (((h < 0) || (m < 0) || (s < 0)) == 1)/*시,분,초 는 음수로 기록될수 없다*/
	{
		cout << "올바르지 않은 입력입니다 시 분 초는 0 이상의 수로 입력해주세요.\n";
		system("pause");
		return 0;
	}
	s1 = (h * pow(60, 2)) + (m * 60) + (s);/*pow를 이용 60의 제곱근을 사용 총 입력된 값을 초로 변경하는 식*/

	cout << h << "시" << m << "분" << s << "초" << "는 총" << s1 << "초 입니다." << endl;
	
	system("pause");
	
	return 0;
}