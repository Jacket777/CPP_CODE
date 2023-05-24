#include<iostream>
using namespace std;


/*
* 实数--单精度与双精度
* 默认输出小数，会显示出6位有效数字
*/
int test05() {
	float f1 = 3.1415926f; //默认编译器把小数当成double
	cout << " f1 = " << f1 << endl;
	cout << "float 占用字节 " << sizeof(float) << endl;
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