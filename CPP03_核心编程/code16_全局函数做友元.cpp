//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class Building {
//
//	//���߱�����goodGayȫ�ֺ��� ��Buidding��ĺ��ѣ����Է������е�˽������
//	friend void goodGay(Building* building);
//public:
//	Building() {
//		this->m_SittingRoom = "����";
//		this->m_BedRoom = "����";
//	}
//
//public:
//	string m_SittingRoom; //����
//private:
//	string m_BedRoom; //����
//};
//
//
//
//
//void goodGay(Building* building) {
//	cout << "�������ڷ���: " << building->m_SittingRoom << endl;
//	cout << "�������ڷ���: " << building->m_BedRoom << endl;
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