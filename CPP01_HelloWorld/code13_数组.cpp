#include<iostream>
#include<string.h>
using namespace std;

int main13() {
	//数组的定义： 数据类型 数组名[数组长度]
	//int arr[5];
	//arr[0] = 1;
	//arr[1] = 2;
	//arr[2] = 3;
	//cout << arr[0] << endl;
	//cout << arr[1] << endl;
	////2. 数据类型 数组名[数组长度] = {值1， 值2 } //如果没有初始化，则用0填补
	//int arr2[5] = { 10,20, 30, 40, 50};
	//for (int i = 0; i < 5; i++) {
	//	cout << arr2[i] << endl;
	//}
	////3. 数组类型 数组名[]={值1， 值2}
	//int arr3[] = { 12,23,45,67,89 };
	//for (int i = 0; i < 5; i++) {
	//	cout << arr3[i] << endl;
	//}
	//cout << "数组名的用途" << endl;
	////4. 数组名的用途---数组名是常量，不能被修改
	//int arr4[] = { 1,2,3,4,5 };
	////4.1.统计整个数组在内存中的长度 sizeof(arr)
	//cout << sizeof(arr4[0]) << endl;
	//cout << sizeof(arr4) << endl;
	//cout << sizeof(arr4) / sizeof(arr4[0]) << endl;
	////4.2.可以获取在内存中的首地址
	//cout << "arr4数组首地址" << arr4 << endl;
	//cout << "arr4数组首地址" <<int(arr4) << endl;
	//cout << "arr4数组第一个元素地址" << int(&arr4[0]) << endl;
	//cout << "arr4数组第二个元素地址" << int(&arr4[1]) << endl;

	//cout << " " << endl;
	//cout << "5只小猪的体重" << endl;
	////5. 5只小猪体重
	//int pigs[5] = {300,350, 200, 400, 250};
	//int max = 0;
	//for (int i = 0; i < 5; i++) {
	//	if (pigs[i] > max) {
	//		max = pigs[i];
	//	}
	//}
	//cout << "最终的小猪" << max << endl;

	////6.数组的逆放置
	//cout << " " << endl;
	//cout << "数组的逆值" << endl;
	//int arr06[] = { 1,2,3,4,5,6,7,8,9 };
	//int start = 0;
	//int end = sizeof(arr06)/sizeof(arr06[0]) -1;
	//while (start < end) {
	//	int temp = arr06[start];
	//	arr06[start] = arr06[end];
	//	arr06[end] = temp;
	//	start++;
	//	end--;
	//}

	//for (int i = 0; i < 9; i++) {
	//	cout << arr06[i] << endl;

	//}

	//cout << "  " << endl;
	////7.冒泡排序
	//int arr07[] = {4, 2, 8,0,5,7,1,3,9};
	//int length = sizeof(arr07) / sizeof(arr07[0]);
	//for (int i = 0; i < length-1; i++) {
	//	for (int j = 0; j < length - i-1; j++) {
	//		if (arr07[j] > arr07[j + 1]) {
	//			int temp = arr07[j];
	//			arr07[j] = arr07[j + 1];
	//			arr07[j + 1] = temp;
	//		}
	//	}
	//}

	//for (int i = 0; i < length; i++) {
	//	cout << arr07[i] << endl;
	//}

	////8. 二维数组的定义方式
	///*
	//1. 数据类型  数组名[ 行数 ][ 列数 ]; 
 //   2. 数据类型  数组名[ 行数 ][ 列数 ] = { {数据1，数据2 } ，{数据3，数据4 } };
 //   3. 数据类型  数组名[ 行数 ][ 列数 ] = { 数据1，数据2，数据3，数据4};`
 //   4. 数据类型  数组名[  ][ 列数 ] = { 数据1，数据2，数据3，数据4};
	//*/
	//cout << "   " << endl;
	//int arr08[2][3];
	//arr08[0][0] = 1;
	//arr08[0][1] = 2;
	//arr08[0][2] = 3;
	//arr08[1][0] = 4;
	//arr08[1][1] = 5;
	//arr08[1][2] = 6;
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		cout << arr08[i][j] << endl;
	//	}
	//}

	//cout << "   " << endl;
	//int arr09[2][3] = {
	//	{1,2,3},
	//	{4, 5, 6}
	//};
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		cout << arr09[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//cout << " " << endl;

	////3.
	//int arr10[2][3] = { {1,2,3},{4,5,6} };
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		cout << arr10[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//cout << " " << endl;

	////4.
	//int arr11[][3] = { 1,2,3,4,5,6 };
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		cout << arr11[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	cout << "ABCD " << endl;
  //9. 二维数组名称
  //1.查看占用内存空间大小
  //2. 查看二维数组首地址
	//int arr[2][3] = { {1,2,3},{4,5,6} };

	//cout << "二维数组占用空间的: " << sizeof(arr) << endl;
	//cout << "二维数组第一行占用空间的内存: " << sizeof(arr[0]) << endl;
	//cout << "二维数组第一个元素占用空间的内存: " << sizeof(arr[0][1]) << endl;
	//cout << "二维数组行数: " << sizeof(arr) / sizeof(arr[0])<< endl;
	//cout << "二维数组所占的列数" << sizeof(arr[0]) / sizeof(arr[0][1]) << endl;
	//cout << "二维数组的首地址" << (int)arr << endl;
	//cout << "二维数组中第一行首地址" << (int)arr[0] << endl;
	//cout << "二维数组中第二行首地址" << (int)arr[1] << endl;
	//cout << "二维数组中第一个元素首地址" << int(&arr[0][0]) << endl;
	//cout << "二维数组中第二行第一个元素首地址" << int(&arr[1][0]) << endl;

	//10 二维数组的应用
	int scores[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = { "张三","李四","王五" };

	//2.统计每个人的分数
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += scores[i][j];
			cout << scores[i][j] << " ";
		}
		cout <<names[i]<< "总分为: " << sum << endl;
		cout << endl;
	}





	system("pause");
	return 0;
}

