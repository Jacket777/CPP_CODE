#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//ѧ���Ľṹ��
struct StudentA {
	string name;
	int score;
};

struct TeacherA{
	string name;
	struct StudentA sArray[5];
};


//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct TeacherA tArray[], int len) {
	string nameSeed = "ABCDE";
	//����ʦ��ֵ
	for (int i = 0; i < len; i++) {
		tArray[i].name = "Teacher_";
		tArray[i].name += nameSeed[i];
		//ͨ��ѭ����ÿ����ʦ��ֵ
		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].name = "Student_";
			tArray[i].sArray[j].name += nameSeed[j];
			int score = rand() % 61 + 40;
			tArray[i].sArray[j].score = score;
		}

	}

}



//��ӡ������Ϣ
void printInfo(struct TeacherA tArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << " teacher name: " << tArray[i].name << endl;
		for (int j = 0; j < 5; j++) {
			cout << " \tstudent name: " << tArray[i].sArray[j].name << " score: "<< tArray[i].sArray[j].score <<endl;
		}
	}
}



int main17() {
	//�������
	srand((unsigned int)time(NULL));
	//1.����3����ʦ������
	struct TeacherA tArray[3];
	//2.ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	cout << " len = " << len << endl;
	allocateSpace(tArray, len);
	printInfo(tArray, len);


	system("pause");
	return 0;
}

