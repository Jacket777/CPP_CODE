#include<iostream>
using namespace std;


/*
* �ַ���
* Ĭ�����С��������ʾ��6λ��Ч����
*/
int main05() {
	char ch = 'a';

	cout << " ch = " << ch << endl;
	cout << "char ռ���ֽ� " << sizeof(char) << endl;
	cout << "asci ��ֵ " << (int)ch << endl;



	double d1 = 3.1415926;
	cout << "double ռ���ֽ� " << sizeof(double) << endl;
	cout << " d1 = " << d1 << endl;

	//��ѧ������
	float f2 = 3e2; // 3* 10^2
	cout << " f2 = " << f2 << endl;
	//float f3 = 3e-2; // 3* 0.1^2
	//cout << " f3 = " << f3 << endl;
	system("pause");
	return 0;
}