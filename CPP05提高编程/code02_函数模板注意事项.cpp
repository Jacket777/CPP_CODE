//#include<iostream>
//#include<string>
//using namespace std;
//
///*
//注意事项：
//1.自动类型推导，必须推导出一致的数据类型T 才可以使用
//2.模板必须要确定出T的数据类型，才可以使用
//*/
//
////利用模板提供的通用交换函数--typename 替换成class 没有区别
//template<class T>
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////1.自动类型推导，必须推导出一致的数据类型T 才可以使用
//void test01() {
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	mySwap(a, b); //正确，可以推导出一致的T
//	//mySwap(a, c)  //错误 ，a, c类型不一致
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
//
////2.模板必须要确定出T的数据类型，才可以使用
//template<class T>
//void func() {
//	cout << "func 调用" << endl;
//}
//
//void test02() {
//	//func()  //错误，模板不能独立使用，必须确定出T的类型
//	func<int>();
//	func<double>();
//}
//
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}