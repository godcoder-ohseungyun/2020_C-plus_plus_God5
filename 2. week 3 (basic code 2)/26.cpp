#include<iostream>
using namespace std;
int main() {
	int i, a, c;
	int al[4] = { 2,3,5,7 };/*10이하의 소수 배열*/
	cout << "수를 입력하세요." << endl;
	cin >> a;

	/*10이상의 수 중에서 소수를 검별하는 반복문(2~9까지의 수를 나누어 나머지가 0이되면 소수가 아니다.)*/
	if (a > 9) {
		for (i = 2; i < 10; i++)
		{
			if (a % i == 0)/*(2~9까지의 수를 나누어 나머지가 0이되면 소수가 아니다.)*/
			{
				cout << "소수가 아닙니다." << endl;
				system("pause");/*결과가 나오면 종료*/
				return 0;
			}
		}
	}
	if (a < 10)/*10미만의 수중 소수를 검별하는 반복문*/
	{
		for (c = 0; c < 4; c++)
		{
			if (a == al[c])/*위 배열과 비교하여 같다면 반복문 종료*/
				break;
			if ((a!=al[0])&&(a != al[1])&&(a != al[2])&& (a != al[3]))/*위배열과 비교하여 전부 같지 않다면 소수가 아님*/
			{
				cout << "소수가 아닙니다." << endl;
				system("pause");
				return 0;
			}
		}
	}
	cout << " 입력하신 " << a << " 는 소수입니다." << endl;/*위 조건 비교하여 소수에 성립한다면 반복문 종료후 출력 */

	system("pause");
	return 0;
}