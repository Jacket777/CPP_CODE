//#include <algorithm>
//#include <vector>
//#include <string>
//#include <iostream>
//#include <numeric>
//using namespace std;
//
///*
//#### 5.5.1 accumulate
//
//**����������**
//
//*  ���������� ����Ԫ���ۼ��ܺ�
//**����ԭ�ͣ�**
//- `accumulate(iterator beg, iterator end, value);  `
//  // ��������Ԫ���ۼ��ܺ�
//  // beg ��ʼ������
//  // end ����������
//  // value ��ʼֵ
//
//  **�ܽ᣺**accumulateʹ��ʱͷ�ļ�ע���� numeric������㷨��ʵ��
//
//*/
//
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i <= 100; i++) {
//		v.push_back(i);
//	}
//
//	int total = accumulate(v.begin(), v.end(), 0);
//
//	cout << "total = " << total << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}