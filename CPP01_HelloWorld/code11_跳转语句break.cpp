#include<iostream>
#include<string>
using namespace std;

int main11() 
{
   //break ---switch
	cout << "�������Ѷ� 1.��ͨ 2.�еȣ� 3 ��" << endl;
	int select = 0;
	cin >> select;
	switch (select) {
	case 1:
		cout << "��ѡ�������ͨ�Ѷ�" << endl;
		break;
	case 2:
		cout << "��ѡ������е��Ѷ�" << endl;

		break;
	case 3:
		cout << "��ѡ����Ǹ��Ѷ�" << endl;

		break;
	default:
		break;
	}

	//break--forѭ��
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break;
		}
	}



	//ѭ��Ƕ��
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;
			}
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}