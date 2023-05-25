#include<iostream>
#include<fstream>  //文件处理必须包含该头文件
#include<string>
using namespace std;


class Person {
public:
	char m_Name[64];
	int m_Age;
};


//二进制写文件
void test01() {
	//2、创建输出流对象 并打开文件
	ofstream ofs("person.txt", ios::out | ios::binary);
	//3.打开文件
	//ofs.open("person.txt", ios::out | ios::binary);
	Person p = { "张三",18};
	//4. 写文件
	ofs.write((const char*)&p, sizeof(p)); //文件输出流对象 可以通过write函数，以二进制方式写数据
	//5.关闭文件
	ofs.close();
}


//二进制读文件
void test02() {
	ifstream ifs("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
      cout << "文件打开失败"<<endl;
	  return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(p));
	cout << "name: " << p.m_Name << " age: " << p.m_Age << endl;
}


int main() {
	test02();
	system("pause");
	return 0;
}