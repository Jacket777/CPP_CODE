//#include <algorithm>
//#include <vector>
//#include<string>
//#include<iostream>
//using namespace std;
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(5);
//	v.push_back(2);
//	v.push_back(4);
//	v.push_back(4);
//	v.push_back(3);
//
//	//查找相邻重复元素
//	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
//	if (it == v.end()) {
//		cout << "找不到!" << endl;
//	}
//	else {
//		cout << "找到相邻重复元素为:" << *it << endl;
//	}
//}
//
//
////binary_search
//void test02()
//{
//	vector<int>v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//二分查找
//	bool ret = binary_search(v.begin(), v.end(), 2);
//	if (ret)
//	{
//		cout << "找到了" << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//}
//
//
//
//int main() {
//
//	test01();
//
//	//test02();
//
//	system("pause");
//
//	return 0;
//}