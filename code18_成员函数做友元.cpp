//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class Building;
//class goodGay {
//public:
//	goodGay();
//	void visit();//ֻ��visit������ΪBuilding�ĺ����ѣ����Է�����Building��˽������
//	void visit2();
//private:
//	Building* building;
//};
//
//
//class Building {
//
//	///���߱�����  goodGay���е�visit��Ա���� ��Building�����ѣ����Է���˽������
//	friend void goodGay::visit();
//public:
//	Building();
//
//public:
//	string m_SittingRoom; //����
//private:
//	string m_BedRoom; //����
//};
//
//
//Building::Building() {
//	this->m_SittingRoom = "����";
//	this->m_BedRoom = "����";
//}
//
//goodGay::goodGay() {
//	building = new Building;
//}
//
//void goodGay::visit() {
//	cout << "�������ڷ���: " << building->m_SittingRoom << endl;
//	cout << "�������ڷ���: " << building->m_BedRoom << endl;
//}
//
//
//void goodGay::visit2() {
//	cout << "�������ڷ���: " << building->m_SittingRoom << endl;
//	//cout << "�������ڷ���: " << building->m_BedRoom << endl;  // �����Է���
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