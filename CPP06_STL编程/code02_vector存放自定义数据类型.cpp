//#include<vector>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//
////�Զ�����������
//class Person {
//public:
//	Person(string name, int age) {
//		mName = name;
//		mAge = age;
//	}
//public:
//	string mName;
//	int mAge;
//};
//
//
////��Ŷ���
//void test01() {
//	vector<Person>v;
//
//	Person p1("aaaa", 10);
//	Person p2("bbbb", 20);
//	Person p3("cccc", 30);
//	Person p4("dddd", 40);
//	Person p5("eeee", 50);
//	Person p6("ffff", 60);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	v.push_back(p6);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//		//cout << " Name: " << (*it).mName << " Age: " << (*it).mAge << endl;
//		cout << " Name: " << it->mName << " Age: " << it->mAge << endl;
//	}
//}
//
////��Ŷ���ָ��
//void test02() {
//	vector<Person*>v;
//
//	Person p1("aaaa", 10);
//	Person p2("bbbb", 20);
//	Person p3("cccc", 30);
//	Person p4("dddd", 40);
//	Person p5("eeee", 50);
//	Person p6("ffff", 60);
//
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//	v.push_back(&p6);
//
//	//ע�⼯���д�ŵ��Ǹ��������ָ�룬itΪָ�룬���� (*it) Ϊ�����ָ��
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
//		Person* p = (*it);
//		//cout << " Name: " << p->mName << " Age: " << (*it)->mAge << endl;  //ע��(*it) Ϊָ��
//		cout << " Name: " << (*it)->mName << " Age: " << (*it)->mAge << endl;
//	}
//}
//
//
//int main() {
//	test01();
//	cout << "=====================" << endl;
//	test02();
//	system("pause");
//	return 0;
//}