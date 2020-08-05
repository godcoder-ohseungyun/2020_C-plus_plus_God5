#include<iostream>
using namespace std;
int atc();/*피트와 인치로 cm를 계산하는 함수선언*/
int main()/*cm로 피트와 인치를 계산하는 함수*/
{
    double cm, in1, in2, pt;/*피트 계산에 필요한 인치값과 피트나머지값을 표기할 인치값을 in1,in2로 선언 소수점계산을 사용하기때문에 double 사용*/

    cout << "cm를 입력하세요." << endl;
    cin >> cm;
    in1 = (int)(cm / 2.54);/*피트값을 구하기위해 cm값을 인치로 변환후 정수부분만 추출하기위해 일시적 형변환을 실시*/
    pt = (int)(in1 / 12);/*피트값 구하는 식*/
    in2 = (cm / 2.54) - (12 * pt);/*피트값을 제외한 나머지 인치값을 구하는 식*/
    cout << cm << "cm는" << (int)pt << "피트" << in2 << "인치 입니다." << endl;
    atc();/*피트와 인치로 cm를 계산하는 함수*/
    system("pause");
    return 0;

}

int atc() {
    double cm, in1, in2, pt;

    cout << "피트와 인치를 입력하세요" << endl;
    cin >> pt >> in1;
    in2 = 12 * pt + in1;/*입력된 피트+인치값을 인치로 변환*/
    cm = in2 * 2.54;/*전체 인치값을 cm으로 변환*/
    cout << "당신의 키는" << cm << "cm입니다." << endl;
    system("pause");
    return 0;
}