# C++ source code document<br/>
# 0
#### 주제:바로가기<br/><br/>
##### [1. WEEK 2~4 : C에 기반을둔 기본 프로그래밍 설명](#1)
+ [1-2](#1_2)
+ [1-3](#1_3)
+ [1-4](#1_4)
##### [2. WEEK 5 : PROJECT_심화(무작위 딱정벌레의 이동 COUNT & MARK)](#2)
##### [3. WEEK 6 : C++ NAMESPACE AND 구조체](#3)
##### [4. WEEK 8~10 : C++ 핵심 CLASS (!)](#4)
+ [4-8](#4_8)
+ [4-9](#4_9)
+ [4-10](#4_10)
+ [ERROR 해결](#에러해결)
<br/><br/>
 
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
+ [위로가기](#0)

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
+ [위로가기](#0)


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
+ [위로가기](#0)

#### - WEEK 5 : 심화 PROJECT (무작위 딱정벌레의 이동 COUNT & MARK)

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


<br/><br/><br/><hr/>


# 3
+ [위로가기](#0)
#### - WEEK 6 : C++ NAMESPACE AND 구조체<br/><br/><br/> 

**1.월급과 소득세율을 합하여 출력하는 프로그램을 만들어라(월급은 레퍼런스로 소득세율은 주어지지 않으면 디폴트 사용)**

**개요**<br/>
월급+(월급*소득세율/100) => 구하고자하는 반환값
함수를 선언하고 월급은 &a 레퍼런스로 받는다.
소득세율이 주어지지 않는 경우엔 double b=20 디폴트 값을 지정해준다(디폴트값은 뒤에서부터 지정이 가능하다.)
if문을 이용하여 소득세율을 아는 경우, 모르는 경우로 나누어 함수에 값을 전달한다.
금번주차 내용 복습을 위하여 using을 사용하여 사용할 변수와 함수의 이름 공간을 저당한다.
endl을 이용하여 출력창에서 가독성이 좋게 만든다<br/>


굳이 사용하지 않아도 되지만 복습을 위해 namespace Salary를 사용하여 이름공간을 익혀보는 코드를 구성하였다.
if문으로 디폴트값을 사용하는 경우 아닌경우로 나누어 출력시킨다.<br/>


**2.원기둥의 부피를 구하는 프로그램을 작성하라.(높이가 주어지지 않으면 디폴트 사용)**

**개요**<br/>
부피=반지름*반지름*Pi(3.14)*높이 이를 반환하는 함수를 만든다.
복습을 위하여 using을 사용하여 함수와 변수의 이름 공간을 할당해본다.
if문을 사용하여 높이를 아는 경우 모르는 경우로 나누어 코드를 진행한다.
함수에 높이 부분에 디폴트 값을 1.0을 주어 높이를 전달하지 않는 경우 자동으로 1.0을 사용하게 한다.
endl을 이용하여 출력창에서 가독성이 좋게 만든다<br/>

**2.대출금의 이율을 통해 월 이자를 출력하는 프로그램을 작성하라.(레퍼런스 매개변수 사용)**<br/>
**개요**<br/>
발생하는 이자=대출금*이율/100을 계산하는 함수를 만든다
함수에 레퍼런스 변수를 사용하여 계산하도록 한다
void형태로 함수를 선언하여 값이 반환되는게 아닌 함수 내에서 출력되게 한다
endl을 이용하여 출력창에서 가독성이 좋게 만든다<br/>

**고찰**<br/>
디폴트매개변수의 활용은 수업이후 아 이래서 필요하구나 하는 느낌이 있었지만 레퍼런스에 있어서는 포인터처럼 그 활용에 있어서 애매한 느낌이 있었습니다. 이번 과제를 하면서 이런 코드에 레퍼런스를 <br/>
사용할 필요가 굳이 있는가? 라는 의문을 가졌었고 우선 선언이나 사용법을 익힌다는 생각으로 과제 수행이후 개발자 커뮤니티에 질문을 올려 더욱 복잡한 코드에서 디폴트, 래퍼런스와 포인터의 역할은 더욱 중요해 진다는 것을 알게 되었고 이번 수업에 중요도를 알게되었습니다.<br/>
과제 제시 조건에는 없었지만 금주차 내용중 using이라는 것을 배우면서 c++에 들어온 이후 namespace std;의 선언 이유를 알게되었고 cout cin을 편하게 사용해 오면서 using의 편의성을 깨달았고 사용법을 익히고자 각 코드에 using을 사용하여 함수와 변수를 할당해보았습니다.
<br/>앞으로는 using을 적절히 사용하며 복잡한 코드를 완성 할 때 좋은 가독성을 유지하도록 하겠습니다.
고로 금번 주차는 복잡한 코드를 코딩하는데 많은 도움을 주는 요소들을 학습하게 된것같습니다.
<br/><br/><br/><hr/>


# 4

#### - WEEK 8~10 : C++ 핵심 CLASS (!중요)

# 4_8
+ [위로가기](#0)

**개요**
1. class의 기초를 확실히 익혀야 한다 예를들면 맴버변수,함수 선언/참조형식: 객체.(변수,함수)
2. class중괄호 밖에서 함수를 정의할땐 name::함수 형식을 따른다.
3. 변수는 정보은닉에따라 외부접근을 방지하기위해 접근제어 private를 이용해 선언한다
4. 값을 넣는 set(설정자) 이 값을 반환해주는 get(접근자)의 개념을 이용해 클래스 맴버를 이용한다.
5. class에 각 문제에서 요구하는 변수,함수를 정의하여 사용하지만 main()함수의 지역변수나 일반적인 
함수도 필요에 따라 만들어서 사용한다.
6. 조금 더 활용도있는 코드를 위해 값을 입력받아 이행하는 형식의 코드를 만든다.

**6번. class를 작성하여 복소수 12+17.9i를 출력하고 합차연산을 정의하라(접근자 설정자 포함)**

+ 1 12+17.9를 출력하기 위해 이용되는 맴버변수
+ 2 main에서 실수와 허수를 입력받아 덧셈뺄셈 연산에 이용되는 복소수를 만들기위한 맴버변수이다 <br/>

**소스코드**<br/>
addsub맴버함수에서 if문을 통해 R2,NR2 즉 입력받은 복소수의 실수와 허수부 크기를 기존 12+17.9i와 비교하여 알맞은 연산을 이행한다<br/> 
main에서 변수 2개를 선언해 맴버변수에 그 값을 입력시킨다. do~while에서 덧셈1 뺄셈0 종료2 선택
지를 입력받은후 입력값을 addsub에 인가하여 알맞은 연산을 이행시킨다.<br/>

**7번. class를 작성하여 삼각형의 면적을 구하라. (접근자 설정자 포함)**

**8번. 본문 bankaccount클래스에 계좌이체의 관한 맴버함수를 추가하고 실행하라.**

+ 더 명확한 구분을 위해서 계좌번호와 예금주이름을 출력하게끔 코드를 수정했습니다. <br/>

**실행결과**<br/>

![image03](https://user-images.githubusercontent.com/68331041/89492459-94632280-d7ec-11ea-954a-c98dcc709e56.png)

<br/>**고찰**<br/>
수업을 듣고나서 과제를 하기전까진 별로 어렵지 않은 내용이라고 생각했습니다. 하지만 과제를 하던도중 자꾸 난관에 부딪히게 되었고 설정자,접근자,맴버변수(private)의 개념이 정확히 숙지되지 않았다는걸 깨달았고 다른 **외부자료**들을 가지고 보충하여 과제를 수행하였습니다. 한번더 교재와 수업을 듣고 개념을 완벽히 숙지해야 할것같습니다.<br/>       
마지막 8번 문제 코드에서 가장 의문점이 많았는데 나머지는 모두 해결하였지만 **transfer함수 부분을 초기에 설정할 때 값을 반환하는게 아닌 otherAccount.deposit(amount)이런식으로 객체1.함수에서 객체2.함수를 불러와 balance값을 변경시켰었습니다. 하지만 예상과 달리 otherAccount.deposit(amount)이 문장은 전혀 작동을 하지 않았고 결국 삭제하고 return값으로 amount를 반환한뒤 메인에서 객체2.함수를 불러와 값을 수정하였습니다.** 처음엔 객체1.함수내부에서 객체2.함수를 불러오면 작동하지 않는가?를 생각했었으나 public: 으로 설정된 함수들이라 이상이 없었습니다. 그럼 balance가 private: 변수로 설정되어있어 참조가 되지않는가? 그것또한 이상이 없었습니다. 무언가 **논리적인 에러가** 있는것같은데 개발자 단체톡에 물어봐도 명확한 해답을 얻을수없었습니다. 교수님께 질문드려봅니다,,(객체1=>account 객체2=>account2를 의미합니다.)<br/><br/><hr/>



# 4_9
+ [위로가기](#0)

**개요**<br/>
+ 문제 풀이에 이용할 사항과 주의사항:<br/>
+ class shape 맴버변수 x,y일때<br/>
+ shape(int ax,int ay):x(ax),y(ay){}//부모<br/>
+ Rectangle(int x=0,int y):shape(x,y){}//자손<br/>
+ 자손class Rectangle은 초기화를 이용하여  부모class shape를 호출하는데 호출이 없으면 default 생성자를 자동 호출하기 때문에 매개변수를 이용하는 경우 무조건 :shape(x,y)를 활용해야한다.<br/>
+ 자손은 부모클래스의 맴버를 사용함으로써 상속은 중복을 줄여준다 but private는 접근자,설정자 setget으로 접근해야한다. [protected]는 자손클래스만 사용할 수 있다.<br/>
+ **overiding** 즉 재정의: 자손클래스에서 부모클래스에있는 함수를 재정의 하는 것을 이용한다. 이때 두 함수의 이름은 무조건 같아야한다.(overloading과 혼동 x)<br/>
위 사항들을 기반으로 아래 문제들을 풀이한다.<br/>

**2. person클래스를 만들고 이를 상속받는 customer클래스를 생성하라.**


**실행결과**

![1](https://user-images.githubusercontent.com/68331041/89492928-c4f78c00-d7ed-11ea-8a9e-ed546886ce80.png)

+부모클래스 생성->자손클래스 생성->자손클래스 소멸->부모클래스 소멸 순인걸 확인할 수 있다.
+자손클래스로 부모클래스 맴버를 변경할수있다는걸 확인할수 있다.<br/>

**3.book클래스를 만들고 이를 상속받는 magazine클래스를 생성하라.**<br/>

+이번 문제는 자손클래스에서 부모클래스의 맴버를 사용할수있다는걸 명시하기위해 재정의 상속 항을 생성하였다.
+이번 강의의 핵심이다.(재정의,상속 등)

**실행결과**

![2](https://user-images.githubusercontent.com/68331041/89492936-ca54d680-d7ed-11ea-8bb6-2e83cb0215ec.png)

**고찰**

+이번 스텝에서는 상속에 대한 기본적인 활용과 매커니즘을 학습하였습니다. 기본적인 사항이라 어려움은 없지만 잦은 연습과 코딩으로 손에 익혀 빠르고 자유롭게 사용해야겠습니다. 아직은 손에 익지않아 중간중간 멈칫하며 앞 내용을 살피지만 많은 연습으로 극복하겠습니다. 이번 과제 수행을 통해 **상속을 선언하는방법(자손클래스에서 : 부모클래스)** 거기에 부가적으로 **생성자를 통해 부모클래스의 초기화하는방법** , **맴버함수의 재정의(overiding)** 등 기본사항을 연습할수있었습니다. 그리고 전체적인 클래스(Class)라는 코드의 돌아가는 **매커니즘** 의 흐름을 익힐수있었고 어떻게 작용하는지도 좀더 익숙해 질수있었습니다. 앞으로 더 잦은 연습으로 몸에 익히도록 하겠습니다.

# 4_10
+ [위로가기](#0)

**개요**

**코트 만들 때 주의사항:**<br/>
+ 다형성과 상속의 개념을 잘 이해해야한다.  **VIRTUAL** 을 이용해서 재정의할 함수,소멸자를 만들어줘야 한다. 그래야 객체가 참조하는 클래스의 함수를 호출할 수 있고 소멸자도 올바르게 호출된 클래스를 소멸시킨다.<br/>
+ 이름변수는 char*를 이용하여 입력받을 것인데 이때 동적 메모리 할당을 이용해주고 delete로 **동적메모리를 사용후 반납** 해주자.<br/>
+ 7번의 경우 왠만하면 생성자로 맴버변수들의 값을 결정하지만 문제에서 요구하는데로 설정자,접근자를 이용하여 맴버변수를 컨트롤하도록 기능을 추가해 주자.<br/>
+ 오버라이딩(Overiding)시 맴버변수 이름 함수이름 등등 부모객체의 함수와 동일하게 구성하여 주어야 재정의가 성립한다는걸 인지하자.<br/>
+ 순수가상함수가 포함된다면 객체를 선언할수 없다는걸 알아두자.<br/>
+ 7번은 소 문제 1,2,3을 모두 한 코드로 합쳐서 구현할 것이다.<br/>
<br/>
**6. 3차원 도형을 칠하는데 필요한 페인트량을 계산하는 프로그램**<br/>
 **소스코드** <br/>
 
 <pre><code>{
 #define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>//string을 사용하기 위해 선언.

using namespace std;
//클래스 이름은 첫글자를 대문자로 하거나 _로 띄어준다.
class Shape {
protected:
	char* name;//이름 포인터

public:
	virtual void getSurfaceArea() = 0;//순수가상함수 구체화할 내용이 x
	
	Shape(const char* name) {
		this->name = new char[strlen(name) + 1];//생성자!  매개변수와 맴버변수의 이름이 같음으로 this를 이용해 구분해 주자. +메모리 동적할당
		strcpy(this->name, name);               //입력받은 문자열 복사.
	    cout << "Shape 생성자!" << endl;
	}
		          
	virtual ~Shape() {                                 //소멸자
		cout << "Shape 소멸자!" << endl;
		delete[] this->name;                   //문자열 메모리 소멸
	}
};

class Sphere :public Shape {
	char* sphname;
	double a;//반지름을 입력받을 변수

public:
    Sphere(const char *p,double ag):Shape(p),a(ag){//생성자! 초기화 리스트를 이용하여 Shape의 name과 Shpere의 맴버 변수 a를 초기화 해준다. +메모리 동적할당
		sphname = new char[strlen(p) + 1]; 
		strcpy(sphname, p);
		cout << "Sphere 생성자!"<< endl;
	}
	
	virtual ~Sphere() {
		cout << "Sphere 소멸자!" << endl; //소멸자
		delete[] sphname;
	}
	
	virtual void getSurfaceArea()//오버라이딩 된 함수는 자동으로 virtual 화 된다.//명시만 함
	{
		cout <<"이름: "<< name <<" 표면적은 " << a*a << " Pi(3.14) 입니다." << endl;
	}
	
};



class Cube :public Shape {
	char* cubname;
	double a, b, c; //각 변의 길이를 입력받을 변수

public:
	Cube(const char *p,double ag, double bg, double cg):Shape(p),a(ag),b(bg),c(cg){//생성자! 초기화 리스트를 이용하여 Shape의 name과 Cube의 맴버 변수를 초기화 해준다. +메모리 동적할당
		cubname = new char[strlen(p) + 1];
		strcpy(cubname, p);
		cout << "Cube 생성자!" << endl; }
	
	virtual ~Cube() { cout << "Cube 소멸자!" << endl; }

	virtual void getSurfaceArea()//오버라이딩 된 함수는 자동으로 virtual 화 된다.
	{
		cout << "이름: " << name << " 표면적은 " <<2*(a*b)+4*(b*c)<< " cm(2) 입니다." << endl;//직육면체의 면적을 구하는 함수
	}

};

class Cylinder :public Shape {

	char* cylname;
	double a, b; //반지름과 높이를 입력받을 함수.

public:
	Cylinder(const char* p, double ag, double bg) :Shape(p), a(ag), b(bg){//생성자! 초기화 리스트를 이용하여 Shape의 name과 Cylinder의 맴버 변수를 초기화 해준다. +동적할당
		cylname = new char[strlen(p) + 1];
		strcpy(cylname, p);
		cout << "Cylinder 생성자!"<<endl;
	}
	virtual ~Cylinder() { cout << "Cylinder 소멸자!" << endl; }

	virtual void getSurfaceArea()//오버라이딩 된 함수는 자동으로 virtual 화 된다.
	{
		cout << "이름: " << name << " 표면적은 " << (2*a*a)+(2*a*b) << "Pi 입니다." << endl;
	}

};

int main() {
	Shape* x[3];
	int i;
	x[0] = new Sphere("원",2);//생성자 호출
	x[1] = new Cube("큐브",2,3,4);
	x[2] = new Cylinder("원기둥",2,3);
	
	cout << endl;
	for (i = 0; i < 3; i++) {//for문을 통해 참조하는 자식class의 오버라이딩 된 함수에 접근한다.
		
		cout << endl;
		
		x[i]->getSurfaceArea();//참조하는 가상함수를 호출한다.
	   
		cout << endl;

	   delete x[i];//소멸자 호출
	}
	
	system("pause");
	return 0;
}
}</code></pre>




<br/>
+ 소멸자는 virtual로 설정해주었다. 이후 원활한 소멸자 호출을 위하여
+ 생성자에서 선언한 매개변수는 함수 종료시 소멸 됨으로 클래스의 맴버 변수와 이름이 같아도 무관하다.
+ delete[] to 동적할당 문자열 메모리 소멸
<br/>
상속에 따라 부모클래스 생성자->자식클래스 생성자를 생성함을 확인할 수 있고 소멸은 그 역순임을 확인할 수 있다.<br/>




<br/>
**7. Pruduct클래스를 만들고 할인율을 계산하는 자식 클래스 DiscountPruduct를 만들어 구현하는 프로그램**
<br/>
**소스코드** <br/>

<pre><code>{
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>//string을 사용하기 위해 선언.

using namespace std;
//클래스 이름은 첫글자를 대문자로 하거나 _로 띄어준다.
class Pruduct {
protected://protected 상속받은 자손은 접근제어가 가능하다.
	char* name;//이름
	double price;//가격

public:
	Pruduct() {}//기본생성자

	Pruduct(const char* name, double gprice) {//맴버변수의 디폴트 값을 준다. 
		this->name = new char[strlen(name) + 1];//생성자!  매개변수와 맴버변수의 이름이 같음으로 this를 이용해 구분해 주자. +메모리 동적할당
		strcpy(this->name, name);    //입력받은 문자열 복사.      
		price = gprice;
		cout << " Pruduct 생성자!" << endl;
	}

	virtual ~Pruduct() {                                 //소멸자
		cout << " Pruduct 소멸자!" << endl;
		delete[] this->name;                   //동적할당한 문자열 메모리 소멸
	}
	
		void setname(const char* name) {//name설정자
			strcpy(this->name,name);
		}

		char* getname() {//name 접근자
			return this->name;
		}

		void setprice(double sprice) {//price 설정자
			price = sprice;
		}

		double getprice() {//price 접근자.
			return price;
		}
	
	virtual double getPrice() {//순수가상함수로 해버리면 Pruduct는 객체를 선언할수없다!.
		return price;
	};//순수가상함수 아래 자손클래스에서 구체화 재정의 예정.

	virtual void print() {
		cout << "Pruduct 이름: " << name << " 가격: $ " << price << ". " << endl;//현 객체의 상태 출력.
	}
};

class DiscountPruduct :public Pruduct {
	char* D_name;
	double discount;

public:
	DiscountPruduct(){}//기본생성자

	DiscountPruduct(const char* name, double gpr, double gdi) :Pruduct(name, gpr), discount(gdi) {//생성자 매개변수 name은 함수 종료시 소멸 됨으로 이름이 같아도 무관하다. //맴버변수의 디폴트 값을 준다. 
		D_name = new char[strlen(name) + 1];
		strcpy(D_name, name);
		cout << " DiscountPruduct 생성자!" << endl;
	}

	virtual ~DiscountPruduct() {
		cout << " DiscountPruduct 소멸자!" << endl;
		delete[] D_name;
	}
	
		void setname(const char* name) {//D_name설정자
			strcpy(this->D_name,name);
		}

		char* getname() {//D_name 접근자
			return this->D_name;
		}

		void setdis(double gd) {//discount 설정자
			discount = gd;
		}

		double getdis() {//discount 접근자.
			return discount;
		}
	
	virtual double getPrice() {
		return (price - (price * discount / 100));//할인을 적용한 물건의 가격
	}

	virtual void print() {
		cout << "DiscountPruduct  이름: " << D_name << " 가격: $ " << getPrice() << ". " << endl;//현 객체의 상태 출력.
	}
};

int main() {
	Pruduct a1("                      ",0);  //생성자 호출
	DiscountPruduct a2("                      ",0,0);
	a1.setname("치간칫솔");//설정자
	a1.setprice(1200);//접근자
	a1.print();
	a2.setname("할인된 치간칫솔");//설정자
	a2.setprice(1300);//접근자
	a2.print();

	
	cout << endl;
	cout << endl;

    Pruduct* p1 = new Pruduct("칫솔", 3000);
	Pruduct* p2 = new DiscountPruduct("칫솔", 3000, 15);
	cout << p1->getPrice() << endl;
	cout << p2->getPrice() << endl;

	delete p1;//소멸자 호출
	delete p2;
	
	system("pause");
	return 0;
}
}</code></pre>

<br/>
+ char*로 name을 받기 때문에 메모리 동적할당이 필수적이었고 생성자에서 메모리 동적할당과 복사를 정의해 주었다
+ 이름(name)을 *로 받기 때문에 설정자에서 =이 아니라 strcpy를 이용하여 설정자를 구성한다.
+ main()에서 처음 구간은 설정자,접근자의 정상작동을 보이기위하여 구성하였다. 
+ 두번째 구간은 소문제 3번의 출력화면을 재현한 것이고 정상적으로 동작함을 확인할수있었다.<br/>
+ **main첫번째 두 번째 줄 생성자 호출에서 디폴트값을 충분히 주어야 char*배열에 동적할당이 넉넉히 들어가 아래 입력시 오버플로우가 발생하지 않는다**
<br/>
**고찰**<br/>
이제는 클래스,상속,동적할당,메모리반납,가상함수 등 자유롭게 응용하여 사용할수있도록 감을 잡은것같습니다. 이 단원이 참조가 많고 코드의 이동이 많은 특징을 가졌지만 큰 클의 맥락과 흐름을 이해한다면 확실히 분석이 빠르고 수정이 손쉬웠습니다. <br/>객체지향 프로그래밍의 장점을 깨닫는 시간이 아니었나 생각이 들고 요즘 게임을 코딩하는 것을 공부하는데 확실히 클래스의 기능들이 많이 쓰이는걸 발견할수있었습니다. <br/>객체지향 프로그래밍을 잘 활용하여 앞으로 실전에서 사용될 코드를 짜는 연습을 많이 해보면 도움이 될것같습니다. <br/><br/>


# 에러해결

이런 에러가 7번에서 발생하였는데 처음생성자에서 **char*동적할당된 메모리보다 이후 입력이 더 커서 오버플로우가 발생하여 일어나는 에러였습니다.**  처음 동적할당을 넉넉히 바꾸어 해결하였습니다.!

![1](https://user-images.githubusercontent.com/68331041/89493362-f58bf580-d7ee-11ea-9643-596ba8fb02a4.PNG)



<br/><br/><br/> 



