//#include <iostream>
//#include<string>
//using namespace std;
//
////01����Ĭ�ϲ���
///*
//* ��������Լ���������������Լ������ݣ����û�о���Ĭ��ֵ
//* �﷨ ����ֵ���� ������(�β�=Ĭ��ֵ)
//* ע������
//* 1.���ĳ��λ���Ѿ���Ĭ�ϲ������ʹ�֮���������棬�����Ҷ�������Ĭ��ֵ
//* 2. �������������Ĭ�ϲ���������ʵ�ֲ�����Ĭ�ϲ���  --����ʱ����
//* ������ʵ��ֻ��һ��Ĭ�ϲ���
//*/
//int func0501(int a, int b = 20, int c=30) {
//	return a + b + c;
//}
//
//int fun0502(int a=10, int b=10);
//
//int fun0502(int a , int b) {
//	return a + b;
//}
//
//
////02. ������ռλ����--int
////Ŀǰռλ�������ò�����
////ռλ����������Ĭ�ϲ���
//void func0503(int a, int = 10) {
//	cout << "this func" << endl;
//}
//
////��������
////��������: A ��ͬһ���������£� B. ��������ͬ��C.�����������Ͳ�ͬ �������ͬ�أ� ��˳��ͬ
////��������ֵ��ͬ������Ϊ������������
//void func0504(){
//	cout << "func �����ĵ���" << endl;
// }
//
//void func0504(int n ) {  //����������ͬ
//	cout << "func(int n ) �����ĵ���" << endl;
//}
//
//void func0504(double n) {  //�������Ͳ�ͬ
//	cout << "func(double n ) �����ĵ���" << endl;
//}
//
//void func0504(int a, double b) {  //�������Ͳ�ͬ
//	cout << "func(int a, double b ) �����ĵ���" << endl;
//}
//
//void func0504(double a, int  b) {  //˳��ͬ
//	cout << "func(int a, double b ) �����ĵ���" << endl;
//}
//
////��������ֵ��ͬ������Ϊ������������
////int func0504() {
////	return 0;
////}
//
//
////03.�������� ע������
////1.������Ϊ���ص�����
//void func0505(int &a ) {  //int &a = 10 ;//���Ϸ�
//	cout << "func0505(int &a )" << endl;
//}
//
//void func0505(const int &a) { // const int &a = 10
//	cout << "func0505(const int &a)" << endl;
//}
////2.������������Ĭ�ϲ���--����������
//void func0506(int a, int b=10) {
//	cout << "func0506(int a, int b)" << endl;
//}
//
//void func0506(int a) {
//	cout << "func0506(int a)" << endl;
//}
//
//int main05() {
//	cout << func0501(10) << endl;
//	cout << func0501(10,30) << endl;
//	func0503(10, 30);
//
//	cout << "================�������� ע������=================" << endl;
//	int a = 20;
//	func0505(a);
//	func0505(10);
//	//func0506(10); ��������Ĭ�ϲ��������ֶ�����
//
//	system("pause");
//	return 0;
//}