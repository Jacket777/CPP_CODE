//#include <iostream>
//using namespace std;
////ȫ�ֱ���---����ȫ������
//int g_a = 10;
//int g_b = 10;
//
//const int c_g_a = 20;
//const int c_g_b = 20;
//
//int main01() {
//	//�ֲ�����
//	int a = 10;
//	int b = 10;
//	cout << "�ֲ����� a �ĵ�ַ" << (int)&a << endl;
//	cout << "�ֲ����� b �ĵ�ַ" << (int)&b << endl;
//	cout << "================================" << endl;
//	cout << "ȫ�ֱ���  g_a �ĵ�ַ" << (int)&g_a << endl;
//	cout << "ȫ�ֱ���  g_b �ĵ�ַ" << (int)&g_b << endl;
//
//	//��̬����---����ȫ������
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "��̬����  s_a �ĵ�ַ" << (int)&s_a << endl;
//	cout << "��̬����  s_b �ĵ�ַ" << (int)&s_b << endl;
//	cout << "================================" << endl;
//
//	//����
//	//1.�ַ�������---����ȫ������
//	cout << "�ַ���������ַΪ: " << (int)&"Hello" << endl;
//	cout << "================================" << endl;
//	//2.const���εı���---����ȫ������
//	//2.1.const���ε�ȫ�ֳ���---����ȫ������
//	cout << "const���ε�ȫ�ֳ��� c_g_a ��ַΪ: " << (int)&c_g_a << endl;
//	cout << "const���ε�ȫ�ֳ��� c_g_b ��ַΪ: " << (int)&c_g_b << endl;
//	cout << "================================" << endl;
//	//2.2. const���εľֲ�����---������ȫ������
//	int c_l_a = 10;
//	int c_l_b = 10;
//	cout << "const���εľֲ����� c_l_a ��ַΪ: " << (int)&c_l_a << endl;
//	cout << "const���εľֲ����� c_l_b ��ַΪ: " << (int)&c_l_b << endl;
//
//
//
//	system("pause");
//	return 0;
//
//}