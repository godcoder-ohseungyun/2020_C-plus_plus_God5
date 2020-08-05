#include<iostream>
#include<string>//string을 사용하기 위해 선언.
using namespace std;
//클래스 이름은 첫글자를 대문자로 하거나 _로 띄어준다.
class Book {//부모 클래스 
	string name;//맴버변수: 자동으로 private로 선언되어 설정자 접근자로만 접근가능하다.
	int page;
	string writer;
public:
	Book(string n=" ", int b=0, string c=" ") :name(n), page(b), writer(c) {//클래스의 생성자 매개변수를 받아 초기화한다.
		cout << "book클래스 생성자" << endl;
	}
	~Book() {                                      //book 소멸자
		cout << "book 소멸자"<<endl;
	}
	void setname(string n){//맴버변수 설정자
		name = n;
	}
	
	void setpage(int b) {
		page = b;
	}
	
	void setwriter(string c) {
		writer = c;
	}
	
	string getname() {//맴버변수 접근자
		return name;
	}
	
	int getpage() {
		return page;
	}
	
	string getwriter() {
		return writer;
	}

	void print() {
		cout << "이름: " << name << "  페이지: " << page << "  저자: " << writer<< endl;//book클래스 상태 출력하는 함수.
    }
};

class Magazine :public Book {//book클래스를 상속받는 자손 class magazine
	
	int date;
public:
	Magazine(string n = " ",int a=0,string b = " ", int d = 0) :Book(n,a,b), date(d) {//magazine클래스 생성자 맴버변수로 값을 초기화하고 book클래스를 불러와 초기화시킨다.
		cout << "Magazine생성자" << endl;
	}
	~Magazine() {//magazine 클래스 소멸자
		cout << "Magazine소멸자" << endl;
	}
	
	void setdate(int d) {
		date = d;
	}

	
	int getdate() {
		return date;
	}

	void print() {//magazine클래스 상태를 출력하는 함수 +오버라이딩=>함수의 재정의!!
		Book::print();         //부모클래스의 print함수를 불러온다. cout<< get~로 대체 가능하다. 
		cout <<  "출판일자(코드): " << date << endl; 
	}
};

int main()
{
	Magazine c("나도상속고수",500,"오승윤",20200531);
	
	c.print();
    c.setname("하늘과 바람과 별과 시");//상속 클래스에서 부모 클래스의 맴버를 받는다는걸 확인할수있다.
	c.setwriter("윤동주");
	c.print();//접근자 설정자로 변경후 다시 프린트
	system("pause");
	return 0;
}
