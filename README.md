# C++ source code document<br/>

#### 주제:바로가기<br/><br/>
##### [1. WEEK 2~4 : C에 기반을둔 기본 프로그래밍](#1)
+ [1-2](#1_2)
+ [1-3](#1_3)
+ [1-4](#1_4)
##### [2. WEEK 5 : BASIC 심화(무작위 딱정벌레의 이동 COUNT & MARK)](#2)
##### [3. WEEK 6 : C++ NAMESPACE AND 구조체](#3)
##### [4. WEEK 7~10 : C++ 핵심 CLASS (!)](#4)
+ [4-7](#4_7)
+ [4-8](#4_8)
+ [4-9](#4_9)
+ [4-10](#4_10) <br/><br/>
### **C++ 학습내용을 저장**  <br/><br/><br/><hr/>
# 1
#### WEEK 2~4 : C에 기반을둔 기본 프로그래밍 <br/><br/> 
  

***visual과 달리 exe프로그램을  따로 실행했을 때 결과값이 나왔지만 바로 종료되버리는 상황이 있었습니다. return 0; 전에 system(“pause”) 추가로 해결하였습니다.**  
  
  
  # 1_2
**7번 cm로 표현된 키를 인치와 피트로 변환하는 프로그램(1) 및 인치와 피트로 표현된 키를 cm으로 변환하는 프로그램(2).**  

개요)
1피트는 12인치 1인치는 2.54 cm임을 고려하여 각 단위의 관계를 식으로 정리한다. c에서 배웠던 함수의 선언을 이용하여 (1),(2)의 프로그램이 연속해서 실행될수있도록 한다.
소스코드)

*main 4번째 줄에서 (int) 형변환을 통해 인치와 피트값을 쉽게 계산할 수 있다.
*함수의 선언을 이용하여 두 계산이 연속으로 실행되도록 한다.

*cm을 입력받는 프로그램 피트와 인치를 입력받는 프로그램을 함께 실행
고찰) 
c에서 배웠던 부분을 응용하면서 다시한번 상기하는 기회가 되어 좋았다.
수업에서 배운 형변환을 이용하여 자칫 난해할수있었던 변수에 정수부만 대입하는 것을 쉽게 해결했다.

**8번 시 분 초로 입력된 값을 초로 변환.**

개요)
시분초의 값은 음수가 될 수 없다,분 초는 값이 60이상이 될 수 없다, 1시간은 60분 1분은 60초 임을 조건으로 두고 문제를 해결한다.
(시*60^2=>초, 분*60=>초) 
소스코드)

*변수 h m s에 각 각 시분초의 값을 입력받는다. 초단위로 나타내는 식 = (h *pow(60,2)) +( m * 60 )+ (s)을 이용하여 최종값을 계산한다. 여기서 include<cmath>를 통해 pow(x,a)=x^a를 사용할수 있게 되면서 h *pow(60,2)를 식을 사용
*if를 이용하여 개요의 조건을 부여해준다.
실행결과)

고찰)
수업에서 배운 cmath,pow를 응용해보는 시간을 가졌다
논리연산자를 사용하기위한 계산이 빠르지 않았기 때문에 다음엔 빠르고 정확하게 필요한 논리연산자를 사용하도록 공부해야겠다.

**9번 4자리 수를 입력받아 천의자리 백의자리 십의자리 일의자리로 구분해주는 프로그램.**

개요)
4자리 이상의 수를 입력했을 때 잘못입력했다는 문구를 출력하도록 하고 입력받은 수를 나누기하고 그 나머지를 다시 나누기 하는 방식으로 각 자릿수를 찾아낸다. 
소스코드)
 
*if문으로 4자리 이상의 수를 입력했을 때 잘못입력했다는 출력과 함께 goto문을 사용하여 다시 4자리수를 입력받도록 한다
*나눗셈을 한 결과를 (int)로 형변환 시켜주면서 각 자릿수를 변수에 대입할 수 있다.
실행결과)

*4자리 이상의 수를 입력한결과->goto back->다시 입력받은 결과
고찰)
goto문을 사용하여 잘못입력했을 때 다시 실행하는 불편함을 없애면서 goto문에 대한 공부가 되었다
형변환을 다시한번 사용해보면서 형변환의 편의성을 한번더 느끼는 시간이었다.

**15 반지름을 입력받아 표면적과 체적을 계산하는 프로그램.**

개요)
우선 계산하는데 필요한 pi값을 정확히 선언한다. 체적(4/3*pi*r^3)과 표면적(4*pi*r^2)을 구하는 공식을 이용하여 식을 완성한다. 
소스코드)

*acos(-1)는 pi값이므로 정확한 pi값을 위해 정의해준다.
실행결과)

고찰)
정확한 pi값을 위해 cmath 의 M_PI를 이용해 보려고 했으나 pi하나만 쓰기위해 사용하기엔 너무 번거롭고 불필요하여 acos(-1)이라는 값을 찾아 사용하게 되었다. pi를 사용할 때 정확한 계산이 가능하게 되어 기쁘다.



**17 좌표를 입력받아 사분면을 찾아주는 프로그램.**

개요)

이 개념을 이용하여 사분면을 계산하는 코드를 논리연산자와 if문을 이용하여 만든다
소스코드)	


*goto문을 이용하여 원점을 입력하면 종료시키고 그렇지 않으면 계속 알아볼수있도록 한다.
*좌표가 소수점을 포함 할 수 있으므로 double로 변수를 선언한다.
실행결과)

고찰)
조건연산자와 논리연산자를 사용해 보면서 조금 더 사용에 능숙해 졌다.

**18 이차함수의 근을 구하는 프로그램(ax^2+bx+c).**

개요)
근의공식을 이용하여 두 근을 구하도록 한다 (cmath를 이용하여 sqrt,pow를 사용)
소스코드)

*각 a b c와 근은 소수일수있으므로 double로 선언
실행결과)

고찰)
sqrt와 pow를 사용함으로 써 손쉽게 수학공식을 계산할수있었고 cmath라이브러리가 유용하다는 것을 느낄수있었다.


# 1_3

**3. 2진수를 정수로 입력받아 10진수로 바꾸는 프로그램.(반복문쓰기)**

개요<br/>
0과 1로 이루어진 정수의 각 자릿수를 분리하는 방법으로 접근 ex)1101의 100의 자릿수는 (1101%1000)/100 이다.
먼저 입력받은 정수가 총 몇자리 수인지 증감연산으로 계산하여 그만큼 각 자릿수를 분리하는 또다른 반복문으로 각 자릿수를 분리하며 2^i승을 곱한후 더하여 10진수로 변경하였다.<br/>
소스코드<br/>
첫 번째 do while문=>입력받은 정수가 10의 몇승인지 계산한다
두 번째 do while 문=> 첫 번째 do while문에서 구한 I값으로 가감하면서 각 자리수가 0,1인지 판별 그에 맞는 2^i승을 곱한후 합하여 10진수로 변경 
b = a % (int)pow(10, I) 와 c = (int)(b / pow(10, i)) * pow(2, I)에서 pow는 실수값을 갖기 때문에 연산시 실수부가 계산에 영향을 주어 단위가 커질수록 값이 조금씩 변하기 때문에 (int)형 변환을 통해 정수값만 취하게 하여 연산을 올바르게 한다.<br/>
고찰<br/>
값이 큰수 ex)1111011일 때 연산결과가 조금씩 오차가 있었습니다. 이를 해결하기 위해 구글링,개발자사이트에 문의를 해보았고 그결과 pow값은 실수부를 포함하는데 연산시 이게 영향을 주어 오차가 발생한다는걸 알게되었고 수정하여 정확도 높은 코드를 완성할수있었습니다. 실수형과 정수형을 올바르게 인지하고 사용하여야겠다고 깨닫게 되었습니다.

**13. 컴퓨터와 가위, 바위, 보 게임하는 프로그램(반복문쓰기)**

개요<br/>
컴퓨터가 가위,바위,보 중 랜덤으로 선택해야하기 때문에 rand()함수를 사용하여 난수를 발생시켜 1~3(가위~보)를 랜덤으로 뽑게 합니다.
if문을 이용하여 승,패,비김의 경우를 비교하여 결과를 출력하게 만듭니다.
소스코드 <br/>

rand()함수에 %3+1을 하면 1~3을 출력하게 된다. 이를 컴퓨터 b에 입력하고 a는 사용자이다
아래 if문에서 != == && 와 같이 관계 연산자를 이용하여 a와 b의 값을 비교하여 결과를 도출해낸다
0은 종료이다.

고찰<br/>
적절한 논리연산자를 알맞게 이용할수있게 되었고 do while문이 사용되는 상황 및 필요성을 알게 되었다.

**17. 학생들 점수의 가중평균값을 구해 학점을 매기는 프로그램(반복문쓰기)**

개요<br/>
중간, 기말, 퀴즈의 점수를 순서대로 입력받은후 가중치를 곱하여 평균을 구하고 그 값을 if문을 통해
논리에 해당하는 경우 학점을 도출한다.<br/>


소스코드<br/>
-1 –1 –1을 입력하면 종료.
cin >>a >>b >>c 로 입력받으므로 spacebar을 이용해 입력해 주어야한다 ex) 1 1 1
고찰<br/>
break를 사용하여 보면서 반복문을 원할 때 종료할수있게 되었고 필요에 따라 자유롭게 반복문을 이용할수있게 되었다.
논리연산자를 연속해 3가지를 대상으로 사용해 보면서 논리연산자를 좀더 다양하게 사용하게 되었다.

**26. 2~100사이의 소수(prime number)를 찾는 프로그램**

개요<br/>

소수를 어떻게 분별해 낼까하는 고민에 상당시간을 소요했다. 10진법에서 힌트를 얻어 모든 양수는 0-9로 이루어 진다는걸 떠올리게 되었고 이를 통해 0 1 은 소수분별에 영향이 없으므로 2-9를 나누어 나머지가 0인지 !0인지 판단하면 된다. 소수란 1과 자신만을 약수로 갖는 수이다. 즉 2-9 이상의 수일 경우 2-9로 나누었을 때 나머지가 0이 되어선 안된다. 10미만의 소수는 2,3,5,7이다.(배열을 이용하여 10 미만을 정의해준다.) if를 이용하여 10을 기점으로 이상과 미만으로 나누어 코드를 짠다.<br/>
소스코드<br/> 
al배열을 생성하여 2357을 정의해준다. if(a>9)은 반복문을 이용하여 2-9의 수로 다 나누어보고 한번이라도 나머지가 0이되면 탈락. 통과한다면 소수로 출력된다.  if(a<10)은 미리 생성산 배열과 논리연산자를 이용하여 비교하여 일치하면 소수로 출력 일치하지 못한다면 탈락. 으로 설정합니다.<br/>
고찰<br/>
소수의 판단법을 10진수(0-9로 이루어진다)에서 힌트를 얻기까지 시간이 많이 소요 되었습니다.
상당히 고민이 많이 되었던 문제지만 재미있었고 수학적 분석을 한듯하여 뿌듯하였습니다. 다만
10미만의 수를 분별할 때 아직 수업에 나오지 않은 내용 배열을 이용했다는 것이 아쉬운 부분입니다.
하지만 코드란 쉽고 간단하게 짜여야 하기 때문에 더 코드가 길어지는걸 방지하기위해 배열을 사용하였습니다.<br/>

**29. 각 변이 100보다 작은 피타고라스 정리를 만족하는 삼각형 찾는 프로그램(3중 반복문) **

개요<br/>
삼각형의 형성 조건은 a+b>c이다 (c가 가장 긴 변이라는 조건에서)
피타고라스 정리는 a^2+b^2=c^2이다(pow함수를 사용)
삼중 for문을 이용하여 I j k를 증가시켜 변 a b c에 1~99까지 대입되게 한다.<br/>

소스코드<br/>
for문 안에 for문 안에 for문을 통해 변 a b c 즉 I j k를 모두 연산되게 한후 이중 if문을 이용하여 삼각형의 조건  a+b>c를 만족하는 경우 3각형으로 분류 그중 a^2+b^2=c^2 피타고라스 정리 또한 동시에 만족하면 최종 선별 출력하게 한다.
여기서 a=3 b=4 c=5 인 경우 a=4 b=3 c=5인 경우 는 같은 삼각형 임으로 i>j 조건을 추가하므로써 중복을 제외하여 올바르게 카운트합니다.


고찰<br/>
3중 반복문을 이용하여 보면서 1학년때 배웠던 반복문 과정들이 복습되어 좋은 기회였습니다.
여기선 pow문이 결과에 영향을 주지 않으므로 형변환을 별도로 필요로 하지 않았습니다.
pow문을 사용하면서 정수연산시 실수형 함수를 사용하는것에 한번더 확인해보는 습관을 들이게 되었습니다.

**32. 피보나치 수열을 생성하여 출력하는 프로그램**

개요<br/>
값을 리셋하면서 최근값과 그 직적의 값의 합을 구하는 것이므로 재귀함수를 사용하여 접근합니다.
첫 값을 0 과 1로 설정하면서 첫 두 값은 출력하고 3번째 f3부터 점차적으로 피보나치 수열을 생성할수있게 코드를 분리하여 생성합니다.
소스코드 <br/>

첫항 0(past) 둘째항 1(now) 로 설정하고 sum값을 이용하여 다음항을 구합니다.
sum= past+now로 다음항을 구한후 past=now 로 now=sum을 해주므로써 반복문이 다음으로 넘어갔을 때 sum값이 그 다음항을 또 구하수 있게 해줍니다. 


고찰<br/>
40 개의 피보나치 부터는 출력이 정상적으로 잘되지만 50개부터 출력에 -(음수)부호가 붙는 것을 확인할수있었습니다.  문법적 오류는 없는 것으로 보여지지만 수를 2진법으로 표기하는 컴퓨터의 시스템상 보수 연산에서 부호연산자에 인지오류가 생기는 것 같은데 해결하는 방법을 찾지 못했습니다 더 조사하여 나중에 수정할수있도록 하고싶습니다.

# 1_4



**3. 두 입력값을 받아 n^k를 계산하는 함수를 사용하여 3^0~3^10까지 출력하기.**<br/>
개요<br/>
pow를 이용하여 n^k를 계산한다 void(리턴값을 가지지 않는)함수를 선언하여 바로 계산값을 출력하게 한다. ^0부터^10까지 출력해야 함으로 반복문을 사용하여 연속해 출력하고 테이블 형식으로 출력하기 위해 규격을 맞추어“=”를 이용해 틀을 만들어 1열 종대로 출력한다.<br/>
소스코드<br/>


ipower()함수는 2개의 int형 입력값을 받지만 문제에서 3^0-3^10까지 출력할 것을 명시하였기 때문에 ipower함수에 (3,i)를 바로 넣어준다 반복문을 이용해 I값을 0-10까지 증가시키면서 연속해 출력되도록한다.<br/>




고찰<br/>
테이블 형식의 출력이 명확히 어떤것인지 감을 잡지 못해 잠시 고민을 했었습니다. 바둑판 형식으로 만들어 볼까 하였지만 1열 종대로 나열하는 것이 보기에 더 깔끔하여 선택했습니다. 다음엔 다양한 형태로 만들어 표현해보고 싶습니다.<br/>

**4. 두 좌표를 입력받아 두 좌표사이 거리를 계산하는 함수를 사용하여 좌표사이 거리를 구하기.**

개요<br/>
sqrt((x1-x2)^2+(y1-y2)^2) 두 좌표사이 거리를 구하는 공식을 이용하여 계산식을 설정한다.
좌표사이 거리는 실수형을 포함 함으로 double형으로 변수들과 함수 반환값 입력값을 설정하여 계산하는 함수를 만든다.
pow sqrt를 사용함으로 #include<cmath>를 선언해준다. <br/>



고찰<br/>
c++에서 입력값과 반환값을 double 형으로 하는 함수를 처음 사용해 보았습니다. 조금은 함수를 사용함에 있어서 적응이 된것같습니다. 과제를 하던중 수업때 배운 중복함수가 떠올라 정수형 입력값을 받는 같은 이름의 함수를 또 만들어 실험을 해보았습니다. 매우 흥미로웠고 함수를 사용하는 코딩에 익숙해지는 시간을 가졌습니다.<br/>

**8. 범위를 입력받아 해당하는 난수를 출력하는 함수를 이용하여 각 난수의 발생확률을 비교하여 근사적으로 같다는 것을 증명하라. 주사위를 600번 굴릴 때 1~6까지의 주사위 눈이 각각 발생할 확률이 근사적으로 같다는걸 증명하라.**

개요<br/>
단순히 주사위에 국한하여 코드를 짜지말고 범위,반복횟수를 입력받아 어떤 경우도 다 계산해 볼 수 있는 코드를 작성한다. 배열을 이용하여 각 발생 빈도수를 측정한다. rand()에 %n , +n을 이용하면 범위를 설정하는 함수를 짤 수 있다. 반복문을 이용하여 각 수의 발생빈도를 카운트 한다.<br/>

소스코드<br/>



rand_range함수를 만든다 범위의 최댓값n1과 최좃값n2를 입력값으로 받고 rand%n1+n2로 n2-n1사이수를 랜덤으로 반환하게 한다.  14번째 줄 while 문을 통해 n(반복횟수를 입력받는변수)번 루프를 돌게 하며 그안에 for(i=n2;i<n1;i++)을 이용하여 I를 n2->n1로 1씩 증가시켜보면서 rand_range의 반환값이 I값과 같다면 선언해둔 배열 all_about의 I번 째를  ++하면서 1씩 카운트해준다(all_about[ i ]++)
그후 특정 수의 빈도수/전체 반복횟수*100=발생확률 임으로 for(i=n2;i<n1;i++)을 이용하여 I를 1씩 증가시키면서 all_about[ I ]/n*100을 모두 계산하여 각 수를 출력해준다.
<br/>
실행결과<br/>
1~6까지의 수 600번 반복(주사위)<br/>

1~10까지의 수 1000번(다른 경우)<br/>

첫 번째 1-6까지의 600번 반복의 결과로 각 수의 발생 통계가 평균 5-6%으로 근사하다는걸 알 수 있습니다.
두 번째 1-10까지의 1000번 반복의 결과로 각 수의 통계가 평균 9-10%으로 근사하다는걸 알 수 있습니다.<br/>
고찰<br/>
이번 과제에서 가장 흥미롭고 재미있었던 과제였습니다. 단순히 주사위의 경우로 한정지어 입력받은후 결과값을 출력하는 코드를 짜보았지만 다른 경우를 다 계산할 수 있는 코드가 더욱 활용도 있을 것 같아서 배열을 이용하여 심화된 코드를 짜 보았습니다. 처음 if문으로 1-6까지 모든 경우를 다 비교하도록 만들었을땐 길이가 괜히 길고 단순하며 조촐한 코드였지만 반복문과 배열의[i] 넘버를 사용하여 한줄로 함축하여 비교하여 계산하는 코드로 바꾼후  더욱 짧아지고 깔끔하며 알차보였습니다. 문제의 요구를 담고서 더욱 활용도 있는 코드로 업그레이드 해보는 시간을 갖게 되어 뿌듯한 과정이었습니다.<br/>
아쉬운점은 배열을 선언할 때 초기 크기를 정해줘야 함으로 (위 코드에서는 all_about[1000]) 범위의 최대값이 한정된다는게 아쉬웠습니다 나중에 이를 개선하여 무한대로 범위를 확장하여 계산할 수 있는 코드를 만들고 싶습니다.<br/>

**10. 메뉴를 출력하는 함수와 입력값을 판단하는 함수를 이용하여 선택한 메뉴를 출력하는 프로그램을 만들어라.**<br/>
개요<br/>
void함수를 이용해 1-4번의 메뉴를 출력하는 함수를 만든다. int함수를 이용해 입력값이 1-4 일 때 1을 출력 else 0을 출력하여 선택을 판단하는 함수를 만든다 
if문을 이용해 선택한 번호(입력값)를 판단하고 그것에 해당하는 메뉴를 출력하는 함수를 각각 만든다.<br/>



실행결과<br/>


번호를 잘못입력하면 잘못입력했다는 출력과 함께 다시 메뉴를 출력한다 알맞은 번호를 입력하면 그에 해당하는 메뉴를 출력한다. 4번을 선택시 종료문구와 함께 종료한다.<br/>
고찰<br/>
2개의 함수를 이용하는 코드를 짜보면서 여러개의 함수를 목적에 맞게 만들어 적절히 분할하는 법을 공부해보는 시간을 가졌습니다. 또한 반환값을 갖는 함수(int)와 그렇지 않는 함수(void)를 이용하면서 함수의 반환형을 필요에 따라 적절히 사용할수있게 되었습니다.

<br/><br/><br/><hr/>


# 2
#### - WEEK 5 :  BASIC 심화(무작위 딱정벌레의 이동 COUNT & MARK)

**1. 5행5열의 배열을 이용하여 딱정벌레가 모든 타일을 지나고난 후 총 이동 횟수와 가장 많이 방문한 방을 출력하라 (교재 250p lab)**

**개요**<br/>
연습장에 기초적인 흐름이나 파악 및 정리해야할 부분을 메모한다(틀린부분이 발견되면 코드를짜는 과정에서 수정하면서 한다.<br/>

연습장 예시)

![image01](https://user-images.githubusercontent.com/68331041/89490455-dfc70200-d7e7-11ea-80cc-90543803492f.png)

<br/>

<br>벌레의 이동방향 0-7에 해당하는 배열의 좌표값의 변화를 수식화 한다. (위 그림의 좌표는 이해을 돕기 위한 예시 배열[3][3] 0-2, 0-2 타일을 1-3 1-3으로 치환해 표기하였다)
다양한 함수를 사용하여 코드를 짤것이기 때문에 함수의 역할을 최대한 세밀화 한다(이동변화 카운트 함수, 방향 정하는 함수 ,이동횟수를 세는 함수 등등) 따라서 main함수를 최대한 간략화 하여 전체 흐름을 파악하기 쉽게 한다.
많은 함수에서 변수들을 사용하기 때문에 const, 전역변수, 지역변수 등를 잘 활용하여 변수선언을 깔끔하게 정리하여 코드가 지저분해 보이지 않게 한다.<br/>


<br>main 함수에서 반복문 do while 문을 통해 방향 선택과 이동 후 좌표의 카운트를 반복하게 한다. rand_walk 와 bug_walk 함수를 반복시킨다. do while 문은 조건 즉 check_string 함수의 반환값에 따라 a의 값을 변경하고 a!=0이되면 do while문을 종료한다.<br/>
**실행결과**<br/>

![image02](https://user-images.githubusercontent.com/68331041/89490570-23217080-d7e8-11ea-8d5e-2c3f2ab45896.png)


바르게 작동했는가 바르게 판단해서 결과를 도출했는가를 확인하기 위해 out_tile함수를 판단하여 배열의 각 좌표들을 출력한다.
다양한 경우의 수로 모든 타일을 지날수있으므로 총 이동횟수는 평균 최소값 120 평균 최대값 650정도로 다양했다.<br/>

**고찰**<br/>
이때 까지 배운 모든 개념을 최대한 활용해 보려고 노력하였습니다. 전역변수들을 사용하여 다양한 함수에서 한번의 선언으로 활용할 수 있어 코드가 많이 깔끔해 졌고 const를 이용해 배열의 주소가아닌 복사본을 받아 반환해보기도하고 반대로 배열의 주소를 받아 메인함수의 배열 자체 즉, 벌레의 이동좌표배열을 다른 함수를 통해  직접 변화를 주기도하면서 이번 주차 수업의 핵심들을 모두 되새겨 보는 과제가 된것같아 뿌듯하고 알찬 과제가 되었습니다. 그리고 함수들을 사용하여 메인함수를 간단히 함으로써 코드를 파악하는 시간이 단축되었고 가독성 또한 좋아져서 좋은 코드를 짠것같아 뿌듯했습니다. 
<br/>


<br/><br/><br/>


# 3
#### - WEEK 6 : C++ NAMESPACE AND 구조체<br/><br/><br/> 

# 4
#### - WEEK 7~10 : C++ 핵심 CLASS (!중요)

# 4_7
# 4_8
# 4_9
# 4_10

<br/><br/><br/> 



