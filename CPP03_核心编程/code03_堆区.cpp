//#include <iostream>
//using namespace std;
//
//int* func() {
//	//����new �ؼ��֣����Խ����ݿ��ٵ�����
//	//ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣�����Ҳ�Ƿ���ջ�ϵ�
//	int *p = new int(10);
//	return p;
//}
//
//
//int* func0301() {
//	//�ڶ�������һ�����͵�����,new ���ص��Ǹ��������͵�ָ��
//	int* p = new int(10);
//	return p;
//}
//
//void test0301() {
//	int* p = func0301();
//	cout << *p << endl; //���������ݹ����뿪���ɳ���Ա������ͷţ�����ͷ�����delete�ͷ�
//	cout << *p << endl;
//	cout << *p << endl;
//	delete p;
//	//cout << *p << endl; //�����ӡ. ������
//
//}
//
//
//void test0302() {
//	//����10����������
//	int * array = new int[10]; //���������10��Ԫ��
//	for (int i = 0; i < 10; i++) {
//		array[i] = i + 100; //
//	}
//
//	for (int i = 0; i < 10; i++) {
//		cout << array[i] << endl;	
//	}
//
//	//�ͷ�����
//	delete[]array;
//}
//
//int main03() {
//
//	//�ڶ�����������
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << "=======1.new�Ļ����﷨=============" << endl;
//	test0301();
//
//	cout << "=======2.new�Ŀ�������=============" << endl;
//	test0302();
//
//	system("pause");
//	return 0;
//}