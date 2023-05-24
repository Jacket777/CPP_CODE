#include<iostream>
#include<string>
using namespace std;
//time系统时间头文件包含
#include<ctime>

int main10() {
	//1.while 循环
	//int num = 0;
	//while (num < 10) {
	//	cout << num << endl;
	//	num++;
	//}

	//2.while 循环--实例猜循环
	//2.1. 系统生成随机数
	//2.2. 玩家进行猜测
	//2.3. 判断玩家猜测
	//2.4. 猜错，到步骤2
    //添加随机种子，作用利用当前系统时间生成随机数，防止每次随机数都一样
	//srand((unsigned int)time(NULL));
	////rand()%100 //生成0-99的随机数
	//int num = rand() % 10 + 1;   // 
	//int val = 0;
	//while (true) {
	//	cin >> val;
	//	if (val > num) {
	//		cout << "猜测过大,请重新猜测" << endl;

	//	}
	//	else if (val < num) {
	//		cout << "猜测过小,请重新猜测" << endl;

	//	}
	//	else {
	//		cout << "恭喜你,猜对了" << endl;
	//		break;//退出当前循环
	//	}

	//}

	//3. do....while 
	//int num = 0;
	//do {
	//	cout << num << endl;
	//	num++;
	//} while (num < 10);

	//3. do....while ---水仙花数
	//1.将所有的三位数进行输出
	//int num = 100;
	//do {
	//	int a = 0;//个位
	//	int b = 0;//十位
	//	int c = 0;//
	//	a = num % 10;
	//	b = num / 10 % 10;
	//	c = num / 100;
	//	//2.在所有三位数中找到水仙花数
	//	if (a * a * a + b * b * b + c * c * c == num) {
	//		cout << num << endl;
	//	}
	//	num++;

	//} while (num < 1000);
	
	//4. for 循环
	//for (int i = 0; i < 10; i++) {
	//	cout << i << endl;
	//}

	/*int i = 0;
	for (;;) {
		if (i > 10) {
			break;
		}
		cout << i << endl;
		i++;
	}*/

	//5.循环应用---敲桌子
	//for (int i = 0; i < 100; i++) {
	//	if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
	//		cout << i << "敲桌子"<<endl;
	//	}
	//}

	//6. 嵌套循环
	//for(int i = 0; i < 10; i++){
	//	for (int j = 0; j < 10;j++) {
	//		cout << "* ";
	//	}
	//	cout << endl;
	//}

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << "*" << j << "=" << i * j << " " ;

		}
		cout << endl;
	}


	



	system("pause");
	return 0;
}