//#include<iostream>
//#include<string>
//using namespace std;
//
//
////�����ǳ����
////ǳ���������������Ƕ��ڴ��ظ��ͷ�---������---���
//class Person {
//public:
//	Person() {
//		cout << "PersonĬ�ϵĹ��캯��" << endl;}
//	Person(int age, int height) {
//		cout << "Person���вι��캯��" << endl;
//		m_Age = age;
//		m_Height = new int(height);  //��ָ����ܶ��ϵ�����
//	}
//
//	//�Լ���д�������캯��ʵ�����
//	Person(const Person& p) {
//		cout << "Person �������캯������" << endl;
//		m_Age = p.m_Age;
//		//�������ṩ����ǳ���� m_Height = p.m_Height;
//		m_Height = new int(*p.m_Height);
//	}
//
//	~Person() {
//		//�����������������ͷŹ���
//		if (m_Height != NULL) {
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person------>��������" << endl;
//	}
//
//	int m_Age;
//	int *m_Height;
//};
//
//void test01() {
//	Person p1(18,160);
//	cout << " p1 age " << p1.m_Age <<"  p1 height"<<*p1.m_Height<< endl;  // *��ʾ�����ã��õ��õ�ַ�ϵ�����
//	Person p2(p1);
//	cout << " p2 age " << p2.m_Age << "  p2 height" << *p2.m_Height << endl;  // *��ʾ�����ã��õ��õ�ַ�ϵ�����
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}