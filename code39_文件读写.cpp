//#include<iostream>
//#include<fstream>  //文件处理必须包含该头文件
//#include<string>
//using namespace std;
//
////1.文本文件 写文件
//void test01() {
//	ofstream ofs;  //2.创建流对象  ---写操作 ofstream === out file stream
//	ofs.open("test.txt", ios::out);  //3.打开文件 ofs.open("文件路径",打开方式);  ios::out 为写文件而打开文件
//	ofs << "name: jack" <<endl;  //4. 写数据
//	ofs << "sex: man" << endl;
//	ofs << "age: 18" << endl;
//	ofs.close();//5. 关闭文件
//
//}
//
//
////2.文本文件---读文件
//void test02() {
//	ifstream ifs;  //创建流对象  ---读操作 ifstream == input file stream
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) {  //利用is_open函数可以判断文件是否打开成功
//		cout << "头文件打开失败" << endl;
//		return;
//	}
//
//	char buf[1024] = { 0 };
//	//4.读数据
//	// 第一种读取方式---读取空格时会当做换行符处理
//	//while (ifs >> buf) {
//	//	cout << buf << endl;
//	//	cout << "-----------------" << endl;
//	//}
//
//	// 第二种读取方式---读取空格时不会当做换行符处理
//	//while (ifs.getline(buf, sizeof(buf))) {
//	//	cout << buf << endl;
//	//}
//
//	ifs.close();//关闭
//}
//
//
//
//
//
//void test03() {
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) {
//		cout << "头文件打开失败" << endl;
//		return;
//	}
//	string buf;
//	while (getline(ifs,buf)) {
//		cout << buf << endl;
//	}
//	ifs.close();//关闭
//}
//
//
//
////不推荐使用
//void test04() {
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) { 
//		cout << "头文件打开失败" << endl;
//		return;
//	}
//	char c ;
//	//读到文件尾 EOF = end of file
//	while ((c=ifs.get())!=EOF) {
//		cout << c ;
//	}
//	ifs.close();//关闭
//}
//
//
//
//int main() {
//	//test01();
//	//test02();
//	//test03();
//	test04();
//	system("pause");
//	return 0;
//}
