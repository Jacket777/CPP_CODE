#include<iostream>
using namespace std;

/*
* ����ʹ�� �� sizeof
*/
int main04() {
	//1.������
	short num01 = 32767;  // -32768 --32767
	//1.����
	int num02 = 32768;
	//1.������
	long num03 = 10;
	//4.��������
	long long num04 = 10;
	cout << "num01 = " << num01 << endl;
	cout << "num02 = " << num02 << endl;
	cout << "num03 = " << num03 << endl;
	cout << "num04 = " << num04 << endl;

	cout << "short������ռ�õ��ֽ�: " << sizeof(short) << endl;
	cout << "short������ռ�õ��ֽ�: " << sizeof(num01) << endl;
	cout << "int������ռ�õ��ֽ�: " << sizeof(int) << endl;
	cout << "int������ռ�õ��ֽ�: " << sizeof(num02) << endl;
	cout << "long������ռ�õ��ֽ�: " << sizeof(long) << endl;
	cout << "long������ռ�õ��ֽ�: " << sizeof(num03) << endl;
	cout << "long long������ռ�õ��ֽ�: " << sizeof(long long) << endl;
	cout << "long long������ռ�õ��ֽ�: " << sizeof(num04) << endl;

	system("pause");
	return 0;
}