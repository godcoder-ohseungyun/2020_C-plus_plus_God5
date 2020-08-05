#include<iostream>
using namespace std;
double c1, c2, c3, c4, c5, c6;/*전역변수는 0으로 초기화 된다*/
int rand_range(int,int);//범위를 받아 범위안의 난수를 발생시키는 함수
int main() {
	int count,n1,n2,n,i;//count변수는 함수의 결과 값을 저장하는 역할을 합니다.
	int a = 0;
	double all_about[1000] = { 0 };//각 수의 발생빈도수를 저장하는 배열
	
	cout << "구하고자 하는 범위와 발생시킬 난수의 횟수를 입력하세요 (범위의 최대값은 1000이하) ex)1 6 600" << endl;
	cin >> n2 >> n1 >>n;//최솟값 최대값 발생횟수 순으로 입력받습니다. all_about 배열의 크기가 1000임으로 최대값은 1000이하여야 합니다.(수정가능)
	cout << endl;

	while (a < n)//n번 루프를 돌게 합니다.
	{
		
		count = rand_range(n1,n2);//범위 사이에서 랜덤으로 수를 출력하는 함수
	for(i=n2;i<=n1;i++)//범위 안의 수의 발생빈도수를 카운트 하기위한 for문 변수 n1에 입력한 만큼 반복된다.
	{
		if (count == (i))//13번째줄에서 함수값을 저장한 cout 를 i와 비교하여 발생할수있는 수를 모두 검사한다
			all_about[i]++;//배열i번째에  i번째 수가 발생할때마다 카운트한다
	}
		cout <<count <<" ";

		a++;//0부터 ++하여 while문이 n번 돌도록 합니다.
	
	}
	
	cout << endl<<endl;
	cout << "입력하신 범위 " << n2 << "~" << n1 << " 사이의" << n << " 번 발생한 난수는 위와 같고 각 난수별 발생 통계값은 아래와 같습니다."<<endl<<endl;
	
	
	for (i = n2; i <= n1; i++)
	{
		cout <<i <<"=> "<< (all_about[i]/n)*100 <<"%  ";//각 수의 통계값을 출력한다. all_about배열에 범위안의 각 수의 발생 빈도수가 저장되어있음으로 빈도수/전체 반복 횟수*100 =>통계값이다 

	}
	cout << "각 통계값이 근사함으로 발생확률이 근사적으로 같습니다." << endl;

	system("pause");
	return 0;
}
int rand_range(int n1,int n2)
{
	return (rand() % n1 + n2);//rand()함수의 범위를 설정하는 수식

}