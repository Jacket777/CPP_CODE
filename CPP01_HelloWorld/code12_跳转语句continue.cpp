#include<iostream>
#include<string.h>
using namespace std;

int main12() {
//continue --����ͨ��
	//for (int i = 0; i <= 100; i++) {
	//	if (i % 2 == 0) {
	//		continue;//����ɸѡ������ִ�е��˲�������ִ��
	//	}
	//	cout << i << endl;
	
// goto use--������ʹ��
	 cout << "1.xxxx"<< endl;
	 cout << "2.xxxx" << endl;
	 goto FLAG;
	 cout << "3.xxx" << endl;
 FLAG:
	 cout << "4.xxxx" << endl;
	 cout << "5.xxxx" << endl;
	system("pause");
	return 0;
}