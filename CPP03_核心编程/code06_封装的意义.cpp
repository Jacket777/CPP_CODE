//#include<iostream>
//#include<string>
//using namespace std;
//
//const double PI = 3.14;
//
////设计一个园类
////class Circle {
//////访问权限--公共权限
////public:
////	//属性
////	int m_r;
////
////	//周长
////	double calcluateZC() {
////		return 2 * PI * m_r;
////	}
////};
//
////设计一个学生类
//class Student {
//public://公共权限
//	//类中的属性和行为统一称为成员
//
//		//属性 成员属性 成员变量
//	string m_Name;//姓名
//	int m_id;//学号
//	//行为  成员函数 成员方法
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
////访问权限
////公共权限 public 成员类内可以访问 ， 类外可以访问
////包含权限 protect 成员类内可以访问 ， 类外不可以访问---子类可以访问父类中的包含内容
////私有权限 private 成员类内可以访问 ， 类外不可以访问---子类不可以访问父类中的私有内容
//
////class Person {
////	//公共权限
////public:
////	string m_Name; //姓名
////	//包含权限
////protected:
////	string m_Car;//汽车
////	//私有权限
////private:
////	int m_Password; //银行卡密码
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
////============ = strcut 与 class区别============ =
////class C1 {
////	int m_A; //默认权限是私有
////};
////
////struct C2 {
////	int m_A; //默认权限是公有
////};
//
//
////成员属性私有化
////
//class Person {
//public:
//	//设置姓名
//	void setName(string name) {
//		m_Name = name;
//	}
//
//	string getName() {
//		return m_Name;
//	}
//
//	//获取年龄--只读
//	int getAge() {
//		//m_Age = 0;
//		return m_Age;
//	}
//
//	void setAge(int age) {
//		if (age < 0 || age >150) {
//			m_Age = 0;
//			cout << " 设置失败" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//
//	//设置情人  只写
//	void setLover(string name) {
//		m_Lover = name;
//	}
//
//private:
//	string m_Name; //可读可写
//	int m_Age; //只读
//	string m_Lover;
//};
//
//
////练习案例1.设计立方体类
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
//	//获取立方体面积
//	int calculateS() {
//		return 2 * m_L * m_H + 2 * m_W * m_H + 2 * m_L * m_H;
//	}
//
//
//	int calculateV() {
//		return m_H * m_L * m_W;
//	}
//
//	//利用成员函数判断两个立方体是否相等
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
////利用全局函数判断两个立方体是否相等
//bool isSame(Cube& c1, Cube& c2) {
//	if (c1.getH() == c2.getH() && c1.getW() == c2.getW() && c1.getL() == c2.getL()) {
//		return true;
//	}
//	return false;
//}
//
//
////点和圆关系案例
////点类
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
//	//设置半径
//	void setR(int r) {
//		m_R = r;
//	}
//	//获取半径
//	int getR() {
//		return m_R;
//	}
//
//	//设置圆心
//	void setCenter(Point center){ 
//		m_Center = center;
//	}
//	//获取圆心
//
//	Point getCenter() {
//		return m_Center;
//	}
//private:
//	int m_R;
//	Point m_Center;
//};
//
////判断点喝圆的关系
//void isInCircle(Circle& c, Point& p) {
//	//计算两点之间的距离平方
//	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	int rDistance = c.getR() * c.getR();
//	if (distance == rDistance) {
//		cout << " 点在圆上" << endl;
//	}
//	else if (distance > rDistance) {
//		cout << " 点在圆外" << endl;
//
//	}
//	else {
//		cout << " 点在圆内" << endl;
//	}
//}
//
//int main06() {
//	//实例化
//	//Circle c1;
//	//c1.m_r = 10;
//	//cout << "园的周长: " << c1.calcluateZC() << endl;
//	//Student s1;
//	//s1.m_id = 1;
//	///*s1.m_Name = "Jack";*/
//	//s1.setName("Jack01");
//	//s1.showStudent();
//	//cout << "=============权限控制=============" << endl;
//	//Person p1;
//	//p1.m_Name = "Jack100";
//	//p1.m_Car = "car"; 包含权限内容 类外无法访问
//	//p1.m_Password = 23456; 私有权限内容，类外无法访问
//
//	//cout << "=============strcut 与 class区别=============" << endl;
//	////struct 默认权限是public class
//	//C1 c1;
//	////c1.m_A = 100;
//	//C2 c2;
//	//c2.m_A = 100;
//
//	//cout << "=============成员属性私有化=============" << endl;
//	//Person p;
//	//p.setName("Jack101");
//	//p.setLover("菜鸟");
//	//p.setAge(18);
//	//cout << p.getName() << " " << p.getAge() << " " << " " << endl;
//
//	cout << "=============案例01=============" << endl;
//	Cube c1;
//	c1.setL(10);
//	c1.setH(10);
//	c1.setW(10);
//	cout << "面积" << c1.calculateS() << endl;
//
//	cout << "体积" << c1.calculateV()<< endl;
//
//	cout << "=============案例02=============" << endl;
//
//	system("pause");
//	return 0;
//}