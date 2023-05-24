#include<iostream>
#include<string.h>
using namespace std;

int main12() {
//continue --测试通过
	//for (int i = 0; i <= 100; i++) {
	//	if (i % 2 == 0) {
	//		continue;//可以筛选条件，执行到此不再向下执行
	//	}
	//	cout << i << endl;
	
// goto use--不建议使用
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