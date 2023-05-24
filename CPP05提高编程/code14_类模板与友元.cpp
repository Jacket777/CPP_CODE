//#include<iostream>
//#include<string>
//using namespace std;
////类模板配合友元函数类内部和外部实现
//
////通过全局函数 打印信息
//
////提前让编译器知道person类存在
//template<class T1, class T2>
//class Person；
//
//
////类外实现
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>p) {
//	cout << "类外实现-- name: " << p.m_Name << " age: " << p.m_Age << endl;
//}
//
//template<class T1, class T2>
//class Person {
//	//全局函数 类内部实现
//	friend void printPerson(Person<T1, T2>p) {
//		cout << " name: " << p.m_Name << " age: " << p.m_Age << endl;
//	}
//
//	//全局函数 类外部实现
//	//加空模板的参数列表 如果我们的全局函数类外实现，需要让编译器提前知道这个函数的存在
//	friend void printPerson2<>(Person<T1, T2>p);
//		
//public:
//	Person(T1 name, T2 age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//
//
//
//void test01() {
//	Person<string, int>p("tom", 20);
//	printPerson(p);
//}
//
//void test02() {
//	Person<string, int>p("tom2", 20);
//	printPerson2(p);
//}
//
//
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}