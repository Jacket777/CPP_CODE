//#include<vector>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//
////1.构造方法
//void test01() {
//	string s1; //默认构造 创建空字符串，调用无参构造函数 
//	cout << " str1 = " << s1 << endl;
//	const char* str = "Hello world";
//	string s2(str);//把c_string转换成了string //c语言的构造函数
//	cout << "str2 = " << s2 << endl;
//
//	string s3(s2);//调用拷贝构造函数
//	cout << "str3 = " << s3 << endl;
//	string s4(10,'a');  //10个a
//	cout << "str4 = " << s4 << endl;
//}
//
//
////2.赋值操作
//void test02() {
//	string str1;
//	str1 = "hello world";
//	cout << " str1 = " << str1 << endl;
//	string str2;
//	str2 = str1;
//	cout << "str2=" << str2 << endl;
//	string str3;
//	str3 = 'a';
//	cout << "str3=" << str3 << endl;
//	string str4;
//	str4.assign("hello c++");
//	cout << "str4 = " << str4 << endl;
//	string str5;
//	str5.assign("hello c++", 5); //把字符串前5个字符赋值
//	cout << "str5 = " << str5 << endl;
//	string str6;
//	str6.assign(str5);
//	cout << "str6=" << str6 << endl;
//	string str7;
//	str7.assign(5, 'x');//5个x赋值
//	cout << "str7 = " << str7 << endl;
//}
//
//
///*
//* 
//* *`string& operator+=(const char* str); `                   //重载+=操作符
//* `string& operator+=(const char c); `                         //重载+=操作符
//* `string& operator+=(const string& str); `                //重载+=操作符
//* `string& append(const char* s); `                               //把字符串s连接到当前字符串结尾
//* `string& append(const char* s, int n); `                 //把字符串s的前n个字符连接到当前字符串结尾
//* `string& append(const string& s); `                           //同operator+=(const string& str)
//* `string& append(const string& s, int pos, int n); `/ / 字符串s中从pos开始的n个字符连接到字符串结尾
//*/
//
////
//
//
////3.字符串拼接
//void test03() {
//	string str1 = "I";
//	str1 += "love game";
//	cout << "str1 = " << str1 << endl;
//	str1 += ':';
//	cout << "str1 = " << str1 << endl;
//
//	string str2 = "LOL DNF";
//	str1 += str2;
//	cout << "str1 = " << str1 << endl;
//	string str3 = "I";
//	str3.append(" love ");
//	str3.append(" game abc ", 4); //字符串s的前n个字符连接到当前字符串结尾
//	str3.append(str2, 4, 3);// 从下标4位置开始 ，截取3个字符，拼接到字符串末尾
//	cout << "str3 = " << str3 << endl;
//}
//
//
///*
//总结：
//
//* find查找是从左往后，rfind从右往左
//* find找到字符串后返回查找的第一个字符位置，找不到返回-1
//* replace在替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符串
//
//*/
//
////查找
//void test04() {
//	string str1 = "abcdefgde";
//	int pos = str1.find("de");
//	if (pos == -1) {
//		cout << "未找到该字符" << endl;
//	}
//	else {
//		cout << "该字符所在的位置 pos = " << pos << endl;
//	}
//
//	//rfind从右往左查，find从左往右查
//	pos = str1.rfind("de");
//	cout << " pos = " << pos << endl;
//}
//
//
////替换
//void test05() {
//	string str1 = "abcdefgh";
//	//从1号位置起3个字符替换为1111111
//	str1.replace(1, 3, "1111111");  //replace在替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符串
//	cout << "str1 = " << str1 << endl;
//}
//
//
////字符串比较
///*
//**功能描述：**
//* 字符串之间的比较
//**比较方式：**
//* 字符串比较是按字符的ASCII码进行对比
//= 返回   0
//> 返回   1
//< 返回  -1
//**函数原型：**
//* `int compare(const string &s) const; `  //与字符串s比较
//* `int compare(const char *s) const;`      //与字符串s比较
//*/
//
//void test010(){
//	string s1 = "hello";
//	string s2 = "aello";
//	int ret = s1.compare(s2);
//	if (ret == 0) {
//		cout << "s1 等于 s2" << endl;
//	}else if (ret > 0){
//		cout << "s1 大于 s2" << endl;
//	}else{
//		cout << "s1 小于 s2" << endl;
//	}
//}
//
//
///*
//#### 3.1.7 string字符存取
//string中单个字符存取方式有两种
//* `char& operator[](int n); `     //通过[]方式取字符
//* `char& at(int n);              //通过at方法获取字符
//*/
//
////存取
//void test06() {
//	string str = "hello world";
//	for (int i = 0; i < str.size(); i++) {
//		cout << str[i] << "----";
//	}
//	cout << endl;
//	//通过at方法获取字符
//	for (int i = 0; i < str.size(); i++) {
//		cout << str.at(i) << "====";
//	}
//	cout << endl;
//	cout << "change content" << endl;
//	str[0] = 'b';
//	str.at(1) = 'x';
//	cout << str << endl;
//}
//
//
///*
//#### 3.1.8 string插入和删除
//**功能描述：**
//* 对string字符串进行插入和删除字符操作
//**函数原型：**
//* `string& insert(int pos, const char* s);  `                  //插入字符串
//* `string& insert(int pos, const string& str); `              //插入字符串
//* `string& insert(int pos, int n, char c);`                  //在指定位置插入n个字符c
//* `string& erase(int pos, int n = npos);`                   //删除从Pos开始的n个字符
//
//**总结：**插入和删除的起始下标都是从0开始
//*/
////字符串的插入和删除
//void test07() {
//	string str = "hello";
//	str.insert(1, "100");
//	cout << str << endl;
//	str.erase(1, 3);//从1号位置开始3个字符 删除
//	cout << str << endl;
//}
//
////子串
///*
//#### 3.1.9 string子串
//**功能描述：**
//* 从字符串中获取想要的子串
//**函数原型：**
//* `string substr(int pos = 0, int n = npos) const;`   //返回由pos开始的n个字符组成的字符串
//* **总结：**灵活的运用求子串功能，可以在实际开发中获取有效的信息
//*/
//
//void test08() {
//	string str = "abcdefg";
//	string substr = str.substr(1, 3);
//	cout << "substr = " << substr << endl;
//	string email = "hello345@sina.com";
//	int pos = email.find("@");
//	string username = email.substr(0, pos);
//	cout << "username: " << username << endl;
//}
//
//
//
//
//int main() {
//	//test01();
//	test08();
//	system("pause");
//	return 0;
//}
//
