#include<iostream>
using namespace std;

void print_menu();//�޴��� ����ϴ� �Լ��Դϴ�.
int get_menu_number(int);//�޴��� �ش��ϴ� ��ȣ�� �Է¹޾� �Ǵ��ϴ� �Լ��Դϴ�.
void pick_hamburger();//�ܹ��� ���ý� �ܹ��Ÿ� ����ϴ� �Լ��Դϴ�.
void pick_cheeze();//ġ����� ���ý� ġ����Ÿ� ����ϴ� �Լ��Դϴ�.
void pick_sand();//������ġ ���ý� ������ġ�� ����ϴ� �Լ��Դϴ�.
int main()
{
	int a=0;
do//a�� �ʱ�ȭ �Ͽ� ��������� a���� �Է¹ޱ� �������� do while���� �̿��Ͽ� �ѹ� �������� while�� �������� �Ǻ��Ѵ�.
	{
	    print_menu();
		cin >> a;
		if (get_menu_number(a) == 0)//get menu number �Լ����� �Է¹�ȣ�� �˸����� 1 Ʋ���� 0�� return�ϰ� �Ͽ���.
		cout << "�߸� �Է��Ͽ����ϴ�." << endl;

		if (get_menu_number(a) == 1)
			break;
	} while (a != 4);//print menu�Լ����� 4�� �ش��ϴ� ��ȣ�� ���������� �Է°�a=4�̸� ������ �������´�.
	if (a == 1)
		pick_hamburger();//a�� 1�ϰ�� �ܹ��ſ� �ش������� �ܹ��Ÿ� ����ϴ� �Լ��� ���.
	if (a == 2)
	  pick_cheeze();//a�� 2�ϰ�� ġ����ſ� �ش������� ġ����Ÿ� ����ϴ� �Լ��� ���.
	if (a == 3)
	   pick_sand();//a�� 3�ϰ�� ������ġ�� �ش������� ������ġ�� ����ϴ� �Լ��� ���.
	if (a == 4)
	{
		cout << "�����մϴ�." << endl;//a=4�� ���ῡ �ش������� �����Ѵ�.
		system("pause");
		return 0;
	}
	system("pause");
	return 0;
}

void print_menu() {//�� �޴��� �ش��ϴ� �ѹ��� ������ش�(�ȳ�)
	cout << "1. �ܹ���" << endl << "2. ġ�����" << endl << "3. ������ġ" << endl << "4. ����" << endl << "���ϴ� �޴��� �����ϼ���." << endl;
}

int get_menu_number(int n){//main �Լ����� a �� �Է°��� �޾� �޴��� �ش��ϴ� �ѹ��� 1~4�ȿ� �ش��ϸ� 1�� ��ȯ else 0�� ��ȯ(0�ǰ�� n > 4 || n < 1�������� �к�)
	if (n > 4 || n < 1)
		return 0;
	else
		return 1;
}
//�� �޴� ����ϴ� �Լ���.
void pick_hamburger() {
	cout << "�ܹ��� ���Խ��ϴ� ^-^b" <<endl;
}
void pick_cheeze() { 
	cout << "ġ����� ���Խ��ϴ� ^-^b" << endl;
}
void pick_sand(){
	cout << "������ġ ���Խ��ϴ� ^-^b" << endl;
}