#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//学生的结构体
struct StudentA {
	string name;
	int score;
};

struct TeacherA{
	string name;
	struct StudentA sArray[5];
};


//给老师和学生赋值的函数
void allocateSpace(struct TeacherA tArray[], int len) {
	string nameSeed = "ABCDE";
	//给老师赋值
	for (int i = 0; i < len; i++) {
		tArray[i].name = "Teacher_";
		tArray[i].name += nameSeed[i];
		//通过循环给每名老师赋值
		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].name = "Student_";
			tArray[i].sArray[j].name += nameSeed[j];
			int score = rand() % 61 + 40;
			tArray[i].sArray[j].score = score;
		}

	}

}



//打印所有信息
void printInfo(struct TeacherA tArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << " teacher name: " << tArray[i].name << endl;
		for (int j = 0; j < 5; j++) {
			cout << " \tstudent name: " << tArray[i].sArray[j].name << " score: "<< tArray[i].sArray[j].score <<endl;
		}
	}
}



int main17() {
	//随机种子
	srand((unsigned int)time(NULL));
	//1.创建3名老师的数组
	struct TeacherA tArray[3];
	//2.通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	cout << " len = " << len << endl;
	allocateSpace(tArray, len);
	printInfo(tArray, len);


	system("pause");
	return 0;
}

