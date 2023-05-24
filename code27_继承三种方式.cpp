//#include<iostream>
//#include<string>
//using namespace std;
//
////继承的三种方式：
////1.公共继承：父类中私有不能访问，父类中公共和包含权限 还是原来
////2.保护继承：父类中私有不能访问，父类中公共和包含权限变为保护权限
////3.私有继承：父类中私有不能访问，父类中公共和包含权限变为私有权限
//
////基类
//class Base {
//public: 
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//
//
////1.公共继承
//class Son1 :public Base{
//public:
//		void func() {
//		m_A=10;//父类中公共权限成员到子类中依然是公共权限    可访问public 权限
//		m_B=10; //父类中保护权限成员到子类中依然是保护权限       可访问 protected权限
//		//m_C = 10; //父类中私有权限成员到子类中无法访问  不可访问,编写时报错
//	}
//};
//
//
////测试
//void myClass()
//{
//	Son1 s1;
//	s1.m_A = 100; //其他类只能访问到公共权限
//	//s1.m_B = 100; m_B是保护权限，无法访问
//
//}
//
////2.保护继承
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A = 100; //父类中的公共权限 到子类中变成保护权限 可访问 protected权限
//		m_B = 100; //父类中的公共权限 到子类中变成保护权限 可访问 protected权限
//		//m_C; //父类中私有成员，子类不可访问
//	}
//};
//void myClass2()
//{
//	Son2 s;
//	//s.m_A = 100; //变成保护权限，类外不可访问
//	//s.m_B = 100; //变成保护权限，类外不可访问
//}
//
////3.私有继承
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A  = 100 ; //父类中公共成员到子类中变为私有成员 可访问 private权限
//		m_B = 100;   //父类中保护成员到子类中变为私有成员 可访问 private权限
//		//m_C; //父类中私有成员，子类不可访问
//	}
//};
//
////证明son3 私有继承 
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//Son3是私有继承，所以继承Son3的属性在GrandSon3中都无法访问到
//		//m_A;
//		//m_B;
//		//m_C;
//	}
//};