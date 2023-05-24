#include<iostream>
using namespace std;

/*
* 代码清单03：常量的使用
* 1. 使用宏定义
* 2. 使用const 修饰变量
* 3. 常量完成定义后不能被修改
*/

#define Day 7

int main3() {
	cout << "a week of " << Day << "day" << endl;
	const int month = 12;
	cout << "a year of month" << month << " " << endl;
	system("pause");
	return 0;
}