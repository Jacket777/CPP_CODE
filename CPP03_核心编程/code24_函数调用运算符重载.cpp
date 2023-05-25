//#include<iostream>
//#include<string>
//using namespace std;
//
////函数调用运算符重载  ---（） 重载---重载后的使用  仿函数
//
//
////打印输出类
//class MyPrint
//{
//public:
//	//重载函数调用运算符
//	void operator()(string text)
//	{
//		cout << "重载函数调用运算符----------------" << endl;
//		cout << text << endl;
//	}
//
//};
//void test01()
//{
//	//重载的（）操作符 也称为仿函数
//	MyPrint myFunc;
//	myFunc("hello world"); //使用起来非常类似于函数调用，所以称为仿函数
//}
//
//
////仿函数非常灵活，没有固定的写法  ---加法类
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		cout << "重载函数调用运算符=================》" << endl;
//		return v1 + v2;
//	}
//};
//
//void test02()
//{
//	MyAdd add;
//	int ret = add(10, 10);
//	cout << "ret = " << ret << endl;
//	//匿名函数对象调用  ------MyAdd()---创建一个匿名对象，
//	cout << "MyAdd()(100,100) = " << MyAdd()(100, 100) << endl;
//}
//
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
//
//
