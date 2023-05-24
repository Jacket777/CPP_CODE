//#include<iostream>
//#include<string>
//using namespace std;
//
//
////深拷贝与浅拷贝
////浅拷贝带来的问题是堆内存重复释放---问题解决---深拷贝
//class Person {
//public:
//	Person() {
//		cout << "Person默认的构造函数" << endl;}
//	Person(int age, int height) {
//		cout << "Person的有参构造函数" << endl;
//		m_Age = age;
//		m_Height = new int(height);  //用指针接受堆上的数据
//	}
//
//	//自己编写拷贝构造函数实现深拷贝
//	Person(const Person& p) {
//		cout << "Person 拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//		//编译器提供的是浅拷贝 m_Height = p.m_Height;
//		m_Height = new int(*p.m_Height);
//	}
//
//	~Person() {
//		//将堆区开辟数据做释放工作
//		if (m_Height != NULL) {
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person------>析构函数" << endl;
//	}
//
//	int m_Age;
//	int *m_Height;
//};
//
//void test01() {
//	Person p1(18,160);
//	cout << " p1 age " << p1.m_Age <<"  p1 height"<<*p1.m_Height<< endl;  // *表示解引用，拿到该地址上的数据
//	Person p2(p1);
//	cout << " p2 age " << p2.m_Age << "  p2 height" << *p2.m_Height << endl;  // *表示解引用，拿到该地址上的数据
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}