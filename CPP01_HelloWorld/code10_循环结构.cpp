#include<iostream>
#include<string>
using namespace std;
//timeϵͳʱ��ͷ�ļ�����
#include<ctime>

int main10() {
	//1.while ѭ��
	//int num = 0;
	//while (num < 10) {
	//	cout << num << endl;
	//	num++;
	//}

	//2.while ѭ��--ʵ����ѭ��
	//2.1. ϵͳ���������
	//2.2. ��ҽ��в²�
	//2.3. �ж���Ҳ²�
	//2.4. �´�������2
    //���������ӣ��������õ�ǰϵͳʱ���������������ֹÿ���������һ��
	//srand((unsigned int)time(NULL));
	////rand()%100 //����0-99�������
	//int num = rand() % 10 + 1;   // 
	//int val = 0;
	//while (true) {
	//	cin >> val;
	//	if (val > num) {
	//		cout << "�²����,�����²²�" << endl;

	//	}
	//	else if (val < num) {
	//		cout << "�²��С,�����²²�" << endl;

	//	}
	//	else {
	//		cout << "��ϲ��,�¶���" << endl;
	//		break;//�˳���ǰѭ��
	//	}

	//}

	//3. do....while 
	//int num = 0;
	//do {
	//	cout << num << endl;
	//	num++;
	//} while (num < 10);

	//3. do....while ---ˮ�ɻ���
	//1.�����е���λ���������
	//int num = 100;
	//do {
	//	int a = 0;//��λ
	//	int b = 0;//ʮλ
	//	int c = 0;//
	//	a = num % 10;
	//	b = num / 10 % 10;
	//	c = num / 100;
	//	//2.��������λ�����ҵ�ˮ�ɻ���
	//	if (a * a * a + b * b * b + c * c * c == num) {
	//		cout << num << endl;
	//	}
	//	num++;

	//} while (num < 1000);
	
	//4. for ѭ��
	//for (int i = 0; i < 10; i++) {
	//	cout << i << endl;
	//}

	/*int i = 0;
	for (;;) {
		if (i > 10) {
			break;
		}
		cout << i << endl;
		i++;
	}*/

	//5.ѭ��Ӧ��---������
	//for (int i = 0; i < 100; i++) {
	//	if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
	//		cout << i << "������"<<endl;
	//	}
	//}

	//6. Ƕ��ѭ��
	//for(int i = 0; i < 10; i++){
	//	for (int j = 0; j < 10;j++) {
	//		cout << "* ";
	//	}
	//	cout << endl;
	//}

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << "*" << j << "=" << i * j << " " ;

		}
		cout << endl;
	}


	



	system("pause");
	return 0;
}