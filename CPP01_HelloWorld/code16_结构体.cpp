#include<iostream>
#include<string>
using namespace std;


//1.创建学生数据类型，学生包括姓名，年龄 分数
//自定义数据类型 -- 一些类型集合组合成一个类型---
struct Student {
	string name;
	int age;
	int score;
}s3; //s顺便创建结构体

struct Teacher {
	int id; //教师编号
	string name; //教师姓名
	int age;//年龄
	struct Student stu;
};

//打印学生信息的函数
void printStudent1601(struct Student s) {
	cout << " 子函数中01: " << endl;
	s.age = 100;
	cout << s.name << s.age << s.score << endl;
}

//地址传递 节省空间
void printStudent1602(struct Student* p) {
	cout << " 子函数02: " << endl;
	//改变
	p->age = 268;
	cout << p->name << p->age << p->score << endl;


}

///加入const之后，一旦有修改的操作就会报错，防止误操作
void printStudent1603(const struct Student* p) {
	cout << " 子函数02: " << endl;
	//改变
	//p->age = 268;  //加入const之后，一旦有修改的操作就会报错，防止误操作
	cout << p->name << p->age << p->score << endl;


}





int main16() {
	//2. 通过学生类型创建具体学生  --创建变量时，struct关键字可以省掉
//2.1. struct Student s1
	struct Student s1;
	//给s1属性赋值
	s1.name = "Jack01";
	s1.age = 18;
	s1.score = 100;
	cout << s1.name << s1.age << s1.score << endl;

	//2.2. struct Student s2 
	struct Student s2 = { "Tom",20,690 };
	cout << s2.name << s2.age << s2.score << endl;

	s3.name = "Jack03";
	s3.age = 180;
	s3.score = 100;
	cout << s3.name << s3.age << s3.score << endl;


	cout << "=========2.结构体数组=======================" << endl;

	//2. 结构体数组
	//创建结构体数组
	struct Student stuArray[3] = {
		{"Jack04", 17, 300},
		{"Jack05", 18, 400},
		{"Jack06", 19, 500}
	};
	//给结构体数组中的元素赋值
	stuArray[2].name = "tom";
	stuArray[2].age = 28;
	stuArray[2].score = 89;
	//遍历结构体数组
	for (int i = 0; i < 3; i++) {
		cout << stuArray[i].name << stuArray[i].age << stuArray[i].score << endl;
	}

	cout << "=========3.结构体指针=======================" << endl;
	Student s5 = { "Jack07", 18,300 };
	//通过指针指向结构体变量
	struct Student* p = &s5; //可以省掉Struct
	//通过指针访问结构体变量的数据,需要使用->访问
	cout << "姓名" << p->name << " 年龄" << p->age << "分数" << p->score << endl;

	cout << "=========4.结构体嵌套=======================" << endl;
	Teacher t;
	t.id = 1000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 79;
	cout << "老师的姓名  "<<t.name << "老师的编号  "<<t.id<<" 老师的年龄："<<t.age<<
		"老师辅导的学生姓名  "<<t.stu.name <<" 学生的年龄: "<<t.stu.age<<" 学生的分数： "<<t.stu.score << endl;

	cout << "=========5.结构体作为函数的参数=======================" << endl;
	struct Student s51 = { "Tom",20,690 };
	printStudent1601(s51);
	cout << "main 方法中" << endl;
	cout << s51.name << s51.age << s51.score << endl;
	cout << "main 方法中" << endl;
	printStudent1602(&s51);
	cout << s51.name << s51.age << s51.score << endl;


	cout << "=========6.结构体中const使用场景=======================" << endl;
	struct Student s61 = { "Tom",20,690 };

	cout << "=========7.结构体中案例01=======================" << endl;




	system("pause");
	return 0;
}