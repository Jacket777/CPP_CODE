//#include<vector>
//#include<algorithm>  //��׼�㷨��ͷ�ļ�
//#include<iostream>
//using namespace std;
///*
//**����������**
//
//* ������������һ��������
//
//**����ԭ�ͣ�**
//
//* `transform(iterator beg1, iterator end1, iterator beg2, _func);`
//
////beg1 Դ������ʼ������
//
////end1 Դ��������������
//
////beg2 Ŀ��������ʼ������
//
////_func �������ߺ�������
//
//*/
//
//
//class TransForm {
//public:
//	int opertor()(int val)  ///������
//	{
//		return val;
//	}
//};
//
//class MyPrint {
//public:
//	void operator()(int val) {
//		cout << val << " ";
//	}
//};
//
//void test01() {
//	vector<int>v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//
//	vector<int>vTarget;//Ŀ������
//	vTarget.resize(v.size());//Ŀ��������Ҫ��ǰ���ٿռ�
//	transform(v.begin(), v.end(), vTarget.begin(), TransForm());
//	for_each(vTarget.begin(), vTarget.end(), MyPrint());
//}
//
//
//int main() {
//	test01();
//	system("pause");
//}