#include<iostream>
#include<string.h>
using namespace std;

int main13() {
	//����Ķ��壺 �������� ������[���鳤��]
	//int arr[5];
	//arr[0] = 1;
	//arr[1] = 2;
	//arr[2] = 3;
	//cout << arr[0] << endl;
	//cout << arr[1] << endl;
	////2. �������� ������[���鳤��] = {ֵ1�� ֵ2 } //���û�г�ʼ��������0�
	//int arr2[5] = { 10,20, 30, 40, 50};
	//for (int i = 0; i < 5; i++) {
	//	cout << arr2[i] << endl;
	//}
	////3. �������� ������[]={ֵ1�� ֵ2}
	//int arr3[] = { 12,23,45,67,89 };
	//for (int i = 0; i < 5; i++) {
	//	cout << arr3[i] << endl;
	//}
	//cout << "����������;" << endl;
	////4. ����������;---�������ǳ��������ܱ��޸�
	//int arr4[] = { 1,2,3,4,5 };
	////4.1.ͳ�������������ڴ��еĳ��� sizeof(arr)
	//cout << sizeof(arr4[0]) << endl;
	//cout << sizeof(arr4) << endl;
	//cout << sizeof(arr4) / sizeof(arr4[0]) << endl;
	////4.2.���Ի�ȡ���ڴ��е��׵�ַ
	//cout << "arr4�����׵�ַ" << arr4 << endl;
	//cout << "arr4�����׵�ַ" <<int(arr4) << endl;
	//cout << "arr4�����һ��Ԫ�ص�ַ" << int(&arr4[0]) << endl;
	//cout << "arr4����ڶ���Ԫ�ص�ַ" << int(&arr4[1]) << endl;

	//cout << " " << endl;
	//cout << "5ֻС�������" << endl;
	////5. 5ֻС������
	//int pigs[5] = {300,350, 200, 400, 250};
	//int max = 0;
	//for (int i = 0; i < 5; i++) {
	//	if (pigs[i] > max) {
	//		max = pigs[i];
	//	}
	//}
	//cout << "���յ�С��" << max << endl;

	////6.����������
	//cout << " " << endl;
	//cout << "�������ֵ" << endl;
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
	////7.ð������
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

	////8. ��ά����Ķ��巽ʽ
	///*
	//1. ��������  ������[ ���� ][ ���� ]; 
 //   2. ��������  ������[ ���� ][ ���� ] = { {����1������2 } ��{����3������4 } };
 //   3. ��������  ������[ ���� ][ ���� ] = { ����1������2������3������4};`
 //   4. ��������  ������[  ][ ���� ] = { ����1������2������3������4};
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
  //9. ��ά��������
  //1.�鿴ռ���ڴ�ռ��С
  //2. �鿴��ά�����׵�ַ
	//int arr[2][3] = { {1,2,3},{4,5,6} };

	//cout << "��ά����ռ�ÿռ��: " << sizeof(arr) << endl;
	//cout << "��ά�����һ��ռ�ÿռ���ڴ�: " << sizeof(arr[0]) << endl;
	//cout << "��ά�����һ��Ԫ��ռ�ÿռ���ڴ�: " << sizeof(arr[0][1]) << endl;
	//cout << "��ά��������: " << sizeof(arr) / sizeof(arr[0])<< endl;
	//cout << "��ά������ռ������" << sizeof(arr[0]) / sizeof(arr[0][1]) << endl;
	//cout << "��ά������׵�ַ" << (int)arr << endl;
	//cout << "��ά�����е�һ���׵�ַ" << (int)arr[0] << endl;
	//cout << "��ά�����еڶ����׵�ַ" << (int)arr[1] << endl;
	//cout << "��ά�����е�һ��Ԫ���׵�ַ" << int(&arr[0][0]) << endl;
	//cout << "��ά�����еڶ��е�һ��Ԫ���׵�ַ" << int(&arr[1][0]) << endl;

	//10 ��ά�����Ӧ��
	int scores[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = { "����","����","����" };

	//2.ͳ��ÿ���˵ķ���
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += scores[i][j];
			cout << scores[i][j] << " ";
		}
		cout <<names[i]<< "�ܷ�Ϊ: " << sum << endl;
		cout << endl;
	}





	system("pause");
	return 0;
}

