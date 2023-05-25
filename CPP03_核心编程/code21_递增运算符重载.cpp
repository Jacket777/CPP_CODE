//#include<iostream>
//#include<string>
//using namespace std;
////作用： 通过重载递增运算符，实现自己的整型数据
//
//
//class MyInteger {
//
//	friend ostream& operator<<(ostream& out, MyInteger myint);
//
//public:
//	MyInteger() {
//		m_Num = 0;
//	}
//	//前置++  为什么返回引用？ 为了一直对一个对象做这个操作
//	MyInteger& operator++() {
//		//先++
//		m_Num++;
//		//再返回
//		return *this;
//	}
//
//	//后置++
//	//int 表示占位参数 可以区分前置和后置递增
//	MyInteger operator++(int) {
//		//先返回
//		MyInteger temp = *this; //记录当前本身的值，然后让本身的值加1，但是返回的是以前的值，达到先返回后++；
//		m_Num++;
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
//
////重载左移运算符
//ostream& operator<<(ostream& out, MyInteger myint) {
//	out << myint.m_Num;
//	return out;
//}
//
//
////前置++ 先++ 再返回
//void test01() {
//	MyInteger myInt;
//	cout << ++myInt << endl;
//	cout << myInt << endl;
//}
//
////后置++ 先返回 再++
//void test02() {
//
//	MyInteger myInt;
//	cout << myInt++ << endl;
//	cout << myInt << endl;
//}
//
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}