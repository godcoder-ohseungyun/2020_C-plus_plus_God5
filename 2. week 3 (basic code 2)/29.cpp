#include<iostream>
#include<cmath>/*pow를 사용하기 위해 선언*/
using namespace std;

int main()
{
	int a=0;
	int i, j, k;/*3중반복문 변수*/

	for (i = 1; i < 100; i++)/*a변 1~100*/
	{
		for (j = 1; j < 100; j++)/*b변 1~100*/
		{
			for (k = 1; k < 100; k++)/*c변 1~100*/
			{
				if (i + j > k)/*우선 삼각형의 조건을 만족해야한다 (짧은변 두개의 합 > 가장긴변)*/
				{

					if (i > j) {/*중복을 피하기 위해 i > j 즉 a변이 b변보다 클경우를 조건에 넣어준다*/
						if (pow(i, 2) + pow(j, 2) == pow(k, 2))/*pow함수를 이용 각 변의 제곱수를 구해 피타고라스정리에 대입*/
						{
							a++;/*삼각형의 갯수를 센다*/
							cout << i << " " << j << " " << k << endl;/*if문에 성립한다면 i j k 즉 a b c를 출력 */
						}
					}
				}
			}

		}
	}
	cout << "일때 피타고라스정리를 만족하는 직각삼각형이다."<< "총 "<<a<<" 개 이다." << endl;/*안내문 출력*/
	system("pause");
	return 0;
}