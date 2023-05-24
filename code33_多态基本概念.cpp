//#include<iostream>
//#include<string>
//using namespace std;
///// <summary>
///// 多态的基本概念
///// </summary>
//
//class Animal {
//public:
//	//Speak函数就是虚函数
//	//函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了。
//	//如果不加，则函数地址早绑定
//	virtual void speak() {
//		cout << "anmial speak " << endl;
//	}
//};
//
//
//
//class Cat:public Animal {
//public:
//	//当子类重写父类的虚函数，子类中虚函数表，内部会替换成子类的虚函数地址
//	void speak() {
//		cout << "cat speak " << endl;
//	}
//};
//
//
//class Dog :public Animal {
//public:
//	void speak() { //virtual关键字可写可不写
//		cout << "dog speak " << endl;
//	}
//};
//
//
////我们希望传入什么对象，那么就调用什么对象的函数
////如果函数地址在编译阶段就能确定，那么静态联编
////如果函数地址在运行阶段才能确定，就是动态联编
////重写：函数返回值类型  函数名 参数列表 完全一致称为重写
//void DoSpeak(Animal& animal)
//{
//	animal.speak();
//}
////
////多态满足条件： 
////1、有继承关系
////2、子类重写父类中的虚函数
////多态使用：
////父类指针或引用指向子类对象
//void test01()
//{
//	Cat cat;
//	DoSpeak(cat);
//	Dog dog;
//	DoSpeak(dog);
//}
//
//
//void test02() {
//	//空对象字节为1  ---比较加virtual 与不加virtual
//	//加上virtual 则变成 4个字节， 它是一个指针大小  里面有有一个vfptr  虚函数表指针  指向vftable 虚函数表 该表中记录虚函数地址
//	//有一个指针
//	cout << " animal size： " << sizeof(Animal) << endl;
//	cout << " dog size： " << sizeof(Dog) << endl;
//}
//
//
//int main() {
//	test02();
//	system("pause");
//	return 0;
//}
//
//
