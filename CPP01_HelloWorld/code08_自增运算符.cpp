#include<iostream>
#include<string>
using namespace std;

int main08() {
	cout << "=============" << endl;

	cout << "��������" << endl;

	cout << "1.ǰ�õ���" << endl;
	int a3 = 10;
	++a3;
	cout << "a3=" << a3 << endl;
	cout << "2.���õ���" << endl;
	int b3 = 10;
	b3++;
	cout << "b3=" << b3 << endl;
	cout << "3.ǰ���õ���" << endl;
	//ǰ�õ������ȵ������ٽ��б��ʽ����
	a3 = 10;
	b3 = ++a3 * 10;
	cout << " b3 = " << b3 << endl;
	//���õ���
	a3 = 10;
	b3 = a3++ * 10;
	cout << " b3 = " << b3 << endl;

	cout << "=======��ֵ�����======" << endl;
	// =
	int a = 10;
	a = 100;
	cout << " a = " << a << endl;

	// +=
	a = 10;
	a += 2;
	cout << " a = " << a << endl;

	// -=
	a = 10;
	a -= 2;
	cout << " a = " << a << endl;


	// *=
	a = 10;
	a *= 2;
	cout << " a = " << a << endl;

	//  /= 
	a = 10;
	a /= 2;
	cout << " a = " << a << endl;


	// %=
	a = 10;
	a %= 2;
	cout << " a = " << a << endl;

	cout << "=======�Ƚ������======" << endl;
	// ==
	a = 10;
	int b = 20;
	cout << (a == b) << endl;
	cout << (a != b) << endl;
	cout << (a > b) << endl;
	cout << (a < b) << endl;
	cout << (a >= b) << endl;
	cout << (a <= b) << endl;

	cout << "=======�߼������======" << endl;
	//��  ��
	a = 10;
	cout << !a << endl;  //��C++�г���0 ��Ϊ��
	cout << !!a << endl;  //���1

	//�� &&
	a = 10;
	b = 10;
	cout << (a && b) << endl;
	a = 0;
	b = 10;
	cout << (a && b) << endl;
	a = 0;
	b = 0;
	cout << (a && b) << endl;

	//�� ||
	a = 10;
	b = 10;
	cout << (a || b) << endl;
	a = 0;
	cout << (a || b) << endl;
	a = 0;
	b = 0;
	cout << (a || b) << endl;










	system("pause");
	return 0;
}