//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class Building;
//class goodGay {
//public:
//	goodGay();
//	void visit();//只让visit函数作为Building的好朋友，可以发访问Building中私有内容
//	void visit2();
//private:
//	Building* building;
//};
//
//
//class Building {
//
//	///告诉编译器  goodGay类中的visit成员函数 是Building好朋友，可以访问私有内容
//	friend void goodGay::visit();
//public:
//	Building();
//
//public:
//	string m_SittingRoom; //客厅
//private:
//	string m_BedRoom; //卧室
//};
//
//
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
//void goodGay::visit2() {
//	cout << "好友正在访问: " << building->m_SittingRoom << endl;
//	//cout << "好友正在访问: " << building->m_BedRoom << endl;  // 不可以访问
//}
//
//
//
//
//
//void test1801() {
//	goodGay gg;
//	gg.visit();
//	cout << "-----------" << endl;
//	gg.visit2();
//}
//
//
//int main() {
//	test1801();
//	system("pause");
//	return 0;
//}