//#include<iostream>
//#include<string>
//using namespace std;
//
//
///*
//* ���μ̳д�������Ҫ����������̳�������ͬ�����ݣ�������Դ�˷��Լ���������
//* ������̳п��Խ�����μ̳�����
//* vbptr v--virtual base pointer
//* ָ��ָ��������
//*/
//
////������
//class Animal {
//public:
//	int m_Age;
//};
//
////�̳�ǰ��virtual�ؼ��ֺ󣬱�Ϊ��̳�
////��ʱ�����ĸ���Animal��Ϊ�����
////����
//class Sheep:virtual public Animal{};
//
////������
//class Tuo: virtual public Animal{};
//
////������
//class SheepTuo: public Sheep,public Tuo{};
//
//
//void testZ() {
//	SheepTuo st;
//	st.Sheep::m_Age = 100;
//	st.Tuo::m_Age = 200;
//	//���������μ̳е�ʱ����������ӵ����ͬ�����ݣ���Ҫ��������������
//	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
//	//�������ֻҪ��һ�ݾͿ����ˣ������������μ̳е��������ݣ��˷ѿռ�
//	cout << "st.m_Age = " << st.m_Age << endl;
//	cout << "SheepTuo size:  " << sizeof(SheepTuo) << endl;
//}
//
//
//int main() {
//	testZ();
//	system("pause");
//	return 0;
//}