//#include<iostream>
//#include<string>
//using namespace std;
//
//const double PI = 3.14;
//
////���һ��԰��
////class Circle {
//////����Ȩ��--����Ȩ��
////public:
////	//����
////	int m_r;
////
////	//�ܳ�
////	double calcluateZC() {
////		return 2 * PI * m_r;
////	}
////};
//
////���һ��ѧ����
//class Student {
//public://����Ȩ��
//	//���е����Ժ���Ϊͳһ��Ϊ��Ա
//
//		//���� ��Ա���� ��Ա����
//	string m_Name;//����
//	int m_id;//ѧ��
//	//��Ϊ  ��Ա���� ��Ա����
//	void showStudent() {
//		cout << " name: " << m_Name << " id: " << m_id << endl;
//	}
//
//	void setName(string name) {
//		m_Name = name;
//	}
//
//	void setId(int id) {
//		m_id = id;
//	}
//};
//
//
////����Ȩ��
////����Ȩ�� public ��Ա���ڿ��Է��� �� ������Է���
////����Ȩ�� protect ��Ա���ڿ��Է��� �� ���ⲻ���Է���---������Է��ʸ����еİ�������
////˽��Ȩ�� private ��Ա���ڿ��Է��� �� ���ⲻ���Է���---���಻���Է��ʸ����е�˽������
//
////class Person {
////	//����Ȩ��
////public:
////	string m_Name; //����
////	//����Ȩ��
////protected:
////	string m_Car;//����
////	//˽��Ȩ��
////private:
////	int m_Password; //���п�����
////
////
////public:
////	void func() {
////		m_Name = "Jack";
////		m_Car = "car";
////		m_Password = 123456;
////	}
////};
//
////============ = strcut �� class����============ =
////class C1 {
////	int m_A; //Ĭ��Ȩ����˽��
////};
////
////struct C2 {
////	int m_A; //Ĭ��Ȩ���ǹ���
////};
//
//
////��Ա����˽�л�
////
//class Person {
//public:
//	//��������
//	void setName(string name) {
//		m_Name = name;
//	}
//
//	string getName() {
//		return m_Name;
//	}
//
//	//��ȡ����--ֻ��
//	int getAge() {
//		//m_Age = 0;
//		return m_Age;
//	}
//
//	void setAge(int age) {
//		if (age < 0 || age >150) {
//			m_Age = 0;
//			cout << " ����ʧ��" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//
//	//��������  ֻд
//	void setLover(string name) {
//		m_Lover = name;
//	}
//
//private:
//	string m_Name; //�ɶ���д
//	int m_Age; //ֻ��
//	string m_Lover;
//};
//
//
////��ϰ����1.�����������
//class Cube {
//public:
//	void setL(int l) {
//		m_L = l;
//	}
//
//	int getL() {
//		return m_L;
//	}
//
//
//	void setW(int w) {
//		m_W= w;
//	}
//
//	int getW() {
//		return m_W;
//	}
//
//	void setH(int h) {
//		m_H = h;
//	}
//
//	int getH() {
//		return m_H;
//	}
//
//	//��ȡ���������
//	int calculateS() {
//		return 2 * m_L * m_H + 2 * m_W * m_H + 2 * m_L * m_H;
//	}
//
//
//	int calculateV() {
//		return m_H * m_L * m_W;
//	}
//
//	//���ó�Ա�����ж������������Ƿ����
//	bool isSameByClass(Cube &c){
//		if (m_H == c.getH() && m_W == c.getW() && m_L == c.getL()) {
//			return true;
//		}
//		return false;
//	}
//
//
//
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//};
//
//
////����ȫ�ֺ����ж������������Ƿ����
//bool isSame(Cube& c1, Cube& c2) {
//	if (c1.getH() == c2.getH() && c1.getW() == c2.getW() && c1.getL() == c2.getL()) {
//		return true;
//	}
//	return false;
//}
//
//
////���Բ��ϵ����
////����
//class Point {
//public:
//	void setX(int x) {
//		m_X = x;
//	}
//
//	void setY(int y) {
//		m_Y = y;
//	}
//
//	int getX() {
//		return m_X;
//	}
//
//	int getY() {
//		return m_Y;
//	}
//
//
//private:
//	int m_X;
//	int m_Y;
//};
//
//
//class Circle {
//public:
//	//���ð뾶
//	void setR(int r) {
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR() {
//		return m_R;
//	}
//
//	//����Բ��
//	void setCenter(Point center){ 
//		m_Center = center;
//	}
//	//��ȡԲ��
//
//	Point getCenter() {
//		return m_Center;
//	}
//private:
//	int m_R;
//	Point m_Center;
//};
//
////�жϵ��Բ�Ĺ�ϵ
//void isInCircle(Circle& c, Point& p) {
//	//��������֮��ľ���ƽ��
//	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	int rDistance = c.getR() * c.getR();
//	if (distance == rDistance) {
//		cout << " ����Բ��" << endl;
//	}
//	else if (distance > rDistance) {
//		cout << " ����Բ��" << endl;
//
//	}
//	else {
//		cout << " ����Բ��" << endl;
//	}
//}
//
//int main06() {
//	//ʵ����
//	//Circle c1;
//	//c1.m_r = 10;
//	//cout << "԰���ܳ�: " << c1.calcluateZC() << endl;
//	//Student s1;
//	//s1.m_id = 1;
//	///*s1.m_Name = "Jack";*/
//	//s1.setName("Jack01");
//	//s1.showStudent();
//	//cout << "=============Ȩ�޿���=============" << endl;
//	//Person p1;
//	//p1.m_Name = "Jack100";
//	//p1.m_Car = "car"; ����Ȩ������ �����޷�����
//	//p1.m_Password = 23456; ˽��Ȩ�����ݣ������޷�����
//
//	//cout << "=============strcut �� class����=============" << endl;
//	////struct Ĭ��Ȩ����public class
//	//C1 c1;
//	////c1.m_A = 100;
//	//C2 c2;
//	//c2.m_A = 100;
//
//	//cout << "=============��Ա����˽�л�=============" << endl;
//	//Person p;
//	//p.setName("Jack101");
//	//p.setLover("����");
//	//p.setAge(18);
//	//cout << p.getName() << " " << p.getAge() << " " << " " << endl;
//
//	cout << "=============����01=============" << endl;
//	Cube c1;
//	c1.setL(10);
//	c1.setH(10);
//	c1.setW(10);
//	cout << "���" << c1.calculateS() << endl;
//
//	cout << "���" << c1.calculateV()<< endl;
//
//	cout << "=============����02=============" << endl;
//
//	system("pause");
//	return 0;
//}