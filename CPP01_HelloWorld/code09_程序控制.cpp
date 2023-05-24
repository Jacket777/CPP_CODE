#include<iostream>
#include<string>
using namespace std;

int main09() {
	//1.选择结构，单行if语句---测试通过
	//1.用户输入分数---批量注释 ctr + k + c
	//int score = 0;
	//cout << "请输入一个分数" << endl;
	//cin >> score;
	//cout << "你输入的分数是 ：" << score << endl;
	//if (score > 600) {
	//	cout << "恭喜你考上大学" << endl;
	//}

	//2.选择结构，多行if语句--测试通过
	//int score = 0;
	//cout << "请输入一个分数" << endl;
	//cin >> score;
	//cout << "你输入的分数是 ：" << score << endl;
	//if (score > 600) {
	//	cout << "恭喜你考上大学" << endl;
	//}else {
	//	cout << "没有考上大学，继续努力" << endl;
	//}

	//3. 选择结构， 多条件if语句
	//int score = 0;
	//cout << "请输入一个分数" << endl;
	//cin >> score;
	//cout << "你输入的分数是 ：" << score << endl;
	//if (score > 600) {
	//	cout << "恭喜你考上一本大学" << endl;
	//}
	//else if(score > 500) {
	//	cout << "恭喜你考上二本大学" << endl;
	//}
	//else if (score > 400) {
	//	cout << "恭喜你考上三本大学" << endl;
	//}
	//else {
	//	cout << "没有考上大学，继续努力" << endl;
	//}

	//4. 选择结构， 嵌套if语句
	/*int score = 0;
	cout << "请输入一个分数" << endl;
	cin >> score;
	cout << "你输入的分数是 ：" << score << endl;
	if (score > 600) {
		cout << "恭喜你考上一本大学" << endl;
		if (score > 700) {
			cout << "恭喜你考上北京大学" << endl;
		}
		else if (score > 650) {
			cout << "恭喜你考上清华大学" << endl;
		}
		else {
			cout << "恭喜你考上人民大学" << endl;
		}
	}
	else if (score > 500) {
		cout << "恭喜你考上二本大学" << endl;
	}
	else if (score > 400) {
		cout << "恭喜你考上三本大学" << endl;
	}
	else {
		cout << "没有考上大学，继续努力" << endl;
	}*/

	//5. 应用 三个小猪称体重
	//int num1 = 0;
	//int num2 = 0;
	//int num3 = 0;

	//cout << "请输入小猪A的体重" << endl;
	//cin >> num1;
	//cout << "请输入小猪B的体重" << endl;
	//cin >> num2;
	//cout << "请输入小猪C的体重" << endl;
	//cin >> num3;
	//cout << "小猪A的体重" << num1<<endl;
	//cout << "小猪B的体重" << num2 << endl;
	//cout << "小猪C的体重" << num3 << endl;
	//if (num1 > num2){
	//	if (num1 > num3) {
	//		cout << "小猪A的体重 最重" << num1 <<endl;
	//	}
	//	else {
	//		cout << "小猪C的体重 最重" << num1 << endl;
	//	}
	//}
	//else {
	//	if (num2 > num3) {
	//		cout << "小猪B的体重 最重" << num2<< endl;
	//	}
	//	else {
	//		cout << "小猪C的体重 最重" << num3 << endl;
	//	}

	//}


	// 三目运算符
 //   int a, b, c;
	//a = 10;
	//b = 20;
	//c = 0;
	//c = (a > b ? a : b);
	//cout << "c = " << c << endl;
	//// 在C ++中，三目运算符返回的是变量，可以继续赋值
	//(a > b ? a : b) = 100;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl; // b =100


   // switch 缺点：在判断的时候，只能是整型或字符型，不能判断一个区间，优点：结构清晰，执行效率高
   //给电影评分 10-9 经典 8-7 非常好  6-5 一般 5以下 烂片
cout << "请给电影打分" << endl;
int score = 0;
cin >> score;
cout << "你打的分数是 " << score << endl;
switch (score) {
case 10:
	cout << "你认为的是经典电影" << endl;
	break;//退出当前分支
case 9:
	cout << "你认为的是经典电影" << endl;
	break;
case 8:
	cout << "你认为的电影非常好" << endl;
	break;
case 7:
	cout << "你认为的电影非常好" << endl;
	break;
case 6:
	cout << "你认为的电影一般" << endl;
	break;
case 5:
	cout << "你认为的电影一般" << endl;
	break;
default:
	cout << "烂片" << endl;
	break;
}


	system("pause");
	return 0;

}