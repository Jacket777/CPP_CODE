#include<iostream>
#include<string>
using namespace std;

int main09() {
	//1.ѡ��ṹ������if���---����ͨ��
	//1.�û��������---����ע�� ctr + k + c
	//int score = 0;
	//cout << "������һ������" << endl;
	//cin >> score;
	//cout << "������ķ����� ��" << score << endl;
	//if (score > 600) {
	//	cout << "��ϲ�㿼�ϴ�ѧ" << endl;
	//}

	//2.ѡ��ṹ������if���--����ͨ��
	//int score = 0;
	//cout << "������һ������" << endl;
	//cin >> score;
	//cout << "������ķ����� ��" << score << endl;
	//if (score > 600) {
	//	cout << "��ϲ�㿼�ϴ�ѧ" << endl;
	//}else {
	//	cout << "û�п��ϴ�ѧ������Ŭ��" << endl;
	//}

	//3. ѡ��ṹ�� ������if���
	//int score = 0;
	//cout << "������һ������" << endl;
	//cin >> score;
	//cout << "������ķ����� ��" << score << endl;
	//if (score > 600) {
	//	cout << "��ϲ�㿼��һ����ѧ" << endl;
	//}
	//else if(score > 500) {
	//	cout << "��ϲ�㿼�϶�����ѧ" << endl;
	//}
	//else if (score > 400) {
	//	cout << "��ϲ�㿼��������ѧ" << endl;
	//}
	//else {
	//	cout << "û�п��ϴ�ѧ������Ŭ��" << endl;
	//}

	//4. ѡ��ṹ�� Ƕ��if���
	/*int score = 0;
	cout << "������һ������" << endl;
	cin >> score;
	cout << "������ķ����� ��" << score << endl;
	if (score > 600) {
		cout << "��ϲ�㿼��һ����ѧ" << endl;
		if (score > 700) {
			cout << "��ϲ�㿼�ϱ�����ѧ" << endl;
		}
		else if (score > 650) {
			cout << "��ϲ�㿼���廪��ѧ" << endl;
		}
		else {
			cout << "��ϲ�㿼�������ѧ" << endl;
		}
	}
	else if (score > 500) {
		cout << "��ϲ�㿼�϶�����ѧ" << endl;
	}
	else if (score > 400) {
		cout << "��ϲ�㿼��������ѧ" << endl;
	}
	else {
		cout << "û�п��ϴ�ѧ������Ŭ��" << endl;
	}*/

	//5. Ӧ�� ����С�������
	//int num1 = 0;
	//int num2 = 0;
	//int num3 = 0;

	//cout << "������С��A������" << endl;
	//cin >> num1;
	//cout << "������С��B������" << endl;
	//cin >> num2;
	//cout << "������С��C������" << endl;
	//cin >> num3;
	//cout << "С��A������" << num1<<endl;
	//cout << "С��B������" << num2 << endl;
	//cout << "С��C������" << num3 << endl;
	//if (num1 > num2){
	//	if (num1 > num3) {
	//		cout << "С��A������ ����" << num1 <<endl;
	//	}
	//	else {
	//		cout << "С��C������ ����" << num1 << endl;
	//	}
	//}
	//else {
	//	if (num2 > num3) {
	//		cout << "С��B������ ����" << num2<< endl;
	//	}
	//	else {
	//		cout << "С��C������ ����" << num3 << endl;
	//	}

	//}


	// ��Ŀ�����
 //   int a, b, c;
	//a = 10;
	//b = 20;
	//c = 0;
	//c = (a > b ? a : b);
	//cout << "c = " << c << endl;
	//// ��C ++�У���Ŀ��������ص��Ǳ��������Լ�����ֵ
	//(a > b ? a : b) = 100;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl; // b =100


   // switch ȱ�㣺���жϵ�ʱ��ֻ�������ͻ��ַ��ͣ������ж�һ�����䣬�ŵ㣺�ṹ������ִ��Ч�ʸ�
   //����Ӱ���� 10-9 ���� 8-7 �ǳ���  6-5 һ�� 5���� ��Ƭ
cout << "�����Ӱ���" << endl;
int score = 0;
cin >> score;
cout << "���ķ����� " << score << endl;
switch (score) {
case 10:
	cout << "����Ϊ���Ǿ����Ӱ" << endl;
	break;//�˳���ǰ��֧
case 9:
	cout << "����Ϊ���Ǿ����Ӱ" << endl;
	break;
case 8:
	cout << "����Ϊ�ĵ�Ӱ�ǳ���" << endl;
	break;
case 7:
	cout << "����Ϊ�ĵ�Ӱ�ǳ���" << endl;
	break;
case 6:
	cout << "����Ϊ�ĵ�Ӱһ��" << endl;
	break;
case 5:
	cout << "����Ϊ�ĵ�Ӱһ��" << endl;
	break;
default:
	cout << "��Ƭ" << endl;
	break;
}


	system("pause");
	return 0;

}