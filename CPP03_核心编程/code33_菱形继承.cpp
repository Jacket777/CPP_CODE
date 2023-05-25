//#include<iostream>
//#include<string>
//using namespace std;
//
//
///*
//* 菱形继承带来的主要问题是子类继承两份相同的数据，导致资源浪费以及毫无意义
//* 利用虚继承可以解决菱形继承问题
//* vbptr v--virtual base pointer
//* 指针指向虚基类表
//*/
//
////动物类
//class Animal {
//public:
//	int m_Age;
//};
//
////继承前加virtual关键字后，变为虚继承
////此时公共的父类Animal称为虚基类
////羊类
//class Sheep:virtual public Animal{};
//
////骆驼类
//class Tuo: virtual public Animal{};
//
////羊驼类
//class SheepTuo: public Sheep,public Tuo{};
//
//
//void testZ() {
//	SheepTuo st;
//	st.Sheep::m_Age = 100;
//	st.Tuo::m_Age = 200;
//	//当出现菱形继承的时候，两个父类拥有相同的数据，需要加以作用域区分
//	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
//	//这份数据只要有一份就可以了，但是由于菱形继承导致了两份，浪费空间
//	cout << "st.m_Age = " << st.m_Age << endl;
//	cout << "SheepTuo size:  " << sizeof(SheepTuo) << endl;
//}
//
//
//int main() {
//	testZ();
//	system("pause");
//	return 0;
//}