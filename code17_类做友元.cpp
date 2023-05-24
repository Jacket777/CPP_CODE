//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class Building;
//class goodGay {
//public:
//	goodGay();
//	void visit();
//private:
//	Building* building;
//};
//
//
//class Building {
//
//	告诉编译器goodGay类 是Buidding类的好友，可以访问类中的私有内容
//	friend class goodGay;
//public:
//	Building();
//
//public:
//	string m_SittingRoom; //客厅
//private:
//	string m_BedRoom; //卧室
//};
//
//函数在类外实现函数
//Building::Building() {
//	this->m_SittingRoom = "客厅";
//	this->m_BedRoom = "卧室";
//}
//
//goodGay::goodGay() {
//	building = new Building;
//}
//
//void goodGay::visit() {
//	cout << "好友正在访问: " << building->m_SittingRoom << endl;
//	cout << "好友正在访问: " << building->m_BedRoom << endl;
//}
//
//
//
//
//
//void test1701() {
//	goodGay gg;
//	gg.visit();
//}
//
//
//int main() {
//	test1701();
//	system("pause");
//	return 0;
//}