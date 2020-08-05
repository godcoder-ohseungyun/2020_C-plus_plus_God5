#include <iostream>
#include <string>
using namespace std;

class BankAccount {		// ���� ����
private:
	string accountNumber;	// ���� ��ȣ
	string owner;		// ������
	int balance;		// �ܾ��� ǥ���ϴ� ����

public:
	BankAccount(string aNumber, string myowner, int amount)//���� ������,������,amount�� �޴� �Լ�.
	{
		setAccountN(aNumber);
		setOwner(myowner);
     	setBalance(amount);
	}

     void setAccountN(string aNumber); //���¹�ȣ ������

	void setOwner(string myowner); //������ �̸� ������

	void setBalance(int amount);	// balance ������

	int getBalance();		// balance ������



	void deposit(int amount);	// �Ա� �Լ�

	void withdraw(int amount);	// ���� �Լ�

	void print();			// ���� ���� ���

	int transfer(int amount, BankAccount otherAccount);

};

void BankAccount::setAccountN(string aNumber) { accountNumber = aNumber; }//�Է¹��� ���ڿ��� class ���� accountNumber�� �ִ´�.

void BankAccount::setOwner(string myowner) { owner = myowner; }//�Է¹��� ���ڿ��� class ���� owner�� �ִ´�.

void BankAccount::setBalance(int amount) { balance = amount; }//�Է¹��� ���ڿ��� class ���� balance�� �ִ´�.

int BankAccount::getBalance() { return balance; }//balance�� ���� ��ȯ�Ѵ� ������.(���ٸ� ���� ����x)



void BankAccount::deposit(int amount)//���� �Է¹޾� ���Ѵ�(�Ա�)

{
	balance += amount;
}

void BankAccount::withdraw(int amount)//���� �Է¹޾� ����(���)

{
	balance -= amount;
	cout << "���¹�ȣ" << accountNumber << "���� " << amount << "���� ��� �Ǿ����ϴ�."<<endl;//���â���� ������ ���� ��ݰ��� ǥ��.
}

void BankAccount::print()
{
	cout << "���¹�ȣ : " << accountNumber << " " << owner << "���� �ܾ��� " << balance << "�� �Դϴ�." << endl;

}//������ ǥ��



int BankAccount::transfer(int amount, BankAccount other) // ��ü�Լ� 

{
	if (balance >= amount) {//�ܾ׺��� ����� �ݾ��� ������� ��ü ����

		cout << "���¹�ȣ " << accountNumber << "���� " << other.accountNumber << " ���� " << amount << "���� ���� ��ü�մϴ�." << endl;
		/*��ü���� ��ü�� �̵��Ǵ� ������ ǥ���� �ش� other.~�� �̿��� main���� �Է¹��� ��ü�� ���� ������Ų��.*/

		balance -= amount;// ���

		return amount;
	}

	else
	{
		cout << "�ܾ��� �����մϴ�.";//�ݴ��� ��� ���� x
		return 0;
	}
}
/*��ü1�� ��ü2�� ��ü�� �ݾװ� ��ü ���� ��ü2�� �Է¹޴� �Լ��� if������ ��ü1�� �� �ܾ��� ��ü�� �ݾ׺��� Ŭ��� ��ü�Լ��� ����ȴ�. 74�� �� �� ��ü1.setbalance���� 
balance���� ��ȭ �Ǿ��־��� ������ �̹� ���� ���ԵǾ��ִ� ��Ȳ�̴� ���⼭ ���� �Է¹��� amount�� �� �ְ� �� amount��ŭ ��ü2.balance�� �־��ش�.*/
int main() {

	BankAccount account("FirstAccount", "���ܿ�", 0);

	BankAccount account2("SecondAccount", "�ֿ���", 0);

	account.deposit(10000);//���ܿ� �Ա�

	account.print();//���ܿ� �Ա� �� �ܾ�

	account.withdraw(8000);//���ܿ� ���

	account.print();//���ܿ� ��� �� �ܾ�

	account2.print();//�ֿ��� �� �ܾ� "0"

	account2.deposit(account.transfer(2000, account2));//���ܿ�->�ֿ��� 2000�� �Ա�

	account.print();//���ܿ� ��ü �� ���� �ܾ� "0"

	account2.print();//�ֿ��� �Ա� ���� �� �ܾ�"2000"

	system("pause");
	return 0;

}