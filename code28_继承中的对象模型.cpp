//#include<iostream>
//#include<string>
//using namespace std;
//
///// <summary>
///// �̳��еĶ���ģ��
///// </summary>
//class Base{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C; //˽�г�Աֻ�Ǳ������ˣ����ǻ��ǻ�̳���ȥ
//};
//
////�����̳�
//class Son :public Base
//{
//public:
//	int m_D;
//};
//
////���ÿ�����Ա������ʾ���߲鿴����ģ��
////������Ŀ¼�в鿴 cl /d1 reportSingleClassLayout���� �ļ���
//
//void test01(){
//	//�ڸ��������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ��
//	//������˽�г�Ա�����Ǳ��������������ˣ���˷��ʲ��������ǻ��ǻ�̳���ȥ
//	//���16---һ������4���ֽ�  һ��4��Ԫ�أ�������16���ֽ�
//	cout << "sizeof Son = " << sizeof(Son) << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}