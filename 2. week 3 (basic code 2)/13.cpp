#include<iostream>
#include<ctime>/*rand()�� ���� ����*/
using namespace std;

int main()
{
	
	int a=0,b=0;
	do {
		cout << "1:���� 2:���� 3:�� �߿� �����Ͻÿ�.���Ḧ ���ϸ� 0 " << endl;/*����� 0*/
		cin >> a;
		
	     srand(time(NULL));/*������ �ʱ�ȭ*/
    if(a==1)/*������ ���������� �� �˸´°� �к�*/
		cout << "���: ���� "<< endl;
	if (a == 2)
		cout << "���: ���� " << endl;
	if (a == 3)
		cout << "���: �� " << endl;
		
		b = rand() % 3 + 1;/*���� ���� �� �� �ϳ��� �������� ���� 1~3 �� ���� ����*/
		if ((b == 1)&&(a!=0))/*a�� ���ᰡ �ƴҶ� ��ǻ�Ͱ� �����ϰ��*/
		{
			cout << "��ǻ��: ����" << endl;
			if (a == b)/*a��b�� ���Ͽ� ��� ���*/
				cout << "���"<< endl;
			if (a == 2)
				cout << "�¸�" << endl;
			if (a == 3)
				cout << "�й�" << endl;

		}
		if ((b == 2)&&(a != 0))/*a�� ���ᰡ �ƴҶ� ��ǻ�Ͱ� �����ϰ��*/
		{
			cout << "��ǻ��: ����" << endl;
			if (a == b)/*a��b�� ���Ͽ� ��� ���*/
				cout << "���" << endl;
			if (a == 1)
				cout << "�й�" << endl;
			if (a == 3)
				cout << "�¸�" << endl;


		}
		if ((b == 3) && (a != 0))/*a�� ���ᰡ �ƴҶ� ��ǻ�Ͱ� ���ϰ��*/
		{
			cout << "��ǻ��: ��" << endl;

			if (a == b)/*a��b�� ���Ͽ� ��� ���*/
				cout << "���" << endl;
			if (a == 1)
				cout << "�¸�" << endl;
			if (a == 2)
				cout << "�й�" << endl;
		}
		if (a == 0)/*����*/
			cout << "�����մϴ�..." << endl;
	} while (a != 0);/*a�� 0���� �ʱ�� �߾��� ������ do while�� ����Ͽ� �ѹ��� �ݺ��ǰ��Ͽ� a���� �Է¹޴´�.*/


	system("pause");
	return 0;

}