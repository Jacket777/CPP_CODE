//#include<iostream>
//#include<string>
//using namespace std;
////���ã� ͨ�����ظ�ֵ�������ʵ���Լ������͸�ֵ
//
//class Person
//{
//public:
//
//	Person(int age)
//	{
//		//���������ݿ��ٵ�����
//		m_Age = new int(age);
//	}
//
//	//���ظ�ֵ����� ---��������--��������
//	Person& operator=(Person& p)
//	{
//		//�������ṩ�Ĵ�����ǳ����
//	     //m_Age = p.m_Age;
//		//1.Ӧ�����ж��������ڶ���������У������ͷŸɾ��� Ȼ�������
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//�ṩ��� ���ǳ����������
//		m_Age = new int(*p.m_Age);
//
//		//��������
//		return *this;
//	}
//
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	//�����ָ��
//	int* m_Age;
//
//};
//
//
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1; //��ֵ����
//
//	cout << "p1������Ϊ��" << *p1.m_Age << endl;
//	cout << "p2������Ϊ��" << *p2.m_Age << endl;
//	cout << "p3������Ϊ��" << *p3.m_Age << endl;
//}
//
//int main() {
//	test01();
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//c = b = a;
//	//cout << "a = " << a << endl;
//	//cout << "b = " << b << endl;
//	//cout << "c = " << c << endl;
//	system("pause");
//	return 0;
//}