#include<iostream>
using namespace std;


/*
* 字符型
* 默认输出小数，会显示出6位有效数字
*/
int main05() {
	char ch = 'a';

	cout << " ch = " << ch << endl;
	cout << "char 占用字节 " << sizeof(char) << endl;
	cout << "asci 码值 " << (int)ch << endl;



	double d1 = 3.1415926;
	cout << "double 占用字节 " << sizeof(double) << endl;
	cout << " d1 = " << d1 << endl;

	//科学计数法
	float f2 = 3e2; // 3* 10^2
	cout << " f2 = " << f2 << endl;
	//float f3 = 3e-2; // 3* 0.1^2
	//cout << " f3 = " << f3 << endl;
	system("pause");
	return 0;
}