//#include<iostream>
//#include<string>
//using namespace std;
//
////空指针访问成员函数
//class Person {
//public:
//	void showClassName() {
//		cout << "我是 Person 类" << endl;
//	}
//
//	void showPerson() {
//		if (this == NULL) {
//			return;
//		}
//		cout <<"age = "<< mAge << endl;//属性默认this->mAge
//	}
//public:
//	int mAge;
//};
//
//
//
//void test1401() {
//	Person* p = NULL;
//	p->showClassName();//空指针，可以调用成员函数
//	p->showPerson();//但是如果成员函数用到了this指针，就不可以了
//
//}
//
//int main() {
//	test1401();
//	system("pause");
//	return 0;
//}