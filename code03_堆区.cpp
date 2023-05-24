//#include <iostream>
//using namespace std;
//
//int* func() {
//	//利用new 关键字，可以将数据开辟到堆区
//	//指针本质也是局部变量，放在栈上，指针保存的数也是放在栈上的
//	int *p = new int(10);
//	return p;
//}
//
//
//int* func0301() {
//	//在堆区创建一个整型的数据,new 返回的是该数据类型的指针
//	int* p = new int(10);
//	return p;
//}
//
//void test0301() {
//	int* p = func0301();
//	cout << *p << endl; //堆区的数据管理与开辟由程序员管理和释放，如果释放则用delete释放
//	cout << *p << endl;
//	cout << *p << endl;
//	delete p;
//	//cout << *p << endl; //不会打印. 会阻塞
//
//}
//
//
//void test0302() {
//	//创建10个整型数组
//	int * array = new int[10]; //代表数组的10个元素
//	for (int i = 0; i < 10; i++) {
//		array[i] = i + 100; //
//	}
//
//	for (int i = 0; i < 10; i++) {
//		cout << array[i] << endl;	
//	}
//
//	//释放数组
//	delete[]array;
//}
//
//int main03() {
//
//	//在堆区开辟数据
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << "=======1.new的基本语法=============" << endl;
//	test0301();
//
//	cout << "=======2.new的开辟数组=============" << endl;
//	test0302();
//
//	system("pause");
//	return 0;
//}