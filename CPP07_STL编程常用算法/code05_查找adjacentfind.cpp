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
//	//���������ظ�Ԫ��
//	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
//	if (it == v.end()) {
//		cout << "�Ҳ���!" << endl;
//	}
//	else {
//		cout << "�ҵ������ظ�Ԫ��Ϊ:" << *it << endl;
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
//	//���ֲ���
//	bool ret = binary_search(v.begin(), v.end(), 2);
//	if (ret)
//	{
//		cout << "�ҵ���" << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
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