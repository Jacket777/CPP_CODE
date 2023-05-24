#include<iostream>
#include<string>
using namespace std;

/*
* 转义字符与输入
* 
*/
int main06() {

	// 换行符 \n
	cout << "Hello world\n";
	//反斜杠
	cout << "\\" << endl;
	//水平制表符
	cout << "aaa\tHello World" << endl;
	cout << "a\tHello World" << endl;
	cout << "aaaaa\tHello World" << endl;

	cout << "--------c 风格----------" << endl;
	char str[] = "Hello world";
	cout << str << endl;

	cout << "--------c++ 风格----------" << endl;
	string str2  = "Hello world";
	cout << str2 << endl;

	cout << "--------boolean 值----------" << endl;
	//1.boolean 类型, 本质 1 表示真， 0 表示假
	bool flag = true;
	cout << flag << endl;  //
	flag = false;
	cout << flag << endl;
	cout << "boolean 类型所占空间" << sizeof(bool) << endl;

	cout << "--------数据输入----------" << endl;
	//整型输入
	int a = 0;
	cout << "请给整型变量a 赋值" << endl;
	cin >> a;
	cout << "整型变量的 a = " << a << endl;
	//浮点型
	float f = 3.14f;
	cout << "请给浮点型变量赋值：" << endl;
	cin >> f;
	cout <<  "浮点型变量 f = " << f << endl;
	//字符型
	char ch = 'a';
	cout << "请给字符型型变量赋值：" << endl;
	cin >> ch;
	cout << "字符型型变量 ch = " << ch << endl;

	//字符串
	string str3 = "hello world";
	cout << "请给字符串型变量赋值：" << endl;
	cin >> str3;
	cout << "字符串型变量 str = " << str3 << endl;

	//布尔类型  /0表示假， 非0的值都为真，输入时注意输入数字
	bool flag2= false;
	cout << "请给布尔型变量赋值：" << endl;
	cin >> flag2;
	cout << "布尔型变量 flag = " << flag2 << endl;







	system("pause");
	return 0;
}
