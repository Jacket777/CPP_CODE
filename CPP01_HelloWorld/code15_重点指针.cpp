#include<iostream>
#include<string>
using namespace std;


void swap15(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "函数中的a, b " << endl;
	cout << " a = " << a << " b = "<<b<<endl;
}


void swap1501(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}



void bubbleSort15(int *arr, int length) {
	for (int i = 0; i < length - 1; i++) {
		for(int j = 0; j < length-i-1; j++){
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(int* arr, int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << endl;

	}
}


int main15() {
	//1.定义指针, 定义语法： 数据类型 * 指针变量名
	int a = 10;
	int* p;
	//让指针记录变量a的地址
	p = &a;
	cout << " a 的指针为: " << &a << endl;
	cout << " p 的值: " << p << endl;

	//2. 指针的引用
	//可以通过解引用的方式来找到指针所指向的内存---在指针前加星号代表解应用，找到指针指向的内存的数据
	*p = 1000;
	cout << " a = " << a << endl;
	cout << " *p = " << *p << endl;

	cout << "      " << endl;

	//3.指针所占内存空间
	//指针也是一种数据类型，它也占用内存空间
	//32位， 占用4个字节空间  64位下占8个字节空间
	int a1 = 10;
	int* p1 = &a1;
	cout << "sizeof(int *)" <<sizeof(int *)<< endl;
	cout << "sizeof(int *)" << sizeof(*p1) << endl;
	cout << "sizeof(int *)" << sizeof(float*) << endl;
	cout << "sizeof(int *)" << sizeof(double*) << endl;
	cout << "sizeof(int *)" << sizeof(char*) << endl;

	//4.空指针 --1.用于给指针变量进行初始化，2.空指针不能被访问 0--255之间的内存编号是系统占用的，因此不可以访问
	int* p2 = NULL;  //表示0
	//*p2 = 100;  //不可以被访问
	p2 = &a1;

	//5.野指针 --避免出现野指针--指针变量指向非法空间
	//int* p3 = (int*)Ox1100;

	//6.const 修饰指针---容易混淆--注意区别
	//6.1.const修饰指针 --常量指针---指针的指向可以修改，指针指向的值不可以修改
	int a3 = 10;
	int b3 = 20;
	const int* p3 = &a3;
	//*p3 = 20;  //错误 指针指向的值不可以被修改
	p3 = &b3; //正确--指针的指向可以修改


	//6.2.const修饰常量 --指针常量--指针的指向不可以修改，指针指向的值可以修改
	int* const p4 = &a3; 
	*p4 = 100; //指针指向的值可以被修改
	// p4 = &b3;  //指针指向不能改


	//6.3.const既修饰指针，又修饰常量 特点--指针的指向不可以修改，指针指向的值不可以修改 const int * const p 
	const int* const p5 = &a3;


	//7. 指针与数组
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p6 = arr; //arr是数组的首地址
	cout << "指针 --- >" << *p6 << endl;
	p6++;//让指针偏移4个字节
	cout << "指针 --->" << *p6 << endl;
	int* p7 = arr;
	for (int i = 0; i < 10; i++) {
		cout << *p7 << endl;
		p7++;
	}

	//8.指针与函数
	//8.1.值传递
	int a4 = 10;
	int b4 = 20;
	swap15(a4, b4);
	cout << " a4 = " << a4 << " b4 = " << b4 << endl;
	//8.2.地址传递, 可以修饰实参
	swap1501(&a4, &b4);
	cout << " a4 = " << a4 << " b4 = " << b4 << endl;
	cout << "============>>>>>===================" << endl;

	//9.指针，数组，函数---冒泡排序
	int arr02[10] = { 4,3,6,9,1,2,10,8,7,5};
	int length = sizeof(arr02) / sizeof(arr02[0]);
	bubbleSort15(arr02, length);
	printArray(arr02, length);















	//2. 指针定义
	system("pause");
	return 0;
}
