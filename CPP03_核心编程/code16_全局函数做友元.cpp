//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class Building {
//
//	//告诉编译器goodGay全局函数 是Buidding类的好友，可以访问类中的私有内容
//	friend void goodGay(Building* building);
//public:
//	Building() {
//		this->m_SittingRoom = "客厅";
//		this->m_BedRoom = "卧室";
//	}
//
//public:
//	string m_SittingRoom; //客厅
//private:
//	string m_BedRoom; //卧室
//};
//
//
//
//
//void goodGay(Building* building) {
//	cout << "好友正在访问: " << building->m_SittingRoom << endl;
//	cout << "好友正在访问: " << building->m_BedRoom << endl;
//}
//
//void test1601() {
//	Building b;
//	goodGay(&b);
//}
//
//
//int main() {
//	test1601();
//	system("pause");
//	return 0;
//}