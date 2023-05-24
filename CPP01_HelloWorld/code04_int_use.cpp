#include<iostream>
using namespace std;

/*
* 整型使用 与 sizeof
*/
int main04() {
	//1.短整型
	short num01 = 32767;  // -32768 --32767
	//1.整型
	int num02 = 32768;
	//1.长整型
	long num03 = 10;
	//4.长长整型
	long long num04 = 10;
	cout << "num01 = " << num01 << endl;
	cout << "num02 = " << num02 << endl;
	cout << "num03 = " << num03 << endl;
	cout << "num04 = " << num04 << endl;

	cout << "short类型所占用的字节: " << sizeof(short) << endl;
	cout << "short类型所占用的字节: " << sizeof(num01) << endl;
	cout << "int类型所占用的字节: " << sizeof(int) << endl;
	cout << "int类型所占用的字节: " << sizeof(num02) << endl;
	cout << "long类型所占用的字节: " << sizeof(long) << endl;
	cout << "long类型所占用的字节: " << sizeof(num03) << endl;
	cout << "long long类型所占用的字节: " << sizeof(long long) << endl;
	cout << "long long类型所占用的字节: " << sizeof(num04) << endl;

	system("pause");
	return 0;
}