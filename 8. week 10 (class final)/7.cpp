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
	Pruduct a1("                      ",0);  
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