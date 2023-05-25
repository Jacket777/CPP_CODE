//#include <iostream>
//#include<string>
//using namespace std;
//
////01函数默认参数
///*
//* 如果我们自己传入参数，就用自己的数据，如果没有就用默认值
//* 语法 返回值类型 函数名(形参=默认值)
//* 注意事项
//* 1.如果某个位置已经有默认参数，就从之个参数后面，从左到右都必须有默认值
//* 2. 如果函数声明有默认参数，函数实现不能有默认参数  --运行时报错
//* 声明和实现只有一个默认参数
//*/
//int func0501(int a, int b = 20, int c=30) {
//	return a + b + c;
//}
//
//int fun0502(int a=10, int b=10);
//
//int fun0502(int a , int b) {
//	return a + b;
//}
//
//
////02. 函数的占位参数--int
////目前占位参数还用不到，
////占位参数可以有默认参数
//void func0503(int a, int = 10) {
//	cout << "this func" << endl;
//}
//
////函数重载
////满足条件: A 在同一个作用域下， B. 函数名相同，C.函数参数类型不同 或个数不同呢， 或顺序不同
////函数返回值不同不能作为函数函数重载
//void func0504(){
//	cout << "func 函数的调用" << endl;
// }
//
//void func0504(int n ) {  //参数个数不同
//	cout << "func(int n ) 函数的调用" << endl;
//}
//
//void func0504(double n) {  //参数类型不同
//	cout << "func(double n ) 函数的调用" << endl;
//}
//
//void func0504(int a, double b) {  //参数类型不同
//	cout << "func(int a, double b ) 函数的调用" << endl;
//}
//
//void func0504(double a, int  b) {  //顺序不同
//	cout << "func(int a, double b ) 函数的调用" << endl;
//}
//
////函数返回值不同不能作为函数函数重载
////int func0504() {
////	return 0;
////}
//
//
////03.函数重载 注意事项
////1.引用作为重载的条件
//void func0505(int &a ) {  //int &a = 10 ;//不合法
//	cout << "func0505(int &a )" << endl;
//}
//
//void func0505(const int &a) { // const int &a = 10
//	cout << "func0505(const int &a)" << endl;
//}
////2.函数重载碰到默认参数--编译器报错
//void func0506(int a, int b=10) {
//	cout << "func0506(int a, int b)" << endl;
//}
//
//void func0506(int a) {
//	cout << "func0506(int a)" << endl;
//}
//
//int main05() {
//	cout << func0501(10) << endl;
//	cout << func0501(10,30) << endl;
//	func0503(10, 30);
//
//	cout << "================函数重载 注意事项=================" << endl;
//	int a = 20;
//	func0505(a);
//	func0505(10);
//	//func0506(10); 函数遇到默认参数，出现二义性
//
//	system("pause");
//	return 0;
//}