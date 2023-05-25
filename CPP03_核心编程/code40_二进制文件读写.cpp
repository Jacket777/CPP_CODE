#include<iostream>
#include<fstream>  //�ļ�������������ͷ�ļ�
#include<string>
using namespace std;


class Person {
public:
	char m_Name[64];
	int m_Age;
};


//������д�ļ�
void test01() {
	//2��������������� �����ļ�
	ofstream ofs("person.txt", ios::out | ios::binary);
	//3.���ļ�
	//ofs.open("person.txt", ios::out | ios::binary);
	Person p = { "����",18};
	//4. д�ļ�
	ofs.write((const char*)&p, sizeof(p)); //�ļ���������� ����ͨ��write�������Զ����Ʒ�ʽд����
	//5.�ر��ļ�
	ofs.close();
}


//�����ƶ��ļ�
void test02() {
	ifstream ifs("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
      cout << "�ļ���ʧ��"<<endl;
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