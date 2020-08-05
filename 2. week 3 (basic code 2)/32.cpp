#include<iostream>
using namespace std;

int main()
{
    int a=0,i=0;
    int sum = 0;/*두 수열의 합 변수*/
    int now=1, past = 0;/*i i-1 번째 수열 변수*/
    cout << "생성할 피보나치 수열의 개수를 적어주세요." << endl;
    cin >> a;

    cout << past << " " << now <<" ";/*for문 식에 포함되지 않은 첫번째 두번째 수열 출력*/
    for (i = 0; i < a-2; i++)/*입력한 수열의 개수 많큼 반복되게한다 a-2인 이유는 위에서 1,2번째 수열을 출력했기때문에 2개를 제외한 개수많큼 반복하여 출력*/
    {   
        sum = past + now;/*이전 두 수열을 더한 값*/
        past = now;/*두 수열중 i-1번째를 i번째로 바꾸어준다*/
        now = sum;/*두 수열중  i번째를 두수열의 합의 값으로 바꾸어준다(i+1)*/
        cout << sum << " ";/*값 출력하여 수열 표시*/
     }
    system("pause");
    return 0;
}