//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person {
//public:
//	int m_A;
//	mutable int m_B;//����������ڳ������У�Ҳ�����޸����ֵ
//
//public:
//	Person() {
//		m_A = 0;
//		m_B = 0;
//	}
//
//	//thisָ��ı��� ��ָ�볣����ָ���ָ�򲻿����޸�---Person * const this
//	//�ڳ�Ա���������const�����ε�thisָ����ָ��ָ���ֵҲ�����޸�
//	void showPerson()const {
//		//const Type* const pointer;
////this = NULL; //�����޸�ָ���ָ�� Person* const this;
////this->mA = 100; //����thisָ��ָ��Ķ���������ǿ����޸ĵ�
//
////const���γ�Ա��������ʾָ��ָ����ڴ�ռ�����ݲ����޸ģ�����mutable���εı���
//		this->m_B = 100;
//
//	}
//
//
//	void MyFunc()const {
//		//mA = 10000;
//
//	}
//
//};
//
//
////const���ζ���  ������
//void test1501() {
//	const Person person; //��������
//	cout << person.m_A << endl;
//	//person.mA = 100; //���������޸ĳ�Ա������ֵ,���ǿ��Է���
//	person.m_B = 100; //���ǳ���������޸�mutable���γ�Ա����
//
//	//��������ʳ�Ա����
//	person.MyFunc(); //�������ܵ�����ͨ��Ա�ĺ�����ֻ�ܵ��ó�����
//}
//
//int main() {
//	test1501();
//	system("pause");
//	return 0;
//}