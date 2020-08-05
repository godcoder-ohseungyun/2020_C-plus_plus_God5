#include<iostream>
#include<string>//string을 사용하기 위해 선언.
using namespace std;
//클래스 이름은 첫글자를 대문자로 하거나 _로 띄어준다.
class Person {//부모 클래스 
	string name;//맴버변수: 자동으로 private로 선언되어 설정자 접근자로만 접근가능하다.
	int address;
	int number;
public:
	Person(string n=" ", int b=0, int c=0) :name(n), address(b), number(c) {//person클래스의 생성자 매개변수를 받아 초기화한다.
		cout << "person클래스 생성자" << endl;
	}
	~Person() {                                      //person 소멸자
		cout << "person 소멸자"<<endl;
	}
	void setname(string n){//맴버변수 설정자
		name = n;
	}
	
	void setaddress(int b) {
		address = b;
	}
	
	void setnumber(int c) {
		number = c;
	}
	
	string getname() {//맴버변수 접근자
		return name;
	}
	
	int getaddress() {
		return address;
	}
	
	int getnumber() {
		return number;
	}

	void print() {
		cout << "이름: " << name << "  주소: " << address << "  전화 번호: " << number<< endl;//person클래스 상태 출력하는 함수.
    }
};

class Customer :public Person {//person클래스를 상속받는 자손 class Customer
	int customer_number;//customer클래스 맴버변수.
	int mile;
public:
	Customer(string n = " ",int a=0,int b = 0, int c = 0, int d = 0) :Person(n,a,b), customer_number(c), mile(d) {//customer클래스 생성자 맴버변수로 값을 초기화하고 person클래스를 불러와 초기화시킨다.
		cout << "customer 생성자" << endl;
	}
	~Customer() {//customer 클래스 소멸자
		cout << "customer 소멸자" << endl;
	}
	void setcustomer_number(int c) {//customer클래스 맴버변수  설정자.
		customer_number = c;
	}

	void setmile(int d) {
		mile = d;
	}

	int getcustomer_number() { //customer클래스 맴버변수 접근자.
		return customer_number;
	}

	int getmile() {
		return mile;
	}

	void print() {//customer클래스 상태를 출력하는 함수 +오버라이딩=>함수의 재정의!!
		Person::print();         //부모클래스의 print함수를 불러온다. cout<< get~로 대체 가능하다. 
		cout << " 고객번호: " << customer_number << "번 고객입니다.  마일리지: " << mile << endl; 
	}
};

int main()
{
	Customer c("오승윤",200013339,0102321132,100201,3);
	
	c.print();

	system("pause");
	return 0;
}
