//#include<iostream>
//#include<fstream>  //�ļ�������������ͷ�ļ�
//#include<string>
//using namespace std;
//
////1.�ı��ļ� д�ļ�
//void test01() {
//	ofstream ofs;  //2.����������  ---д���� ofstream === out file stream
//	ofs.open("test.txt", ios::out);  //3.���ļ� ofs.open("�ļ�·��",�򿪷�ʽ);  ios::out Ϊд�ļ������ļ�
//	ofs << "name: jack" <<endl;  //4. д����
//	ofs << "sex: man" << endl;
//	ofs << "age: 18" << endl;
//	ofs.close();//5. �ر��ļ�
//
//}
//
//
////2.�ı��ļ�---���ļ�
//void test02() {
//	ifstream ifs;  //����������  ---������ ifstream == input file stream
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) {  //����is_open���������ж��ļ��Ƿ�򿪳ɹ�
//		cout << "ͷ�ļ���ʧ��" << endl;
//		return;
//	}
//
//	char buf[1024] = { 0 };
//	//4.������
//	// ��һ�ֶ�ȡ��ʽ---��ȡ�ո�ʱ�ᵱ�����з�����
//	//while (ifs >> buf) {
//	//	cout << buf << endl;
//	//	cout << "-----------------" << endl;
//	//}
//
//	// �ڶ��ֶ�ȡ��ʽ---��ȡ�ո�ʱ���ᵱ�����з�����
//	//while (ifs.getline(buf, sizeof(buf))) {
//	//	cout << buf << endl;
//	//}
//
//	ifs.close();//�ر�
//}
//
//
//
//
//
//void test03() {
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) {
//		cout << "ͷ�ļ���ʧ��" << endl;
//		return;
//	}
//	string buf;
//	while (getline(ifs,buf)) {
//		cout << buf << endl;
//	}
//	ifs.close();//�ر�
//}
//
//
//
////���Ƽ�ʹ��
//void test04() {
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) { 
//		cout << "ͷ�ļ���ʧ��" << endl;
//		return;
//	}
//	char c ;
//	//�����ļ�β EOF = end of file
//	while ((c=ifs.get())!=EOF) {
//		cout << c ;
//	}
//	ifs.close();//�ر�
//}
//
//
//
//int main() {
//	//test01();
//	//test02();
//	//test03();
//	test04();
//	system("pause");
//	return 0;
//}
