//#include<iostream>
//#include<string>
//using namespace std;
//
////构造函数调用规则
////1.创建一个类，C++编译器会给每个类都添加至少3个函数
//// 默认构造（空实现）
//// 析构函数（空实现）
////拷贝构造(值拷贝)
//
////2.如果我们写了有参构造函数，则不再提供无参构造函数
//
////3.如果写了拷贝构造函数，编译器则不提供其他函数
//
//class Person {
//public:
//	//Person() {
//	//	cout << "Person的默认构造函数调用" << endl;
//	//}
//	
//	Person(int age) {
//		cout << "Person的有参构造函数调用" << endl;
//		m_Age = age;
//
//	}
//
//	//如果不写，则进行默认拷贝构造函数调用
//	//Person(const Person& p) {
//	//	cout << "Person的拷贝构造函数调用" << endl;
//	//	m_Age = p.m_Age;
//	//}
//
//
//	~Person() {
//		cout << "Person的析构函数调用" << endl;
//	}
//	int m_Age;
//};
//
//
//
////void test01() {
////	Person p;
////	p.m_Age = 18;
////	Person p2(p);
////	cout << "p2的年龄: " << p2.m_Age << endl;
////}
////
////void test02() {
////	Person p;
////}
//
//void test03() {
//	Person p(28);
//	Person p2 = Person(p);
//	cout << p2.m_Age << endl;
//
//}
//
//int main() {
//	test03();
//	system("pause");
//	return 0;
//}