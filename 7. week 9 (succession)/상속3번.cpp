#include<iostream>
#include<string>//string�� ����ϱ� ���� ����.
using namespace std;
//Ŭ���� �̸��� ù���ڸ� �빮�ڷ� �ϰų� _�� ����ش�.
class Book {//�θ� Ŭ���� 
	string name;//�ɹ�����: �ڵ����� private�� ����Ǿ� ������ �����ڷθ� ���ٰ����ϴ�.
	int page;
	string writer;
public:
	Book(string n=" ", int b=0, string c=" ") :name(n), page(b), writer(c) {//Ŭ������ ������ �Ű������� �޾� �ʱ�ȭ�Ѵ�.
		cout << "bookŬ���� ������" << endl;
	}
	~Book() {                                      //book �Ҹ���
		cout << "book �Ҹ���"<<endl;
	}
	void setname(string n){//�ɹ����� ������
		name = n;
	}
	
	void setpage(int b) {
		page = b;
	}
	
	void setwriter(string c) {
		writer = c;
	}
	
	string getname() {//�ɹ����� ������
		return name;
	}
	
	int getpage() {
		return page;
	}
	
	string getwriter() {
		return writer;
	}

	void print() {
		cout << "�̸�: " << name << "  ������: " << page << "  ����: " << writer<< endl;//bookŬ���� ���� ����ϴ� �Լ�.
    }
};

class Magazine :public Book {//bookŬ������ ��ӹ޴� �ڼ� class magazine
	
	int date;
public:
	Magazine(string n = " ",int a=0,string b = " ", int d = 0) :Book(n,a,b), date(d) {//magazineŬ���� ������ �ɹ������� ���� �ʱ�ȭ�ϰ� bookŬ������ �ҷ��� �ʱ�ȭ��Ų��.
		cout << "Magazine������" << endl;
	}
	~Magazine() {//magazine Ŭ���� �Ҹ���
		cout << "Magazine�Ҹ���" << endl;
	}
	
	void setdate(int d) {
		date = d;
	}

	
	int getdate() {
		return date;
	}

	void print() {//magazineŬ���� ���¸� ����ϴ� �Լ� +�������̵�=>�Լ��� ������!!
		Book::print();         //�θ�Ŭ������ print�Լ��� �ҷ��´�. cout<< get~�� ��ü �����ϴ�. 
		cout <<  "��������(�ڵ�): " << date << endl; 
	}
};

int main()
{
	Magazine c("������Ӱ��",500,"������",20200531);
	
	c.print();
    c.setname("�ϴð� �ٶ��� ���� ��");//��� Ŭ�������� �θ� Ŭ������ �ɹ��� �޴´ٴ°� Ȯ���Ҽ��ִ�.
	c.setwriter("������");
	c.print();//������ �����ڷ� ������ �ٽ� ����Ʈ
	system("pause");
	return 0;
}
