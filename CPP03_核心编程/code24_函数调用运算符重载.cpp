//#include<iostream>
//#include<string>
//using namespace std;
//
////�����������������  ---���� ����---���غ��ʹ��  �º���
//
//
////��ӡ�����
//class MyPrint
//{
//public:
//	//���غ������������
//	void operator()(string text)
//	{
//		cout << "���غ������������----------------" << endl;
//		cout << text << endl;
//	}
//
//};
//void test01()
//{
//	//���صģ��������� Ҳ��Ϊ�º���
//	MyPrint myFunc;
//	myFunc("hello world"); //ʹ�������ǳ������ں������ã����Գ�Ϊ�º���
//}
//
//
////�º����ǳ���û�й̶���д��  ---�ӷ���
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		cout << "���غ������������=================��" << endl;
//		return v1 + v2;
//	}
//};
//
//void test02()
//{
//	MyAdd add;
//	int ret = add(10, 10);
//	cout << "ret = " << ret << endl;
//	//���������������  ------MyAdd()---����һ����������
//	cout << "MyAdd()(100,100) = " << MyAdd()(100, 100) << endl;
//}
//
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
//
//
