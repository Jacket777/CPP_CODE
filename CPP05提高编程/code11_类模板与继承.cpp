//#include<iostream>
//#include<string>
//using namespace std;
//
////��ģ����̳�
////1.����̳и��࣬����֪��������T������
////2.��������ָ�������T�����ͣ�����Ҳ��Ҫ�����ģ��
//
//
//template<class T>
//class Base {
//	T m;
//};
//
////class Son:public Base  //����c++������Ҫ����������ڴ棬����֪��������T�����Ͳſ������¼̳� 
//class Son :public Base<int>//����ָ��һ������ 
//{
//};
//
//void test01() {
//	Son c;
//}
//
////��ģ��̳���ģ�� ,������T2ָ�������е�T���� 
//
//template<class T1, class T2>
//class Son2 :public Base<T2>
//{
//	T1 obj;
//public:
//
//	Son2() {
//		cout <<"T1 type is "<< typeid(T1).name() << endl;
//		cout <<"T2 type is " << typeid(T2).name() << endl;
//	}
//};
//
//void test02() {
//	Son2<int, char>child1;
//}
//
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}