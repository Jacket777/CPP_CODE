#include<iostream>
#include<string>
using namespace std;


void swap15(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "�����е�a, b " << endl;
	cout << " a = " << a << " b = "<<b<<endl;
}


void swap1501(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}



void bubbleSort15(int *arr, int length) {
	for (int i = 0; i < length - 1; i++) {
		for(int j = 0; j < length-i-1; j++){
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(int* arr, int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << endl;

	}
}


int main15() {
	//1.����ָ��, �����﷨�� �������� * ָ�������
	int a = 10;
	int* p;
	//��ָ���¼����a�ĵ�ַ
	p = &a;
	cout << " a ��ָ��Ϊ: " << &a << endl;
	cout << " p ��ֵ: " << p << endl;

	//2. ָ�������
	//����ͨ�������õķ�ʽ���ҵ�ָ����ָ����ڴ�---��ָ��ǰ���ǺŴ����Ӧ�ã��ҵ�ָ��ָ����ڴ������
	*p = 1000;
	cout << " a = " << a << endl;
	cout << " *p = " << *p << endl;

	cout << "      " << endl;

	//3.ָ����ռ�ڴ�ռ�
	//ָ��Ҳ��һ���������ͣ���Ҳռ���ڴ�ռ�
	//32λ�� ռ��4���ֽڿռ�  64λ��ռ8���ֽڿռ�
	int a1 = 10;
	int* p1 = &a1;
	cout << "sizeof(int *)" <<sizeof(int *)<< endl;
	cout << "sizeof(int *)" << sizeof(*p1) << endl;
	cout << "sizeof(int *)" << sizeof(float*) << endl;
	cout << "sizeof(int *)" << sizeof(double*) << endl;
	cout << "sizeof(int *)" << sizeof(char*) << endl;

	//4.��ָ�� --1.���ڸ�ָ��������г�ʼ����2.��ָ�벻�ܱ����� 0--255֮����ڴ�����ϵͳռ�õģ���˲����Է���
	int* p2 = NULL;  //��ʾ0
	//*p2 = 100;  //�����Ա�����
	p2 = &a1;

	//5.Ұָ�� --�������Ұָ��--ָ�����ָ��Ƿ��ռ�
	//int* p3 = (int*)Ox1100;

	//6.const ����ָ��---���׻���--ע������
	//6.1.const����ָ�� --����ָ��---ָ���ָ������޸ģ�ָ��ָ���ֵ�������޸�
	int a3 = 10;
	int b3 = 20;
	const int* p3 = &a3;
	//*p3 = 20;  //���� ָ��ָ���ֵ�����Ա��޸�
	p3 = &b3; //��ȷ--ָ���ָ������޸�


	//6.2.const���γ��� --ָ�볣��--ָ���ָ�򲻿����޸ģ�ָ��ָ���ֵ�����޸�
	int* const p4 = &a3; 
	*p4 = 100; //ָ��ָ���ֵ���Ա��޸�
	// p4 = &b3;  //ָ��ָ���ܸ�


	//6.3.const������ָ�룬�����γ��� �ص�--ָ���ָ�򲻿����޸ģ�ָ��ָ���ֵ�������޸� const int * const p 
	const int* const p5 = &a3;


	//7. ָ��������
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p6 = arr; //arr��������׵�ַ
	cout << "ָ�� --- >" << *p6 << endl;
	p6++;//��ָ��ƫ��4���ֽ�
	cout << "ָ�� --->" << *p6 << endl;
	int* p7 = arr;
	for (int i = 0; i < 10; i++) {
		cout << *p7 << endl;
		p7++;
	}

	//8.ָ���뺯��
	//8.1.ֵ����
	int a4 = 10;
	int b4 = 20;
	swap15(a4, b4);
	cout << " a4 = " << a4 << " b4 = " << b4 << endl;
	//8.2.��ַ����, ��������ʵ��
	swap1501(&a4, &b4);
	cout << " a4 = " << a4 << " b4 = " << b4 << endl;
	cout << "============>>>>>===================" << endl;

	//9.ָ�룬���飬����---ð������
	int arr02[10] = { 4,3,6,9,1,2,10,8,7,5};
	int length = sizeof(arr02) / sizeof(arr02[0]);
	bubbleSort15(arr02, length);
	printArray(arr02, length);















	//2. ָ�붨��
	system("pause");
	return 0;
}
