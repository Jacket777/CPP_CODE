//#include<iostream>
//#include<string>
//using namespace std;
//
////类模板与继承
////1.子类继承父类，必须知道父类总T的类型
////2.如果想灵活指定父类的T的类型，子类也需要变成类模板
//
//
//template<class T>
//class Base {
//	T m;
//};
//
////class Son:public Base  //错误，c++编译需要给子类分配内存，必须知道父类中T的类型才可以向下继承 
//class Son :public Base<int>//必须指定一个类型 
//{
//};
//
//void test01() {
//	Son c;
//}
//
////类模板继承类模板 ,可以用T2指定父类中的T类型 
//
//template<class T1, class T2>
//class Son2 :public Base<T2>
//{
//	T1 obj;
//public:
//
//	Son2() {
//		cout <<"T1 type is "<< typeid(T1).name() << endl;
//		cout <<"T2 type is " << typeid(T2).name() << endl;
//	}
//};
//
//void test02() {
//	Son2<int, char>child1;
//}
//
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}