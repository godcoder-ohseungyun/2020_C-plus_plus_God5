#include <iostream>
#include <string>
using namespace std;

class BankAccount {		// 은행 계좌
private:
	string accountNumber;	// 계좌 번호
	string owner;		// 예금주
	int balance;		// 잔액을 표시하는 변수

public:
	BankAccount(string aNumber, string myowner, int amount)//계좌 정보와,예금주,amount를 받는 함수.
	{
		setAccountN(aNumber);
		setOwner(myowner);
     	setBalance(amount);
	}

     void setAccountN(string aNumber); //계좌번호 설정자

	void setOwner(string myowner); //예금주 이름 설정자

	void setBalance(int amount);	// balance 설정자

	int getBalance();		// balance 접근자



	void deposit(int amount);	// 입금 함수

	void withdraw(int amount);	// 인출 함수

	void print();			// 현재 상태 출력

	int transfer(int amount, BankAccount otherAccount);

};

void BankAccount::setAccountN(string aNumber) { accountNumber = aNumber; }//입력받은 문자열을 class 변수 accountNumber에 넣는다.

void BankAccount::setOwner(string myowner) { owner = myowner; }//입력받은 문자열을 class 변수 owner에 넣는다.

void BankAccount::setBalance(int amount) { balance = amount; }//입력받은 문자열을 class 변수 balance에 넣는다.

int BankAccount::getBalance() { return balance; }//balance의 값을 반환한다 접근자.(접근만 가능 변경x)



void BankAccount::deposit(int amount)//값을 입력받아 더한다(입금)

{
	balance += amount;
}

void BankAccount::withdraw(int amount)//값을 입력받아 뺀다(출금)

{
	balance -= amount;
	cout << "계좌번호" << accountNumber << "에서 " << amount << "원이 출금 되었습니다."<<endl;//출력창에서 설명을 위해 출금과정 표시.
}

void BankAccount::print()
{
	cout << "계좌번호 : " << accountNumber << " " << owner << "님의 잔액은 " << balance << "원 입니다." << endl;

}//현상태 표시



int BankAccount::transfer(int amount, BankAccount other) // 이체함수 

{
	if (balance >= amount) {//잔액보다 출금할 금액이 작은경우 이체 진행

		cout << "계좌번호 " << accountNumber << "에서 " << other.accountNumber << " 으로 " << amount << "원을 계좌 이체합니다." << endl;
		/*객체에서 객체로 이동되는 과정을 표기해 준다 other.~을 이용해 main에서 입력받은 객체의 값을 변동시킨다.*/

		balance -= amount;// 출금

		return amount;
	}

	else
	{
		cout << "잔액이 부족합니다.";//반대의 경우 진행 x
		return 0;
	}
}
/*객체1가 객체2로 이체할 금액과 이체 받을 객체2를 입력받는 함수로 if문에서 객체1의 현 잔액이 이체할 금액보다 클경우 이체함수가 진행된다. 74번 줄 은 객체1.setbalance에서 
balance값이 변화 되어있었기 때문에 이미 값이 대입되어있는 상황이다 여기서 새로 입력받은 amount를 빼 주고 그 amount만큼 객체2.balance에 넣어준다.*/
int main() {

	BankAccount account("FirstAccount", "오겨울", 0);

	BankAccount account2("SecondAccount", "최여름", 0);

	account.deposit(10000);//오겨울 입금

	account.print();//오겨울 입금 후 잔액

	account.withdraw(8000);//오겨울 출금

	account.print();//오겨울 출금 후 잔액

	account2.print();//최여름 현 잔액 "0"

	account2.deposit(account.transfer(2000, account2));//오겨울->최여름 2000원 입금

	account.print();//오겨울 이체 후 남은 잔액 "0"

	account2.print();//최여름 입금 받은 후 잔액"2000"

	system("pause");
	return 0;

}