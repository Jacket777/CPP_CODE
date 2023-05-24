//#include<iostream>
//#include<string>
//using namespace std;
//
///*
//实现通用的 对数组进行排序的函数
//规则：从大到小
//算法：选择排序
//测试：char数组， int 数组
//*/
//
//template<typename T>
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
////利用选择排序，进行对数组大小排序
//template<class T>
//void mySort(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		int max = i;
//		for (int j = i + 1; j < len; j++) {
//			if (arr[max] < arr[j]) {
//				max = j;
//			}
//		}
//		if (max != i) {
//			mySwap(arr[max], arr[i]);}
//	}
//}
//
//
//
//template<typename T>
//void printArray(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//
//
//void test01() {
//	char charArr[] = "bdcfeagh";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02() {
//	int arr[] = { 7, 5, 8, 1, 3, 9, 2, 4, 6 };
//	int num = sizeof(arr) / sizeof(int);
//	mySort(arr, num);
//	printArray(arr, num);
//}
//
//
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//
//}