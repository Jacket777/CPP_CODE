//#include<iostream>
//#include<string>
//using namespace std;
//
///*
//ע�����
//1.�Զ������Ƶ��������Ƶ���һ�µ���������T �ſ���ʹ��
//2.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
//*/
//
////����ģ���ṩ��ͨ�ý�������--typename �滻��class û������
//template<class T>
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////1.�Զ������Ƶ��������Ƶ���һ�µ���������T �ſ���ʹ��
//void test01() {
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	mySwap(a, b); //��ȷ�������Ƶ���һ�µ�T
//	//mySwap(a, c)  //���� ��a, c���Ͳ�һ��
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
//
////2.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
//template<class T>
//void func() {
//	cout << "func ����" << endl;
//}
//
//void test02() {
//	//func()  //����ģ�岻�ܶ���ʹ�ã�����ȷ����T������
//	func<int>();
//	func<double>();
//}
//
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}