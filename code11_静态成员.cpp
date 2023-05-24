//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person {
//public:
//	//静态成员函数--只可以访问静态成员变量，不能访问非静态成员变量
//	static void func() {
//		cout << "func call" << endl;
//		m_A = 100;
//		
//	}
//	static int m_A;//静态成员变量
//	int m_B;//
//
//private:
//	//静态成员函数也是有访问权限的
//	static void func2() {
//		cout << "func2 call " << endl;
//	}
//};
//int Person::m_A = 10;
//
//void test1101() {
//	//静态成员变量两种访问方式
//	//1.通过对象
//	Person p1;
//	p1.func();
//
//	//2.通过类名
//	Person::func();
//
//	//Person::func2  //私有权限访问不到
//
//}
//
//
//int main() {
//	test1101();
//	system("pause");
//	return 0;
//}