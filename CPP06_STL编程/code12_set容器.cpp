//#include <set>
//#include<iostream>
//#include<string>
//using namespace std;
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////构造和赋值
//void test01()
//{
//	set<int> s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//
//	//拷贝构造
//	set<int>s2(s1);
//	printSet(s2);
//
//	//赋值
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//
//
////大小
//void test02()
//{
//
//	set<int> s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	if (s1.empty())
//	{
//		cout << "s1为空" << endl;
//	}
//	else
//	{
//		cout << "s1不为空" << endl;
//		cout << "s1的大小为： " << s1.size() << endl;
//	}
//
//}
//
////交换
//void test03()
//{
//	set<int> s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	set<int> s2;
//
//	s2.insert(100);
//	s2.insert(300);
//	s2.insert(200);
//	s2.insert(400);
//
//	cout << "交换前" << endl;
//	printSet(s1);
//	printSet(s2);
//	cout << endl;
//
//	cout << "交换后" << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//}
//
//
////插入和删除
//void test04()
//{
//	set<int> s1;
//	//插入
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//
//	//删除
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	s1.erase(30);
//	printSet(s1);
//
//	//清空
//	//s1.erase(s1.begin(), s1.end());
//	s1.clear();
//	printSet(s1);
//}
//
//
////查找和统计
//void test05()
//{
//	set<int> s1;
//	//插入
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	//查找
//	set<int>::iterator pos = s1.find(30);
//
//	if (pos != s1.end())
//	{
//		cout << "找到了元素 ： " << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//
//	//统计
//	int num = s1.count(30);
//	cout << "num = " << num << endl;
//}
//
//
////set和multiset区别
//void test06()
//{
//	set<int> s;
//	pair<set<int>::iterator, bool>  ret = s.insert(10);
//	if (ret.second) {
//		cout << "第一次插入成功!" << endl;
//	}
//	else {
//		cout << "第一次插入失败!" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second) {
//		cout << "第二次插入成功!" << endl;
//	}
//	else {
//		cout << "第二次插入失败!" << endl;
//	}
//
//	//multiset
//	multiset<int> ms;
//	ms.insert(10);
//	ms.insert(10);
//
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
////对组创建
//void test07()
//{
//	pair<string, int> p(string("Tom"), 20);
//	cout << "姓名： " << p.first << " 年龄： " << p.second << endl;
//
//	pair<string, int> p2 = make_pair("Jerry", 10);
//	cout << "姓名： " << p2.first << " 年龄： " << p2.second << endl;
//}
//
//
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}