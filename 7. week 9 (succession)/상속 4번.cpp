#include<iostream>
#include<string>//string�� ����ϱ� ���� ����.
using namespace std;
//Ŭ���� �̸��� ù���ڸ� �빮�ڷ� �ϰų� _�� ����ش�.
class Food {//�θ� Ŭ���� 
	double kcal;//�ɹ�����: �ڵ����� private�� ����Ǿ� ������ �����ڷθ� ���ٰ����ϴ�.
	double bill;
	double kg;
public:
	Food(double n=0, double b=0, double c=0) :kcal(n), bill(b), kg(c) {//Ŭ������ ������ �Ű������� �޾� �ʱ�ȭ�Ѵ�.
		cout << "foodŬ���� ������" << endl;
	}
	~Food() {                                      //food �Ҹ���
		cout << "food �Ҹ���"<<endl;
	}
	void setname(double n){//�ɹ����� ������
		kcal = n;
	}
	
	void setpage(double b) {
		bill = b;
	}
	
	void setwriter(double c) {
		kg = c;
	}
	
	double getname() {//�ɹ����� ������
		return kcal;
	}
	
	double getpage() {
		return bill;
	}
	
	double getwriter() {
		return kg;
	}

	void print() {
		cout << "Į�θ�: " << kcal << "kcal  ����: " << bill << "��.  �߷�: " << kg<<"kg"<< endl;//bookŬ���� ���� ����ϴ� �Լ�.
    }
};

class Melon :public Food {//bookŬ������ ��ӹ޴� �ڼ� class magazine
	
	string place;
	int date;
public:
	Melon(double n =0, double a=0, double b = 0,string c=" ", int d = 0) :Food(n,a,b), place(c),date(d) {//melonŬ���� ������ �ɹ������� ���� �ʱ�ȭ�ϰ� FoodŬ������ �ҷ��� �ʱ�ȭ��Ų��.
		cout << "Melon������" << endl;
	}
	~Melon() {//melon Ŭ���� �Ҹ���
		cout << "Melon�Ҹ���" << endl;
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

	void print() {//melonŬ���� ���¸� ����ϴ� �Լ� +�������̵�=>�Լ��� ������!!
		Food::print();         //�θ�Ŭ������ print�Լ��� �ҷ��´�. cout<< get~�� ��ü �����ϴ�. 
		cout << "���۳������: " <<place<<"  ��������: " << date << endl; 
	}
};

int main()
{
	Melon c(1003,10000,5,"������ ȫõ 11��� ȭ���� ���ʰ������ 33���� 111-23",20190910 );
	
	c.print();
  
	system("pause");
	return 0;
}
