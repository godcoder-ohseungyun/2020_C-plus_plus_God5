#include<iostream>
#include<string>//string�� ����ϱ� ���� ����.
using namespace std;
//Ŭ���� �̸��� ù���ڸ� �빮�ڷ� �ϰų� _�� ����ش�.
class Person {//�θ� Ŭ���� 
	string name;//�ɹ�����: �ڵ����� private�� ����Ǿ� ������ �����ڷθ� ���ٰ����ϴ�.
	int address;
	int number;
public:
	Person(string n=" ", int b=0, int c=0) :name(n), address(b), number(c) {//personŬ������ ������ �Ű������� �޾� �ʱ�ȭ�Ѵ�.
		cout << "personŬ���� ������" << endl;
	}
	~Person() {                                      //person �Ҹ���
		cout << "person �Ҹ���"<<endl;
	}
	void setname(string n){//�ɹ����� ������
		name = n;
	}
	
	void setaddress(int b) {
		address = b;
	}
	
	void setnumber(int c) {
		number = c;
	}
	
	string getname() {//�ɹ����� ������
		return name;
	}
	
	int getaddress() {
		return address;
	}
	
	int getnumber() {
		return number;
	}

	void print() {
		cout << "�̸�: " << name << "  �ּ�: " << address << "  ��ȭ ��ȣ: " << number<< endl;//personŬ���� ���� ����ϴ� �Լ�.
    }
};

class Customer :public Person {//personŬ������ ��ӹ޴� �ڼ� class Customer
	int customer_number;//customerŬ���� �ɹ�����.
	int mile;
public:
	Customer(string n = " ",int a=0,int b = 0, int c = 0, int d = 0) :Person(n,a,b), customer_number(c), mile(d) {//customerŬ���� ������ �ɹ������� ���� �ʱ�ȭ�ϰ� personŬ������ �ҷ��� �ʱ�ȭ��Ų��.
		cout << "customer ������" << endl;
	}
	~Customer() {//customer Ŭ���� �Ҹ���
		cout << "customer �Ҹ���" << endl;
	}
	void setcustomer_number(int c) {//customerŬ���� �ɹ�����  ������.
		customer_number = c;
	}

	void setmile(int d) {
		mile = d;
	}

	int getcustomer_number() { //customerŬ���� �ɹ����� ������.
		return customer_number;
	}

	int getmile() {
		return mile;
	}

	void print() {//customerŬ���� ���¸� ����ϴ� �Լ� +�������̵�=>�Լ��� ������!!
		Person::print();         //�θ�Ŭ������ print�Լ��� �ҷ��´�. cout<< get~�� ��ü �����ϴ�. 
		cout << " ����ȣ: " << customer_number << "�� ���Դϴ�.  ���ϸ���: " << mile << endl; 
	}
};

int main()
{
	Customer c("������",200013339,0102321132,100201,3);
	
	c.print();

	system("pause");
	return 0;
}
