//#include<iostream>
//#include<string>
//using namespace std;
//
////不使用函数模板---则针对不同类型编写
////两个整型交换函数
//void swapInt(int &a, int &b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//
//void swapDouble(double &a, double &b) {
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
//
////利用模板提供通用的交换函数----本质 类型参数化 目的提高代码复用性---类比与Java中的泛型
//template<typename T> //声明一个模板，告诉编译器后面的代码中紧跟的T不要报错，T是一个通用数据类型
//void mySwap(T &a, T &b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//void test01() {
//	int a = 10;
//	int b = 20;
//
//	//swapInt(a, b);
//	//利用模板实现交换--两种方式
//	//1、自动类型推导
//	mySwap(a, b);
//	mySwap<int>(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	double c = 1.1;
//	double d = 2.2;
//	//2、显示指定类型
//	mySwap<double>(c, d);
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//}
//
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
