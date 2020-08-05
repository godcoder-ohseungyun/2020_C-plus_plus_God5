#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>//string�� ����ϱ� ���� ����.

using namespace std;
//Ŭ���� �̸��� ù���ڸ� �빮�ڷ� �ϰų� _�� ����ش�.
class Pruduct {
protected://protected ��ӹ��� �ڼ��� ������� �����ϴ�.
	char* name;//�̸�
	double price;//����

public:
	Pruduct() {}//�⺻������

	Pruduct(const char* name, double gprice) {//�ɹ������� ����Ʈ ���� �ش�. 
		this->name = new char[strlen(name) + 1];//������!  �Ű������� �ɹ������� �̸��� �������� this�� �̿��� ������ ����. +�޸� �����Ҵ�
		strcpy(this->name, name);    //�Է¹��� ���ڿ� ����.      
		price = gprice;
		cout << " Pruduct ������!" << endl;
	}

	virtual ~Pruduct() {                                 //�Ҹ���
		cout << " Pruduct �Ҹ���!" << endl;
		delete[] this->name;                   //�����Ҵ��� ���ڿ� �޸� �Ҹ�
	}
	
		void setname(const char* name) {//name������
			strcpy(this->name,name);
		}

		char* getname() {//name ������
			return this->name;
		}

		void setprice(double sprice) {//price ������
			price = sprice;
		}

		double getprice() {//price ������.
			return price;
		}
	
	virtual double getPrice() {//���������Լ��� �ع����� Pruduct�� ��ü�� �����Ҽ�����!.
		return price;
	};//���������Լ� �Ʒ� �ڼ�Ŭ�������� ��üȭ ������ ����.

	virtual void print() {
		cout << "Pruduct �̸�: " << name << " ����: $ " << price << ". " << endl;//�� ��ü�� ���� ���.
	}
};

class DiscountPruduct :public Pruduct {
	char* D_name;
	double discount;

public:
	DiscountPruduct(){}//�⺻������

	DiscountPruduct(const char* name, double gpr, double gdi) :Pruduct(name, gpr), discount(gdi) {//������ �Ű����� name�� �Լ� ����� �Ҹ� ������ �̸��� ���Ƶ� �����ϴ�. //�ɹ������� ����Ʈ ���� �ش�. 
		D_name = new char[strlen(name) + 1];
		strcpy(D_name, name);
		cout << " DiscountPruduct ������!" << endl;
	}

	virtual ~DiscountPruduct() {
		cout << " DiscountPruduct �Ҹ���!" << endl;
		delete[] D_name;
	}
	
		void setname(const char* name) {//D_name������
			strcpy(this->D_name,name);
		}

		char* getname() {//D_name ������
			return this->D_name;
		}

		void setdis(double gd) {//discount ������
			discount = gd;
		}

		double getdis() {//discount ������.
			return discount;
		}
	
	virtual double getPrice() {
		return (price - (price * discount / 100));//������ ������ ������ ����
	}

	virtual void print() {
		cout << "DiscountPruduct  �̸�: " << D_name << " ����: $ " << getPrice() << ". " << endl;//�� ��ü�� ���� ���.
	}
};

int main() {
	Pruduct a1("                      ",0);  
	DiscountPruduct a2("                      ",0,0);
	a1.setname("ġ��ĩ��");//������
	a1.setprice(1200);//������
	a1.print();
	a2.setname("���ε� ġ��ĩ��");//������
	a2.setprice(1300);//������
	a2.print();

	
	cout << endl;
	cout << endl;

    Pruduct* p1 = new Pruduct("ĩ��", 3000);
	Pruduct* p2 = new DiscountPruduct("ĩ��", 3000, 15);
	cout << p1->getPrice() << endl;
	cout << p2->getPrice() << endl;

	delete p1;//�Ҹ��� ȣ��
	delete p2;
	
	system("pause");
	return 0;
}