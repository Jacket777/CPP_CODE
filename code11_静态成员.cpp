//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person {
//public:
//	//��̬��Ա����--ֻ���Է��ʾ�̬��Ա���������ܷ��ʷǾ�̬��Ա����
//	static void func() {
//		cout << "func call" << endl;
//		m_A = 100;
//		
//	}
//	static int m_A;//��̬��Ա����
//	int m_B;//
//
//private:
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//	static void func2() {
//		cout << "func2 call " << endl;
//	}
//};
//int Person::m_A = 10;
//
//void test1101() {
//	//��̬��Ա�������ַ��ʷ�ʽ
//	//1.ͨ������
//	Person p1;
//	p1.func();
//
//	//2.ͨ������
//	Person::func();
//
//	//Person::func2  //˽��Ȩ�޷��ʲ���
//
//}
//
//
//int main() {
//	test1101();
//	system("pause");
//	return 0;
//}