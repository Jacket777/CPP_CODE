//#include<iostream>
//#include<string>
//using namespace std;
////��ģ������������Ĳ���
////1.ָ�����������  ----ֱ����ʾ�������������----���
////2.����ģ�廯
////3.������ģ�廯
//
////��ģ��
//template<class T1, class T2>
//class Person {
//public:
//	Person(T1 name, T2 age) {
//		this->mName = name;
//		this->mAge = age;
//	}
//
//	void showPerson() {
//		cout << " name: " << this->mName << " age: " << this->mAge << endl;
//	}
//
//public:
//	T1 mName;
//	T2 mAge;
//};
//
//
////1.ָ�����������---����ָ���������ͣ�����ʹ������
//void printPerson1(Person<string, int>& p) {
//	p.showPerson();
//}
//
//void test01() {
//	Person<string, int>p("jack", 100);
//	printPerson1(p);
//}
//
////2.����ģ�廯
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>&p) {
//	p.showPerson();
//	cout << "T1������Ϊ: " << typeid(T1).name() << endl;
//	cout << "T2������Ϊ: " << typeid(T2).name() << endl;
//}
//
//void test02() {
//	Person<string, int>p("tom", 90);
//	printPerson2(p);
//}
//
////3.������ģ�廯
//template<class T>
//void printPerson3(T& p) {
//	cout << "T������Ϊ: " << typeid(T).name() << endl;
//	p.showPerson();
//}
//
//
//void test03() {
//	Person<string, int>p("tom", 30);
//	printPerson3(p);
//}
//
//
//int main() {
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}