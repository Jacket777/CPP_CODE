#include<iostream>
#include<string>
#include "swap.h"
using namespace std;

// 函数的定义
int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

//值传递---两个数字交换
//如果函数不需要返回值，则声明时，可以写void
void swap(int num1, int num2) {
	cout << "交换前的数字: " << " num1 = " << num1 << "num2 = " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后的数字: " << " num1 = " << num1 << "num2 = " << num2 << endl;
	return;
}


//函数的样式
//1. 无参无返回
void test01() {
	cout << "this is test01" << endl;

}

//2.有参无返
void test02(int a) {
	cout << "this a is " << a << endl;
}

//3.无参有返
int test03() {
	return 100;
}

//4. 有参有返
int test04(int a ) {
	return 2 * a;
}

//函数的声明 ---提前告诉编译器函数的存在，可以利用函数的声明---函数的声明有多次，定义只能有一次
int max1401(int a, int b);
int max14(int a, int b) {
	return a > b ? a : b;
}

////函数的分文件编写---实现两个数字交换的函数
//void swapTwoNum(int a, int b);

//函数的定义
//void swapTwoNum(int a, int b) {
//	int temp = a;
//	a = b;
//	b = a;
//	cout << " a = " << a << " b = " << b << endl;
//
//}

//1. 创建.h 后缀名的头文件
//2. 创建/cpp后缀名的源文件
//3. 在头文件中写函数的声明,包括框架
//4. 在源文件中写函数的定义--包含头文件
//5. 使用：函数的头文件编写



int main14() {
	int a = 10;
	int b = 20;
	int c = add(a, b);
	cout << " c = " << c << endl;
	swap(a, b);
	//当我们做值传递：函数的形参发生改变，实参不会改变
	cout << "a = " << a << "b =" << b << endl;
	//1.无参无返
	test01();
	test02(25);
	int num = test03();
	cout << " num = " << num << endl;
	int num2 = test04(9);
	cout << "num2 = " << num2 << endl;

	//函数的声明
	cout << " " << endl;
	cout << max14(45, 90) << endl;
	cout << max1401(55, 91) << endl;

	//函数的定义

	//函数的头文件使用--使用include "swap.h"  表示自定义
	swapTwoNum(89, 90);


	system("pause");
	return 0;
}


int max1401(int a, int b) {
	return a > b ? a : b;
}