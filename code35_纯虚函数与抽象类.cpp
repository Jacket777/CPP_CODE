//#include<iostream>
//#include<string>
//using namespace std;
//
///// <summary>
///// ���麯�� �ͳ�����
///// </summary>
//class Base
//{
//public:
//	//���麯��
//	//����ֻҪ��һ�����麯���ͳ�Ϊ������
//	//�������޷�ʵ��������
//	//���������д�����еĴ��麯��������Ҳ���ڳ�����
//	//�������ض�:
//    //1. �޷�ʵ��������
//	//2. ���������д�����еĴ��麯��������Ҳ���ڳ�����
//	virtual void func() = 0;
//};
//
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func����" << endl;
//	};
//};
//
//void test01()
//{
//	Base* base = NULL;
//	//base = new Base; // ���󣬳������޷�ʵ��������
//	base = new Son;
//	base->func();
//	delete base;//�ǵ�����
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}