//#include<iostream>
//#include<string>
//using namespace std;
//
//
///// <summary>
///// 在C++中，类内的成员变量和成员函数分开存储
//
///// </summary>
//
//class Person {
////public:
////	Person() {
////		mA = 0;
////	}
////	
//	int mA;         //非静态成员变量占对象空间
//	static int mB;  //静态成员变量不占对象空间
////	
////	//非静态成员函数，不属于类对象函数也不占对象空间，所有函数共享一个函数实例
////	void func() {
////		cout << " mA " << this->mA << endl;
////	}
////
////	//静态成员函数也不占对象空间， 不属于类对象
////	static void sfunc() {
////
////	}
//    
//};
//int Person::mB = 5;
//
//
//void test01() {
//	Person p;
//	//空对象占用空间大小为：1
//	//c++编译器会给每个对象也分配一个字节空间，是为区分空对象占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//	cout << "size of p = " << sizeof(p) << endl;
//
//}
//
//void test02() {
//	Person p;
//	//空对象占用空间大小为：1
//	//c++编译器会给每个对象也分配一个字节空间，是为区分空对象占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//	cout << "size of p = " << sizeof(p) << endl;
//
//}
//
//
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
//
//
