//#include <iostream>
//#include<string>
//using namespace std;
//
////交换函数
////1.值传递
//void swap0401(int a, int b) {
//	int temp = a;
//	b = a;
//	a = temp;
//}
////2.地址传递
//void swap0402(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////3.引用传递
//void swap0403(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////1.不要返回局部变量的引用
//int& test0401() {
//	int a = 10;
//	return a;
//}
//
//int& test0402() {
//	static int a = 10; //静态变量 放在全局区中全局区上的数据在程序结束后释放
//	return a;
//}
//
//
//
////引用的本质
//void func0401(int& ref) {
//	ref = 100; //ref是引用，转换为 *ref = 100
//
//}
//
////打印数据
//void showValue(const int& val) {
//	//val = 1000; 不能修改数据
//	cout << val << endl;
//}
//
//
//
//int main04() {
//	cout << "=====1.引用的基本语法============" << endl;
//	//int a = 10;
//	//int& b = a;
//	//cout << " a = " << a << endl;
//	//cout << " b = " << b << endl;
//	//b = 100;
//	//cout << "-----------------------" << endl;
//	//cout << " a = " << a << endl;
//	//cout << " b = " << b << endl;
//	cout << "=====2.引用的注意事项============" << endl;
//	////引用必须初始化,初始化后不能再改变
//	//int a2 = 10;
//	////int& b2; //错误代码，必须初始化
//	//int& b2 = a2;
//	//int c2 = 20;
//	//b2 = c2; //赋值操作，不是更改引用
//	//cout << " a2 = " << a2 << endl;
//	//cout << " b2 = " << b2 << endl;
//	//cout << " c2 = " << c2 << endl;
//
//	
//	cout << "=====3.引用用作函数参数============" << endl;
//	//int a = 10;
//	//int b = 20;
//	////swap0401(a, b);
//	////swap0402(&a, &b); //地址传递，形参会修饰实参
//	//swap0403(a, b); //引用传递，形参会修饰实参
//	//cout << " a = " << a << endl;
//    //cout << " b = " << b << endl;
//
//	cout << "=====4.引用用作函数的返回值============" << endl;
//	////1.不要返回局部变量的引用
//	//int& ref = test0401();
//	//cout << ref << endl;  //第一次结果正确，这是因为编译器做了保留
//	//cout << ref << endl;   //第二次结果错误，因为内存已经释放
//
//	////2.函数的调用可以作为左值
//	//int& ref2 = test0402();
//	//cout << ref2 << endl;
//	//cout << ref2 << endl;
//	//cout << ref2 << endl;
//	//cout << ref2 << endl;
//	//test0402() = 1000;  //如果函数的返回值是引用，这个函数可以作为左值
//	//cout << ref2 << endl;
//	//cout << ref2 << endl;
//
//
//	cout << "=====5.引用的本质============" << endl;
//	//int a = 10;
//	//int& ref = a; //编译器发现这行代码 转换为 int * const ref = &a 也就是指针常量
//	//ref = 20;//内部发现ref是引用，自动帮我们转换为*ref = 20
//	//cout << "a:" << a << endl;
//	//cout << "ref: " << ref << endl;
//	//func0401(a);
//	//cout << "ref: " << ref << endl;
//
//	cout << "=====6.常量引用============" << endl;
//	//常量引用
//	//使用场景：用来修饰形参，防止误操作
//	int a = 10;
//	//int& ref = 10; //语法错误，引用必须引一块合法的内存空间
//	const int& ref = 10; //加上const之后，编译器将代码修改 int temp = 10; const int& ref = temp;
//	//ref = 20  //加上const之后，不可以被修改
//	int b = 10;
//	showValue(b);
//
//
//
//
//
//
//
//	system("pause");
//	return 0;
//}