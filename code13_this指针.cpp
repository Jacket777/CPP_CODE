//#include<iostream>
//#include<string>
//using namespace std;
//
//
////指针的用途
////1.解决名称冲突
////2.返回对象本身
//class Person {
//public:
//	int age;
//
// public:
//	Person(int age) {
//		//1.当形参和成员变量同名时，可用this指针来区别
//		//this指针指向的是被调用的成员函数所属的对象
//		this->age = age; 
//	}
//
//	Person& PersonAddPerson(Person &p) {
//		this->age += p.age;
//		return *this;  //2.返回对象本身
//	}
//
//
//	//另一种--返回新的对象，---调用拷贝构造韩
//	Person PersonAddAge(Person& p) {
//		this->age += p.age;
//		return *this;  //2.返回对象本身
//	}
//};
//
//
//
////1.解决名称冲突
//void test01() {
//	Person p1(10);
//	cout << " p1.age = " << p1.age << endl;
//
//}
//
////返回对象本身
//void test02() {
//	Person p1(10);
//	Person p2(10);
//	//链式编程思想
//	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
//	cout << " p2.age = " << p2.age << endl;
//
//}
//
//
//void test03() {
//	Person p1(10);
//	Person p2(10);
//	//链式编程思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << " p2.age = " << p2.age << endl;
//}
//
//
//int main() {
//	test02();
//	system("pause");
//	return 0;
//}