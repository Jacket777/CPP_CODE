//#include <iostream>
//#include<string>
//using namespace std;
//
////��������
////1.ֵ����
//void swap0401(int a, int b) {
//	int temp = a;
//	b = a;
//	a = temp;
//}
////2.��ַ����
//void swap0402(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////3.���ô���
//void swap0403(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////1.��Ҫ���ؾֲ�����������
//int& test0401() {
//	int a = 10;
//	return a;
//}
//
//int& test0402() {
//	static int a = 10; //��̬���� ����ȫ������ȫ�����ϵ������ڳ���������ͷ�
//	return a;
//}
//
//
//
////���õı���
//void func0401(int& ref) {
//	ref = 100; //ref�����ã�ת��Ϊ *ref = 100
//
//}
//
////��ӡ����
//void showValue(const int& val) {
//	//val = 1000; �����޸�����
//	cout << val << endl;
//}
//
//
//
//int main04() {
//	cout << "=====1.���õĻ����﷨============" << endl;
//	//int a = 10;
//	//int& b = a;
//	//cout << " a = " << a << endl;
//	//cout << " b = " << b << endl;
//	//b = 100;
//	//cout << "-----------------------" << endl;
//	//cout << " a = " << a << endl;
//	//cout << " b = " << b << endl;
//	cout << "=====2.���õ�ע������============" << endl;
//	////���ñ����ʼ��,��ʼ�������ٸı�
//	//int a2 = 10;
//	////int& b2; //������룬�����ʼ��
//	//int& b2 = a2;
//	//int c2 = 20;
//	//b2 = c2; //��ֵ���������Ǹ�������
//	//cout << " a2 = " << a2 << endl;
//	//cout << " b2 = " << b2 << endl;
//	//cout << " c2 = " << c2 << endl;
//
//	
//	cout << "=====3.����������������============" << endl;
//	//int a = 10;
//	//int b = 20;
//	////swap0401(a, b);
//	////swap0402(&a, &b); //��ַ���ݣ��βλ�����ʵ��
//	//swap0403(a, b); //���ô��ݣ��βλ�����ʵ��
//	//cout << " a = " << a << endl;
//    //cout << " b = " << b << endl;
//
//	cout << "=====4.�������������ķ���ֵ============" << endl;
//	////1.��Ҫ���ؾֲ�����������
//	//int& ref = test0401();
//	//cout << ref << endl;  //��һ�ν����ȷ��������Ϊ���������˱���
//	//cout << ref << endl;   //�ڶ��ν��������Ϊ�ڴ��Ѿ��ͷ�
//
//	////2.�����ĵ��ÿ�����Ϊ��ֵ
//	//int& ref2 = test0402();
//	//cout << ref2 << endl;
//	//cout << ref2 << endl;
//	//cout << ref2 << endl;
//	//cout << ref2 << endl;
//	//test0402() = 1000;  //��������ķ���ֵ�����ã��������������Ϊ��ֵ
//	//cout << ref2 << endl;
//	//cout << ref2 << endl;
//
//
//	cout << "=====5.���õı���============" << endl;
//	//int a = 10;
//	//int& ref = a; //�������������д��� ת��Ϊ int * const ref = &a Ҳ����ָ�볣��
//	//ref = 20;//�ڲ�����ref�����ã��Զ�������ת��Ϊ*ref = 20
//	//cout << "a:" << a << endl;
//	//cout << "ref: " << ref << endl;
//	//func0401(a);
//	//cout << "ref: " << ref << endl;
//
//	cout << "=====6.��������============" << endl;
//	//��������
//	//ʹ�ó��������������βΣ���ֹ�����
//	int a = 10;
//	//int& ref = 10; //�﷨�������ñ�����һ��Ϸ����ڴ�ռ�
//	const int& ref = 10; //����const֮�󣬱������������޸� int temp = 10; const int& ref = temp;
//	//ref = 20  //����const֮�󣬲����Ա��޸�
//	int b = 10;
//	showValue(b);
//
//
//
//
//
//
//
//	system("pause");
//	return 0;
//}