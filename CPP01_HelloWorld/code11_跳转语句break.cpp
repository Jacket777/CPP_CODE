#include<iostream>
#include<string>
using namespace std;

int main11() 
{
   //break ---switch
	cout << "请输入难度 1.普通 2.中等， 3 难" << endl;
	int select = 0;
	cin >> select;
	switch (select) {
	case 1:
		cout << "你选择的是普通难度" << endl;
		break;
	case 2:
		cout << "你选择的是中等难度" << endl;

		break;
	case 3:
		cout << "你选择的是高难度" << endl;

		break;
	default:
		break;
	}

	//break--for循环
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break;
		}
	}



	//循环嵌套
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;
			}
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}