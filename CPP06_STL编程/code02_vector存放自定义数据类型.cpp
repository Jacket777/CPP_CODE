//#include<vector>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//
////自定义数据类型
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
////存放对象
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
////存放对象指针
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
//	//注意集合中存放的是各个对象的指针，it为指针，所以 (*it) 为对象的指针
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
//		Person* p = (*it);
//		//cout << " Name: " << p->mName << " Age: " << (*it)->mAge << endl;  //注意(*it) 为指针
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