//#include<iostream>
//#include<string>
//using namespace std;
///// <summary>
///// ��̬�Ļ�������
///// </summary>
//
//class Animal {
//public:
//	//Speak���������麯��
//	//����ǰ�����virtual�ؼ��֣�����麯������ô�������ڱ����ʱ��Ͳ���ȷ�����������ˡ�
//	//������ӣ�������ַ���
//	virtual void speak() {
//		cout << "anmial speak " << endl;
//	}
//};
//
//
//
//class Cat:public Animal {
//public:
//	//��������д������麯�����������麯�����ڲ����滻��������麯����ַ
//	void speak() {
//		cout << "cat speak " << endl;
//	}
//};
//
//
//class Dog :public Animal {
//public:
//	void speak() { //virtual�ؼ��ֿ�д�ɲ�д
//		cout << "dog speak " << endl;
//	}
//};
//
//
////����ϣ������ʲô������ô�͵���ʲô����ĺ���
////���������ַ�ڱ���׶ξ���ȷ������ô��̬����
////���������ַ�����н׶β���ȷ�������Ƕ�̬����
////��д����������ֵ����  ������ �����б� ��ȫһ�³�Ϊ��д
//void DoSpeak(Animal& animal)
//{
//	animal.speak();
//}
////
////��̬���������� 
////1���м̳й�ϵ
////2��������д�����е��麯��
////��̬ʹ�ã�
////����ָ�������ָ���������
//void test01()
//{
//	Cat cat;
//	DoSpeak(cat);
//	Dog dog;
//	DoSpeak(dog);
//}
//
//
//void test02() {
//	//�ն����ֽ�Ϊ1  ---�Ƚϼ�virtual �벻��virtual
//	//����virtual ���� 4���ֽڣ� ����һ��ָ���С  ��������һ��vfptr  �麯����ָ��  ָ��vftable �麯���� �ñ��м�¼�麯����ַ
//	//��һ��ָ��
//	cout << " animal size�� " << sizeof(Animal) << endl;
//	cout << " dog size�� " << sizeof(Dog) << endl;
//}
//
//
//int main() {
//	test02();
//	system("pause");
//	return 0;
//}
//
//
