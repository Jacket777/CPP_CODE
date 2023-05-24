//#include<iostream>
//#include<string>
//using namespace std;
//
///// <summary>
///// 继承同名静态成员处理方式
///// 子类：直接
///// 父类：加作用域
///// </summary>
//
//class Base {
//public:
//	static void func()
//	{
//		cout << "Base - static void func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base - static void func(int a)" << endl;
//	}
//
//	static int m_A; //类内部声明
//};
//
//int Base::m_A = 100; //类外初始化
//
//class Son : public Base {
//public:
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//	static int m_A;
//};
//
//int Son::m_A = 200;
//
////同名静态成员属性
//void test01()
//{
//	//通过对象访问
//	cout << "通过对象访问： " << endl;
//	Son s;
//	cout << "Son  下 m_A = " << s.m_A << endl;
//	cout << "Base 下 m_A = " << s.Base::m_A << endl;
//
//	//通过类名访问
//	cout << "通过类名访问： " << endl;
//	cout << "Son  下 m_A = " << Son::m_A << endl;
//	//注意不同 第一个表示通过类名来访问，第二个代表访问父类作用域下
//	cout << "Base 下 m_A = " << Son::Base::m_A << endl;  //注意不同 第一个表示
//}
//
////同名静态成员函数
//void test02()
//{
//	//通过对象访问
//	cout << "通过对象访问： " << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//
//	cout << "通过类名访问： " << endl;
//	Son::func();
//	Son::Base::func();
//	//出现同名，子类会隐藏掉父类中所有同名成员函数，需要加作作用域访问
//	Son::Base::func(100);
//}
//int main() {
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}