//#include<iostream>
//#include<string>
//using namespace std;
//
//
////区别
////1.普通函数调用可以发生隐式类型转换
////2.函数模板 用自动类型推导，不可以发生隐式类型转换
////3.函数模板 用显示指定定义，可以发生隐式类型转换
//
////普通函数
//int myAdd01(int a, int b) {
//	return a + b;
//}
//
////函数模板
//template<class  T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'd';
//	cout << myAdd01(a, c) << endl;  //正确，隐式转换 将char类型的'c'隐式转换为int类型  'c' 对应 ASCII码 99
//	//myAdd02(a, c); // 报错，使用自动类型推导时，不会发生隐式类型转换
//	//显示指定类型---正确使用---规范使用
//	int result = myAdd02<int>(a, c); //正确，如果用显示指定类型，可以发生隐式类型转换
//	cout <<"result: "<< result << endl;
//
//}
//
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}