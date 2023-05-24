#include<iostream>
#include<string>
using namespace std;



int main07() {
	//加减乘除
	int a = 10;
	int b = 3;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;  //两个整数相除依然是整数，将小数去除

	int a1 = 10;
	int b1 = 20;
	cout << a1 / b1 << endl;

	//被除数不能为0
	//两个小数可以相除吗？ 可以,结果也可以为小数，不是整数
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl;

	//取模运算---本质求余数,两个数不可以为0, 小数不能做取模运算, 只有整型可以做取模运算
	int a2 = 10;
	int b2 = 3;
	cout << a2 % b2 << endl;
	a2 = 10;
	b2 = 20;
	//输出为10 因为b2 > a2
	cout << a2 % b2 << endl; 
	

	

	system("pause");
	return 0;
}