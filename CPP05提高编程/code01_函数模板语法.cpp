//#include<iostream>
//#include<string>
//using namespace std;
//
////��ʹ�ú���ģ��---����Բ�ͬ���ͱ�д
////�������ͽ�������
//void swapInt(int &a, int &b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//
//void swapDouble(double &a, double &b) {
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
//
////����ģ���ṩͨ�õĽ�������----���� ���Ͳ����� Ŀ����ߴ��븴����---�����Java�еķ���
//template<typename T> //����һ��ģ�壬���߱���������Ĵ����н�����T��Ҫ����T��һ��ͨ����������
//void mySwap(T &a, T &b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//void test01() {
//	int a = 10;
//	int b = 20;
//
//	//swapInt(a, b);
//	//����ģ��ʵ�ֽ���--���ַ�ʽ
//	//1���Զ������Ƶ�
//	mySwap(a, b);
//	mySwap<int>(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	double c = 1.1;
//	double d = 2.2;
//	//2����ʾָ������
//	mySwap<double>(c, d);
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//}
//
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
