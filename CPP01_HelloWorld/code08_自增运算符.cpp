#include<iostream>
#include<string>
using namespace std;

int main08() {
	cout << "=============" << endl;

	cout << "自增运算" << endl;

	cout << "1.前置递增" << endl;
	int a3 = 10;
	++a3;
	cout << "a3=" << a3 << endl;
	cout << "2.后置递增" << endl;
	int b3 = 10;
	b3++;
	cout << "b3=" << b3 << endl;
	cout << "3.前后置递增" << endl;
	//前置递增，先递增，再进行表达式运算
	a3 = 10;
	b3 = ++a3 * 10;
	cout << " b3 = " << b3 << endl;
	//后置递增
	a3 = 10;
	b3 = a3++ * 10;
	cout << " b3 = " << b3 << endl;

	cout << "=======赋值运算符======" << endl;
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

	cout << "=======比较运算符======" << endl;
	// ==
	a = 10;
	int b = 20;
	cout << (a == b) << endl;
	cout << (a != b) << endl;
	cout << (a > b) << endl;
	cout << (a < b) << endl;
	cout << (a >= b) << endl;
	cout << (a <= b) << endl;

	cout << "=======逻辑运算符======" << endl;
	//非  ！
	a = 10;
	cout << !a << endl;  //在C++中除了0 都为真
	cout << !!a << endl;  //输出1

	//与 &&
	a = 10;
	b = 10;
	cout << (a && b) << endl;
	a = 0;
	b = 10;
	cout << (a && b) << endl;
	a = 0;
	b = 0;
	cout << (a && b) << endl;

	//或 ||
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