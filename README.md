# C++ source code document<br/>
#### 주제:바로가기<br/><br/>
##### 1. WEEK 2~4 : C에 기반을둔 기본 프로그래밍
##### 2. WEEK 5 : BASIC 심화(무작위 딱정벌레의 이동 COUNT & MARK)
##### 3. WEEK 6 : C++ NAMESPACE AND 구조체
##### 4. WEEK 7~10 : C++ 핵심 CLASS (!)<br/><br/><br/>
### **C++ 학습내용을 저장**  <br/><br/><br/>
#### - WEEK 2~4 : C에 기반을둔 기본 프로그래밍 <br/><br/> 
  

***visual과 달리 exe프로그램을  따로 실행했을 때 결과값이 나왔지만 바로 종료되버리는 상황이 있었습니다. return 0; 전에 system(“pause”) 추가로 해결하였습니다.**  
  
  
  
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



#### - WEEK 5 :  BASIC 심화(무작위 딱정벌레의 이동 COUNT & MARK)


#### - WEEK 6 : C++ NAMESPACE AND 구조체


#### - WEEK 7~10 : C++ 핵심 CLASS (!중요)


