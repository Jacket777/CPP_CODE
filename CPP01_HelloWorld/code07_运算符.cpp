#include<iostream>
#include<string>
using namespace std;



int main07() {
	//�Ӽ��˳�
	int a = 10;
	int b = 3;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;  //�������������Ȼ����������С��ȥ��

	int a1 = 10;
	int b1 = 20;
	cout << a1 / b1 << endl;

	//����������Ϊ0
	//����С����������� ����,���Ҳ����ΪС������������
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl;

	//ȡģ����---����������,������������Ϊ0, С��������ȡģ����, ֻ�����Ϳ�����ȡģ����
	int a2 = 10;
	int b2 = 3;
	cout << a2 % b2 << endl;
	a2 = 10;
	b2 = 20;
	//���Ϊ10 ��Ϊb2 > a2
	cout << a2 % b2 << endl; 
	

	

	system("pause");
	return 0;
}