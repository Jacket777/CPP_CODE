//#include<iostream>
//#include<string>
//using namespace std;
//
//
////����
////1.��ͨ�������ÿ��Է�����ʽ����ת��
////2.����ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
////3.����ģ�� ����ʾָ�����壬���Է�����ʽ����ת��
//
////��ͨ����
//int myAdd01(int a, int b) {
//	return a + b;
//}
//
////����ģ��
//template<class  T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'd';
//	cout << myAdd01(a, c) << endl;  //��ȷ����ʽת�� ��char���͵�'c'��ʽת��Ϊint����  'c' ��Ӧ ASCII�� 99
//	//myAdd02(a, c); // ����ʹ���Զ������Ƶ�ʱ�����ᷢ����ʽ����ת��
//	//��ʾָ������---��ȷʹ��---�淶ʹ��
//	int result = myAdd02<int>(a, c); //��ȷ���������ʾָ�����ͣ����Է�����ʽ����ת��
//	cout <<"result: "<< result << endl;
//
//}
//
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}