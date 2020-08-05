#include<iostream>
#include<string>//string을 사용하기 위해 선언.
using namespace std;
//클래스 이름은 첫글자를 대문자로 하거나 _로 띄어준다.
class Food {//부모 클래스 
	double kcal;//맴버변수: 자동으로 private로 선언되어 설정자 접근자로만 접근가능하다.
	double bill;
	double kg;
public:
	Food(double n=0, double b=0, double c=0) :kcal(n), bill(b), kg(c) {//클래스의 생성자 매개변수를 받아 초기화한다.
		cout << "food클래스 생성자" << endl;
	}
	~Food() {                                      //food 소멸자
		cout << "food 소멸자"<<endl;
	}
	void setname(double n){//맴버변수 설정자
		kcal = n;
	}
	
	void setpage(double b) {
		bill = b;
	}
	
	void setwriter(double c) {
		kg = c;
	}
	
	double getname() {//맴버변수 접근자
		return kcal;
	}
	
	double getpage() {
		return bill;
	}
	
	double getwriter() {
		return kg;
	}

	void print() {
		cout << "칼로리: " << kcal << "kcal  가격: " << bill << "원.  중량: " << kg<<"kg"<< endl;//book클래스 상태 출력하는 함수.
    }
};

class Melon :public Food {//book클래스를 상속받는 자손 class magazine
	
	string place;
	int date;
public:
	Melon(double n =0, double a=0, double b = 0,string c=" ", int d = 0) :Food(n,a,b), place(c),date(d) {//melon클래스 생성자 맴버변수로 값을 초기화하고 Food클래스를 불러와 초기화시킨다.
		cout << "Melon생성자" << endl;
	}
	~Melon() {//melon 클래스 소멸자
		cout << "Melon소멸자" << endl;
	}
	void setplace(string c) {
		place = c;
	}

	void setdate(int d) {
		date = d;
	}

	string getplace(){
		return place;
	}

	int getdate() {
		return date;
	}

	void print() {//melon클래스 상태를 출력하는 함수 +오버라이딩=>함수의 재정의!!
		Food::print();         //부모클래스의 print함수를 불러온다. cout<< get~로 대체 가능하다. 
		cout << "경작농원정보: " <<place<<"  유통일자: " << date << endl; 
	}
};

int main()
{
	Melon c(1003,10000,5,"강원도 홍천 11사단 화랑길 군필고랭지농원 33번지 111-23",20190910 );
	
	c.print();
  
	system("pause");
	return 0;
}
