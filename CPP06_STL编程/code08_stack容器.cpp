//#include <stack>
//#include<string>
//#include<iostream>
//using namespace std;
//
//
///*
//#### 3.5.2 stack ���ýӿ�
//����������ջ�������õĶ���ӿ�
//���캯����
//
//* stack<T> stk;                      //stack����ģ����ʵ�֣� stack�����Ĭ�Ϲ�����ʽ
//* stack(const stack &stk);          //�������캯��
//
//��ֵ������
//* stack& operator=(const stack &stk);        //���صȺŲ�����
//���ݴ�ȡ��
//* push(elem);     //��ջ�����Ԫ��
//* pop();         //��ջ���Ƴ���һ��Ԫ��
//* top();       //����ջ��Ԫ��
//
//��С������
//* empty();           //�ж϶�ջ�Ƿ�Ϊ��
//* size();            //����ջ�Ĵ�С
//* 
//* �ܽ᣺
//* ��ջ            --- push
//* ��ջ            --- pop
//* ����ջ��         --- top
//* �ж�ջ�Ƿ�Ϊ��   --- empty
//* ����ջ��С       --- size
//*/
//
////ջ�������ýӿ�
//void test01()
//{
//	//����ջ���� ջ������������Ƚ����
//	stack<int> s;
//	//��ջ�����Ԫ�أ����� ѹջ ��ջ
//	s.push(10);
//	s.push(20);
//	s.push(30);
//
//	while (!s.empty()) {
//		//���ջ��Ԫ��
//		cout << "ջ��Ԫ��Ϊ�� " << s.top() << endl;
//		cout << "ջ�Ĵ�СΪ��" << s.size() << endl;
//		//����ջ��Ԫ��
//		s.pop();
//	}
//	cout << "ջ�Ĵ�СΪ��" << s.size() << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}