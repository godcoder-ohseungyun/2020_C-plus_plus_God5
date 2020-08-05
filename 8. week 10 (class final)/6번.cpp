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
