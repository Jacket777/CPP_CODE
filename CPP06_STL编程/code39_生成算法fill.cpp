//#include <algorithm>
//#include <vector>
//#include <string>
//#include <iostream>
//using namespace std;
//
///*
//
//**����������**
//
//* �����������ָ����Ԫ��
//**����ԭ�ͣ�**
//
//- `fill(iterator beg, iterator end, value);  `
//  // �����������Ԫ��
//  // beg ��ʼ������
//  // end ����������
//  // value ����ֵ
//  **�ܽ᣺**����fill���Խ�����������Ԫ�����Ϊ ָ����ֵ
//
//*/
//
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//
//	vector<int> v;
//	v.resize(10);
//	//���
//	fill(v.begin(), v.end(), 100);
//
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}