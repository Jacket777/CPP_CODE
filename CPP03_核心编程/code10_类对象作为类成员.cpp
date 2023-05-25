//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class Phone {
//public:
//	Phone(string name) {
//		m_PhoneName = name;
//		cout << "Phone 构造" << endl;
//	}
//	~Phone() {
//		cout << "Phone 析构" << endl;
//	}
//
//	string m_PhoneName;
//};
//
//
//class Person {
//public:
//	//隐式转换 Phone m_Phone = pName
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person 构造" << endl;
//	}
//	~Person() {
//		cout << "Person 析构" << endl;
//	}
//
//	void playGame() {
//		cout << m_Name << " use " << m_Phone.m_PhoneName << " phone" << endl;
//	}
//
//	string m_Name;
//	Phone m_Phone;
//};
//
//
//void tet101(){
//	Person p("Jack", "apple");
//    p.playGame();
//}
//
//
//int main() {
//	tet101();
//	system("pause");
//	return 0;
//}
