//#include<iostream>
//#include<string>
//using namespace std;
//
////���������������ͣ�������֪����ν�������
//
//class Person {
//public:
//	Person() {};
//	Person(int a, int b) {
//		this->m_A = a;
//		this->m_B = b;
//	}
//
//	//��Ա����ʵ�� + �����������
//	//������ͳһ����operator+  p.operator+(p2)
//	//Person operator+(const Person& p) {
//	//	cout << "��Ա����ʵ������" << endl;
//	//	Person temp;
//	//	temp.m_A = this->m_A + p.m_A;
//	//	temp.m_B = this->m_B + p.m_B;
//	//	return temp;
//	//}
//
//public:
//	int m_A;
//	int m_B;
//
//};
//
//
////ȫ�ֺ�����������ر���operator+(p1,p2)
//Person operator+(Person& p1, Person& p2) {
//	cout<< "ȫ�ֺ���ʵ������" << endl;
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//
//
//
////ͨ��ȫ�ֺ���ʵ����������� ���Է����������� 
//Person operator+(const Person& p2, int val)
//{
//	cout<< "��������� ������" << endl;
//	Person temp;
//	temp.m_A = p2.m_A + val;
//	temp.m_B = p2.m_B + val;
//	return temp;
//}
//
//void test() {
//
//	Person p1(10, 10);
//	Person p2(20, 20);
//
//	//��Ա������ʽ
//	Person p3 = p2 + p1;  //�൱�� p2.operaor+(p1)  //�ȵ���Ա�ٵ�ȫ��
//	cout << "mA:" << p3.m_A << " mB:" << p3.m_B << endl;
//
//
//	Person p4 = p3 + 10; //�൱�� operator+(p3,10)
//	cout << "mA:" << p4.m_A << " mB:" << p4.m_B << endl;
//
//}
//
//int main() {
//
//	test();
//
//	system("pause");
//
//	return 0;
//}
