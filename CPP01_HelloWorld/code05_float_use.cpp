#include<iostream>
using namespace std;


/*
* ʵ��--��������˫����
* Ĭ�����С��������ʾ��6λ��Ч����
*/
int test05() {
	float f1 = 3.1415926f; //Ĭ�ϱ�������С������double
	cout << " f1 = " << f1 << endl;
	cout << "float ռ���ֽ� " << sizeof(float) << endl;
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