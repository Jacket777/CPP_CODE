//#include<iostream>
//#include<string>
//using namespace std;
//
////���캯�����ù���
////1.����һ���࣬C++���������ÿ���඼�������3������
//// Ĭ�Ϲ��죨��ʵ�֣�
//// ������������ʵ�֣�
////��������(ֵ����)
//
////2.�������д���вι��캯���������ṩ�޲ι��캯��
//
////3.���д�˿������캯�������������ṩ��������
//
//class Person {
//public:
//	//Person() {
//	//	cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	//}
//	
//	Person(int age) {
//		cout << "Person���вι��캯������" << endl;
//		m_Age = age;
//
//	}
//
//	//�����д�������Ĭ�Ͽ������캯������
//	//Person(const Person& p) {
//	//	cout << "Person�Ŀ������캯������" << endl;
//	//	m_Age = p.m_Age;
//	//}
//
//
//	~Person() {
//		cout << "Person��������������" << endl;
//	}
//	int m_Age;
//};
//
//
//
////void test01() {
////	Person p;
////	p.m_Age = 18;
////	Person p2(p);
////	cout << "p2������: " << p2.m_Age << endl;
////}
////
////void test02() {
////	Person p;
////}
//
//void test03() {
//	Person p(28);
//	Person p2 = Person(p);
//	cout << p2.m_Age << endl;
//
//}
//
//int main() {
//	test03();
//	system("pause");
//	return 0;
//}