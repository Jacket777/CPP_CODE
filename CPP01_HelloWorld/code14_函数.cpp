#include<iostream>
#include<string>
#include "swap.h"
using namespace std;

// �����Ķ���
int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

//ֵ����---�������ֽ���
//�����������Ҫ����ֵ��������ʱ������дvoid
void swap(int num1, int num2) {
	cout << "����ǰ������: " << " num1 = " << num1 << "num2 = " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "�����������: " << " num1 = " << num1 << "num2 = " << num2 << endl;
	return;
}


//��������ʽ
//1. �޲��޷���
void test01() {
	cout << "this is test01" << endl;

}

//2.�в��޷�
void test02(int a) {
	cout << "this a is " << a << endl;
}

//3.�޲��з�
int test03() {
	return 100;
}

//4. �в��з�
int test04(int a ) {
	return 2 * a;
}

//���������� ---��ǰ���߱����������Ĵ��ڣ��������ú���������---�����������ж�Σ�����ֻ����һ��
int max1401(int a, int b);
int max14(int a, int b) {
	return a > b ? a : b;
}

////�����ķ��ļ���д---ʵ���������ֽ����ĺ���
//void swapTwoNum(int a, int b);

//�����Ķ���
//void swapTwoNum(int a, int b) {
//	int temp = a;
//	a = b;
//	b = a;
//	cout << " a = " << a << " b = " << b << endl;
//
//}

//1. ����.h ��׺����ͷ�ļ�
//2. ����/cpp��׺����Դ�ļ�
//3. ��ͷ�ļ���д����������,�������
//4. ��Դ�ļ���д�����Ķ���--����ͷ�ļ�
//5. ʹ�ã�������ͷ�ļ���д



int main14() {
	int a = 10;
	int b = 20;
	int c = add(a, b);
	cout << " c = " << c << endl;
	swap(a, b);
	//��������ֵ���ݣ��������βη����ı䣬ʵ�β���ı�
	cout << "a = " << a << "b =" << b << endl;
	//1.�޲��޷�
	test01();
	test02(25);
	int num = test03();
	cout << " num = " << num << endl;
	int num2 = test04(9);
	cout << "num2 = " << num2 << endl;

	//����������
	cout << " " << endl;
	cout << max14(45, 90) << endl;
	cout << max1401(55, 91) << endl;

	//�����Ķ���

	//������ͷ�ļ�ʹ��--ʹ��include "swap.h"  ��ʾ�Զ���
	swapTwoNum(89, 90);


	system("pause");
	return 0;
}


int max1401(int a, int b) {
	return a > b ? a : b;
}