//#include<vector>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//
////1.���췽��
//void test01() {
//	string s1; //Ĭ�Ϲ��� �������ַ����������޲ι��캯�� 
//	cout << " str1 = " << s1 << endl;
//	const char* str = "Hello world";
//	string s2(str);//��c_stringת������string //c���ԵĹ��캯��
//	cout << "str2 = " << s2 << endl;
//
//	string s3(s2);//���ÿ������캯��
//	cout << "str3 = " << s3 << endl;
//	string s4(10,'a');  //10��a
//	cout << "str4 = " << s4 << endl;
//}
//
//
////2.��ֵ����
//void test02() {
//	string str1;
//	str1 = "hello world";
//	cout << " str1 = " << str1 << endl;
//	string str2;
//	str2 = str1;
//	cout << "str2=" << str2 << endl;
//	string str3;
//	str3 = 'a';
//	cout << "str3=" << str3 << endl;
//	string str4;
//	str4.assign("hello c++");
//	cout << "str4 = " << str4 << endl;
//	string str5;
//	str5.assign("hello c++", 5); //���ַ���ǰ5���ַ���ֵ
//	cout << "str5 = " << str5 << endl;
//	string str6;
//	str6.assign(str5);
//	cout << "str6=" << str6 << endl;
//	string str7;
//	str7.assign(5, 'x');//5��x��ֵ
//	cout << "str7 = " << str7 << endl;
//}
//
//
///*
//* 
//* *`string& operator+=(const char* str); `                   //����+=������
//* `string& operator+=(const char c); `                         //����+=������
//* `string& operator+=(const string& str); `                //����+=������
//* `string& append(const char* s); `                               //���ַ���s���ӵ���ǰ�ַ�����β
//* `string& append(const char* s, int n); `                 //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//* `string& append(const string& s); `                           //ͬoperator+=(const string& str)
//* `string& append(const string& s, int pos, int n); `/ / �ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
//*/
//
////
//
//
////3.�ַ���ƴ��
//void test03() {
//	string str1 = "I";
//	str1 += "love game";
//	cout << "str1 = " << str1 << endl;
//	str1 += ':';
//	cout << "str1 = " << str1 << endl;
//
//	string str2 = "LOL DNF";
//	str1 += str2;
//	cout << "str1 = " << str1 << endl;
//	string str3 = "I";
//	str3.append(" love ");
//	str3.append(" game abc ", 4); //�ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//	str3.append(str2, 4, 3);// ���±�4λ�ÿ�ʼ ����ȡ3���ַ���ƴ�ӵ��ַ���ĩβ
//	cout << "str3 = " << str3 << endl;
//}
//
//
///*
//�ܽ᣺
//
//* find�����Ǵ�������rfind��������
//* find�ҵ��ַ����󷵻ز��ҵĵ�һ���ַ�λ�ã��Ҳ�������-1
//* replace���滻ʱ��Ҫָ�����ĸ�λ���𣬶��ٸ��ַ����滻��ʲô�����ַ���
//
//*/
//
////����
//void test04() {
//	string str1 = "abcdefgde";
//	int pos = str1.find("de");
//	if (pos == -1) {
//		cout << "δ�ҵ����ַ�" << endl;
//	}
//	else {
//		cout << "���ַ����ڵ�λ�� pos = " << pos << endl;
//	}
//
//	//rfind��������飬find�������Ҳ�
//	pos = str1.rfind("de");
//	cout << " pos = " << pos << endl;
//}
//
//
////�滻
//void test05() {
//	string str1 = "abcdefgh";
//	//��1��λ����3���ַ��滻Ϊ1111111
//	str1.replace(1, 3, "1111111");  //replace���滻ʱ��Ҫָ�����ĸ�λ���𣬶��ٸ��ַ����滻��ʲô�����ַ���
//	cout << "str1 = " << str1 << endl;
//}
//
//
////�ַ����Ƚ�
///*
//**����������**
//* �ַ���֮��ıȽ�
//**�ȽϷ�ʽ��**
//* �ַ����Ƚ��ǰ��ַ���ASCII����жԱ�
//= ����   0
//> ����   1
//< ����  -1
//**����ԭ�ͣ�**
//* `int compare(const string &s) const; `  //���ַ���s�Ƚ�
//* `int compare(const char *s) const;`      //���ַ���s�Ƚ�
//*/
//
//void test010(){
//	string s1 = "hello";
//	string s2 = "aello";
//	int ret = s1.compare(s2);
//	if (ret == 0) {
//		cout << "s1 ���� s2" << endl;
//	}else if (ret > 0){
//		cout << "s1 ���� s2" << endl;
//	}else{
//		cout << "s1 С�� s2" << endl;
//	}
//}
//
//
///*
//#### 3.1.7 string�ַ���ȡ
//string�е����ַ���ȡ��ʽ������
//* `char& operator[](int n); `     //ͨ��[]��ʽȡ�ַ�
//* `char& at(int n);              //ͨ��at������ȡ�ַ�
//*/
//
////��ȡ
//void test06() {
//	string str = "hello world";
//	for (int i = 0; i < str.size(); i++) {
//		cout << str[i] << "----";
//	}
//	cout << endl;
//	//ͨ��at������ȡ�ַ�
//	for (int i = 0; i < str.size(); i++) {
//		cout << str.at(i) << "====";
//	}
//	cout << endl;
//	cout << "change content" << endl;
//	str[0] = 'b';
//	str.at(1) = 'x';
//	cout << str << endl;
//}
//
//
///*
//#### 3.1.8 string�����ɾ��
//**����������**
//* ��string�ַ������в����ɾ���ַ�����
//**����ԭ�ͣ�**
//* `string& insert(int pos, const char* s);  `                  //�����ַ���
//* `string& insert(int pos, const string& str); `              //�����ַ���
//* `string& insert(int pos, int n, char c);`                  //��ָ��λ�ò���n���ַ�c
//* `string& erase(int pos, int n = npos);`                   //ɾ����Pos��ʼ��n���ַ�
//
//**�ܽ᣺**�����ɾ������ʼ�±궼�Ǵ�0��ʼ
//*/
////�ַ����Ĳ����ɾ��
//void test07() {
//	string str = "hello";
//	str.insert(1, "100");
//	cout << str << endl;
//	str.erase(1, 3);//��1��λ�ÿ�ʼ3���ַ� ɾ��
//	cout << str << endl;
//}
//
////�Ӵ�
///*
//#### 3.1.9 string�Ӵ�
//**����������**
//* ���ַ����л�ȡ��Ҫ���Ӵ�
//**����ԭ�ͣ�**
//* `string substr(int pos = 0, int n = npos) const;`   //������pos��ʼ��n���ַ���ɵ��ַ���
//* **�ܽ᣺**�����������Ӵ����ܣ�������ʵ�ʿ����л�ȡ��Ч����Ϣ
//*/
//
//void test08() {
//	string str = "abcdefg";
//	string substr = str.substr(1, 3);
//	cout << "substr = " << substr << endl;
//	string email = "hello345@sina.com";
//	int pos = email.find("@");
//	string username = email.substr(0, pos);
//	cout << "username: " << username << endl;
//}
//
//
//
//
//int main() {
//	//test01();
//	test08();
//	system("pause");
//	return 0;
//}
//
