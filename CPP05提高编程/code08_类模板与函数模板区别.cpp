//#include<iostream>
//#include<string>
//using namespace std;
//
////��ģ���뺯��ģ������
////1. ��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
////2. ��ģ����ģ������б��п�����Ĭ�ϲ���--?
//
//
////��ģ��  ָ��Ĭ�ϲ�������
//template<class NameType, class AgeType=int>
//class Person {
//public:
//	Person(NameType name, AgeType age) {
//		this->mName = name;
//		this->mAge = age;
//	}
//	void showPerson() {
//		cout << " name: " << this->mName << " age: " << this->mAge << endl;
//	}
//public:
//	NameType mName;
//	AgeType mAge;
//};
//
//
////1. ��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//void test01() {
//	//Person p("Jack", 1000);  //������ģ��ʹ�õ�ʱ�򣬲��������Զ������Ƶ�
//	Person<string, int>p("Jack", 1000); //��ȷ������ʹ����ʽָ�����ͷ�ʽ��ʹ����ģ��
//	p.showPerson();
//}
//
////2. ��ģ����ģ������б��п�����Ĭ�ϲ���--template<class NameType, class AgeType=int>
//void test02() {
//	Person<string>p("tom", 99999); //��ģ���е�ģ������б�����ָ��Ĭ�ϲ���
//	p.showPerson();
//}
//
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}