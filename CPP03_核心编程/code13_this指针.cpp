//#include<iostream>
//#include<string>
//using namespace std;
//
//
////ָ�����;
////1.������Ƴ�ͻ
////2.���ض�����
//class Person {
//public:
//	int age;
//
// public:
//	Person(int age) {
//		//1.���βκͳ�Ա����ͬ��ʱ������thisָ��������
//		//thisָ��ָ����Ǳ����õĳ�Ա���������Ķ���
//		this->age = age; 
//	}
//
//	Person& PersonAddPerson(Person &p) {
//		this->age += p.age;
//		return *this;  //2.���ض�����
//	}
//
//
//	//��һ��--�����µĶ���---���ÿ������캫
//	Person PersonAddAge(Person& p) {
//		this->age += p.age;
//		return *this;  //2.���ض�����
//	}
//};
//
//
//
////1.������Ƴ�ͻ
//void test01() {
//	Person p1(10);
//	cout << " p1.age = " << p1.age << endl;
//
//}
//
////���ض�����
//void test02() {
//	Person p1(10);
//	Person p2(10);
//	//��ʽ���˼��
//	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
//	cout << " p2.age = " << p2.age << endl;
//
//}
//
//
//void test03() {
//	Person p1(10);
//	Person p2(10);
//	//��ʽ���˼��
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << " p2.age = " << p2.age << endl;
//}
//
//
//int main() {
//	test02();
//	system("pause");
//	return 0;
//}