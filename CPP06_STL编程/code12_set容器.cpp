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
////����͸�ֵ
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
//	//��������
//	set<int>s2(s1);
//	printSet(s2);
//
//	//��ֵ
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//
//
////��С
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
//		cout << "s1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "s1��Ϊ��" << endl;
//		cout << "s1�Ĵ�СΪ�� " << s1.size() << endl;
//	}
//
//}
//
////����
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
//	cout << "����ǰ" << endl;
//	printSet(s1);
//	printSet(s2);
//	cout << endl;
//
//	cout << "������" << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//}
//
//
////�����ɾ��
//void test04()
//{
//	set<int> s1;
//	//����
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//
//	//ɾ��
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	s1.erase(30);
//	printSet(s1);
//
//	//���
//	//s1.erase(s1.begin(), s1.end());
//	s1.clear();
//	printSet(s1);
//}
//
//
////���Һ�ͳ��
//void test05()
//{
//	set<int> s1;
//	//����
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	//����
//	set<int>::iterator pos = s1.find(30);
//
//	if (pos != s1.end())
//	{
//		cout << "�ҵ���Ԫ�� �� " << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//
//	//ͳ��
//	int num = s1.count(30);
//	cout << "num = " << num << endl;
//}
//
//
////set��multiset����
//void test06()
//{
//	set<int> s;
//	pair<set<int>::iterator, bool>  ret = s.insert(10);
//	if (ret.second) {
//		cout << "��һ�β���ɹ�!" << endl;
//	}
//	else {
//		cout << "��һ�β���ʧ��!" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second) {
//		cout << "�ڶ��β���ɹ�!" << endl;
//	}
//	else {
//		cout << "�ڶ��β���ʧ��!" << endl;
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
////���鴴��
//void test07()
//{
//	pair<string, int> p(string("Tom"), 20);
//	cout << "������ " << p.first << " ���䣺 " << p.second << endl;
//
//	pair<string, int> p2 = make_pair("Jerry", 10);
//	cout << "������ " << p2.first << " ���䣺 " << p2.second << endl;
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