//#include <iostream>
//using namespace std;
////全局变量---放在全局区中
//int g_a = 10;
//int g_b = 10;
//
//const int c_g_a = 20;
//const int c_g_b = 20;
//
//int main01() {
//	//局部变量
//	int a = 10;
//	int b = 10;
//	cout << "局部变量 a 的地址" << (int)&a << endl;
//	cout << "局部变量 b 的地址" << (int)&b << endl;
//	cout << "================================" << endl;
//	cout << "全局变量  g_a 的地址" << (int)&g_a << endl;
//	cout << "全局变量  g_b 的地址" << (int)&g_b << endl;
//
//	//静态变量---放在全局区中
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "静态变量  s_a 的地址" << (int)&s_a << endl;
//	cout << "静态变量  s_b 的地址" << (int)&s_b << endl;
//	cout << "================================" << endl;
//
//	//常量
//	//1.字符串常量---放在全局区中
//	cout << "字符串常量地址为: " << (int)&"Hello" << endl;
//	cout << "================================" << endl;
//	//2.const修饰的变量---放在全局区中
//	//2.1.const修饰的全局常量---放在全局区中
//	cout << "const修饰的全局常量 c_g_a 地址为: " << (int)&c_g_a << endl;
//	cout << "const修饰的全局常量 c_g_b 地址为: " << (int)&c_g_b << endl;
//	cout << "================================" << endl;
//	//2.2. const修饰的局部常量---不放在全局区中
//	int c_l_a = 10;
//	int c_l_b = 10;
//	cout << "const修饰的局部变量 c_l_a 地址为: " << (int)&c_l_a << endl;
//	cout << "const修饰的局部变量 c_l_b 地址为: " << (int)&c_l_b << endl;
//
//
//
//	system("pause");
//	return 0;
//
//}