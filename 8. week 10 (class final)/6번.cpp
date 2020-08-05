#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>//string�� ����ϱ� ���� ����.

using namespace std;
//Ŭ���� �̸��� ù���ڸ� �빮�ڷ� �ϰų� _�� ����ش�.
class Shape {
protected:
	char* name;//�̸� ������

public:
	virtual void getSurfaceArea() = 0;//���������Լ� ��üȭ�� ������ x
	
	Shape(const char* name) {
		this->name = new char[strlen(name) + 1];//������!  �Ű������� �ɹ������� �̸��� �������� this�� �̿��� ������ ����. +�޸� �����Ҵ�
		strcpy(this->name, name);               //�Է¹��� ���ڿ� ����.
	    cout << "Shape ������!" << endl;
	}
		          
	virtual ~Shape() {                                 //�Ҹ���
		cout << "Shape �Ҹ���!" << endl;
		delete[] this->name;                   //���ڿ� �޸� �Ҹ�
	}
};

class Sphere :public Shape {
	char* sphname;
	double a;//�������� �Է¹��� ����

public:
    Sphere(const char *p,double ag):Shape(p),a(ag){//������! �ʱ�ȭ ����Ʈ�� �̿��Ͽ� Shape�� name�� Shpere�� �ɹ� ���� a�� �ʱ�ȭ ���ش�. +�޸� �����Ҵ�
		sphname = new char[strlen(p) + 1]; 
		strcpy(sphname, p);
		cout << "Sphere ������!"<< endl;
	}
	
	virtual ~Sphere() {
		cout << "Sphere �Ҹ���!" << endl; //�Ҹ���
		delete[] sphname;
	}
	
	virtual void getSurfaceArea()//�������̵� �� �Լ��� �ڵ����� virtual ȭ �ȴ�.//��ø� ��
	{
		cout <<"�̸�: "<< name <<" ǥ������ " << a*a << " Pi(3.14) �Դϴ�." << endl;
	}
	
};



class Cube :public Shape {
	char* cubname;
	double a, b, c; //�� ���� ���̸� �Է¹��� ����

public:
	Cube(const char *p,double ag, double bg, double cg):Shape(p),a(ag),b(bg),c(cg){//������! �ʱ�ȭ ����Ʈ�� �̿��Ͽ� Shape�� name�� Cube�� �ɹ� ������ �ʱ�ȭ ���ش�. +�޸� �����Ҵ�
		cubname = new char[strlen(p) + 1];
		strcpy(cubname, p);
		cout << "Cube ������!" << endl; }
	
	virtual ~Cube() { cout << "Cube �Ҹ���!" << endl; }

	virtual void getSurfaceArea()//�������̵� �� �Լ��� �ڵ����� virtual ȭ �ȴ�.
	{
		cout << "�̸�: " << name << " ǥ������ " <<2*(a*b)+4*(b*c)<< " cm(2) �Դϴ�." << endl;//������ü�� ������ ���ϴ� �Լ�
	}

};

class Cylinder :public Shape {

	char* cylname;
	double a, b; //�������� ���̸� �Է¹��� �Լ�.

public:
	Cylinder(const char* p, double ag, double bg) :Shape(p), a(ag), b(bg){//������! �ʱ�ȭ ����Ʈ�� �̿��Ͽ� Shape�� name�� Cylinder�� �ɹ� ������ �ʱ�ȭ ���ش�. +�����Ҵ�
		cylname = new char[strlen(p) + 1];
		strcpy(cylname, p);
		cout << "Cylinder ������!"<<endl;
	}
	virtual ~Cylinder() { cout << "Cylinder �Ҹ���!" << endl; }

	virtual void getSurfaceArea()//�������̵� �� �Լ��� �ڵ����� virtual ȭ �ȴ�.
	{
		cout << "�̸�: " << name << " ǥ������ " << (2*a*a)+(2*a*b) << "Pi �Դϴ�." << endl;
	}

};

int main() {
	Shape* x[3];
	int i;
	x[0] = new Sphere("��",2);//������ ȣ��
	x[1] = new Cube("ť��",2,3,4);
	x[2] = new Cylinder("�����",2,3);
	
	cout << endl;
	for (i = 0; i < 3; i++) {//for���� ���� �����ϴ� �ڽ�class�� �������̵� �� �Լ��� �����Ѵ�.
		
		cout << endl;
		
		x[i]->getSurfaceArea();//�����ϴ� �����Լ��� ȣ���Ѵ�.
	   
		cout << endl;

	   delete x[i];//�Ҹ��� ȣ��
	}
	
	system("pause");
	return 0;
}
