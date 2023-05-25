//#include <iostream>
//using namespace std;
//
////栈区的数据由编译器管理开辟和释放
////栈区数据注意事项--不要返回局部变量的地址
//
//int* func(int b) {  //形参的数据也会放在栈区
//	b = 100; 
//	int a = 10; //局部变量存放在栈区中，栈区的数据在函数执行完后自动释放
//	return &a;  //返回局部变量的地址
//}
//
//int main02() {
//	int* p = func(1);
//	cout << *p << endl;  //输出10---第一次可以打印正确的数据，是因为编译器做了保留
//	cout << *p << endl;  //输出乱码--第二次这个数据不再保留
//	system("pause");
//	return 0;
//}