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
//	���߱�����goodGay�� ��Buidding��ĺ��ѣ����Է������е�˽������
//	friend class goodGay;
//public:
//	Building();
//
//public:
//	string m_SittingRoom; //����
//private:
//	string m_BedRoom; //����
//};
//
//����������ʵ�ֺ���
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