#include<iostream>
#include<string>
using namespace std;

/*
* ת���ַ�������
* 
*/
int main06() {

	// ���з� \n
	cout << "Hello world\n";
	//��б��
	cout << "\\" << endl;
	//ˮƽ�Ʊ��
	cout << "aaa\tHello World" << endl;
	cout << "a\tHello World" << endl;
	cout << "aaaaa\tHello World" << endl;

	cout << "--------c ���----------" << endl;
	char str[] = "Hello world";
	cout << str << endl;

	cout << "--------c++ ���----------" << endl;
	string str2  = "Hello world";
	cout << str2 << endl;

	cout << "--------boolean ֵ----------" << endl;
	//1.boolean ����, ���� 1 ��ʾ�棬 0 ��ʾ��
	bool flag = true;
	cout << flag << endl;  //
	flag = false;
	cout << flag << endl;
	cout << "boolean ������ռ�ռ�" << sizeof(bool) << endl;

	cout << "--------��������----------" << endl;
	//��������
	int a = 0;
	cout << "������ͱ���a ��ֵ" << endl;
	cin >> a;
	cout << "���ͱ����� a = " << a << endl;
	//������
	float f = 3.14f;
	cout << "��������ͱ�����ֵ��" << endl;
	cin >> f;
	cout <<  "�����ͱ��� f = " << f << endl;
	//�ַ���
	char ch = 'a';
	cout << "����ַ����ͱ�����ֵ��" << endl;
	cin >> ch;
	cout << "�ַ����ͱ��� ch = " << ch << endl;

	//�ַ���
	string str3 = "hello world";
	cout << "����ַ����ͱ�����ֵ��" << endl;
	cin >> str3;
	cout << "�ַ����ͱ��� str = " << str3 << endl;

	//��������  /0��ʾ�٣� ��0��ֵ��Ϊ�棬����ʱע����������
	bool flag2= false;
	cout << "��������ͱ�����ֵ��" << endl;
	cin >> flag2;
	cout << "�����ͱ��� flag = " << flag2 << endl;







	system("pause");
	return 0;
}
