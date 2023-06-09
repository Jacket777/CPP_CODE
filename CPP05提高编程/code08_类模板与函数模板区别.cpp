//#include<iostream>
//#include<string>
//using namespace std;
//
////类模板与函数模板区别
////1. 类模板没有自动类型推导的使用方式
////2. 类模板在模板参数列表中可以有默认参数--?
//
//
////类模板  指定默认参数类型
//template<class NameType, class AgeType=int>
//class Person {
//public:
//	Person(NameType name, AgeType age) {
//		this->mName = name;
//		this->mAge = age;
//	}
//	void showPerson() {
//		cout << " name: " << this->mName << " age: " << this->mAge << endl;
//	}
//public:
//	NameType mName;
//	AgeType mAge;
//};
//
//
////1. 类模板没有自动类型推导的使用方式
//void test01() {
//	//Person p("Jack", 1000);  //错误，类模板使用的时候，不可以用自动类型推导
//	Person<string, int>p("Jack", 1000); //正确，必须使用显式指定类型方式，使用类模板
//	p.showPerson();
//}
//
////2. 类模板在模板参数列表中可以有默认参数--template<class NameType, class AgeType=int>
//void test02() {
//	Person<string>p("tom", 99999); //类模板中的模板参数列表，可以指定默认参数
//	p.showPerson();
//}
//
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}