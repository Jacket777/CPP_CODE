#include<iostream>
#include<string>
using namespace std;

//1、构造函数分类
// 按照参数分类分为 有参和无参构造   无参又称为默认构造函数
// 按照类型分类分为 普通构造和拷贝构造

//class Person {
////1.1. 构造函数 没有返回值， 不用写void,函数名与类名相同，，可以有参数，可以发生重载，创建对象时，构造函数会自动调用，而且只调用一次
//public:
//	Person() {
//		//无参[默认]构造函数
//		cout << "无参构造函数" << endl;
//	}
//
//	Person(int a){
//		age = a;
//		cout << " 有参构造函数 age = "<< a << endl;
//	}
//
//
//	//拷贝构造函数--引用的方式
//	Person(const Person& p) {
//		age = p.age;
//		cout << "拷贝构造函数" << endl;
//	}
//
//	//析构函数再释放内存之前调用  没有返回值，不写void , 
//函数名与类名相同，在名称前加~，
//析构函数不可以有参数，不可以发生重载，
//对象在销毁前，会自动调用析构函数，而且只会调用一次

//	~Person() {
//		cout << "析构函数" << endl;
//	}
//
//public:
//	int age;
//};
//
//
//
////2.构造函数的调用
//void test01() {
//在栈上的数据，test01执行完毕后，释放这个对象
//	Person p; //注意1.调用无参构造函数，不能加括号，如果加了编译器会认为是一个函数的声明
//}
//
//
////调用有参的构造函数
//void test02() {
//	//2.1. 括号法， 常用
//	Person p1(10);
//
//	//2.2. 显示法， 常用
//	Person p2 = Person(20);
//	Person p3 = Person(p2);
//	//Person(10); 单独写就是匿名对象，当前结束之后，马上析构
//
//	//2.3. 隐式转换法，
//	Person p4 = 30; // Person p4 = Person(30);
//	Person p5 = p4; //Person p5 = Person(p4);
//	//Person p5(p4) 注意2.不能利用拷贝构造函数，初始化匿名对象，编译器认为是对象声明 
//}
//
////拷贝构造函数调用时机
////3.1. 使用一个已经创建完毕的对象来初始化一个新对象
//void test03() {
//	Person man(100); //p对象已经创建完毕
//	Person newman(man);//调用拷贝构造函数
//	Person newman2 = man; //拷贝构造
//
//	//Person newman3;
//	//newman3 = man; //不是调用拷贝构造函数，赋值操作
//}
//
//
////3.2 值传递的方式给函数传值
////相当于 Person p1 = p
//void doWork(Person p1){}
//void test04() {
//	Person p; //无参构造函数
//	doWork(p);
//}
//
////3.3.以值方式返回局部对象
//Person doWork2() {
//	cout << "进入 doWork2 函数" << endl;
//	Person p1;
//	cout << (int *)&p1<< endl; //打印地址
//	return p1; //返回的p1不是原来的，而是拷贝
//}
//
//void test05() {
//	Person p = doWork2();
//	cout << (int*)&p << endl;//打印地址--不相同的
//}
//
//
//
////构造函数调用规则
//void test06(){
//	Person p1(18);
//	Person p2(p1); //如果不写拷贝构造，编译器自动添加拷贝构造，并且做浅拷贝操作
//	cout << "p2 age: " <<p2.age<< endl;
//}
//
//
//void test07() {
//	//如果用户提供有参构造，编译器不会提供默认构造，会提供拷贝构造
//	Person p1; //此时如果用户自己没有提供默认构造，会出错
//	Person p2(10); //用户提供有参
//	Person p3(p2);//此时如果用户没有提供拷贝构造，编译器会提供
//
//	//如果用户提供拷贝构造，编译器不会提供其他构造函数
//	Person p4;//此时如果用户自己没有提供默认构造，会出错
//	Person p5(10);//此时如果用户自己没有提供有参，会出错
//	Person p6(p5); //用户自己提供拷贝构造
//}
//
//
//int main07() {
//	//test01();
//	//test02();
//
//	//test05();
//	test06();
//	system("pause");
//	return 0;
//}