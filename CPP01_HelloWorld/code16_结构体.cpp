#include<iostream>
#include<string>
using namespace std;


//1.����ѧ���������ͣ�ѧ���������������� ����
//�Զ����������� -- һЩ���ͼ�����ϳ�һ������---
struct Student {
	string name;
	int age;
	int score;
}s3; //s˳�㴴���ṹ��

struct Teacher {
	int id; //��ʦ���
	string name; //��ʦ����
	int age;//����
	struct Student stu;
};

//��ӡѧ����Ϣ�ĺ���
void printStudent1601(struct Student s) {
	cout << " �Ӻ�����01: " << endl;
	s.age = 100;
	cout << s.name << s.age << s.score << endl;
}

//��ַ���� ��ʡ�ռ�
void printStudent1602(struct Student* p) {
	cout << " �Ӻ���02: " << endl;
	//�ı�
	p->age = 268;
	cout << p->name << p->age << p->score << endl;


}

///����const֮��һ�����޸ĵĲ����ͻᱨ����ֹ�����
void printStudent1603(const struct Student* p) {
	cout << " �Ӻ���02: " << endl;
	//�ı�
	//p->age = 268;  //����const֮��һ�����޸ĵĲ����ͻᱨ����ֹ�����
	cout << p->name << p->age << p->score << endl;


}





int main16() {
	//2. ͨ��ѧ�����ʹ�������ѧ��  --��������ʱ��struct�ؼ��ֿ���ʡ��
//2.1. struct Student s1
	struct Student s1;
	//��s1���Ը�ֵ
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


	cout << "=========2.�ṹ������=======================" << endl;

	//2. �ṹ������
	//�����ṹ������
	struct Student stuArray[3] = {
		{"Jack04", 17, 300},
		{"Jack05", 18, 400},
		{"Jack06", 19, 500}
	};
	//���ṹ�������е�Ԫ�ظ�ֵ
	stuArray[2].name = "tom";
	stuArray[2].age = 28;
	stuArray[2].score = 89;
	//�����ṹ������
	for (int i = 0; i < 3; i++) {
		cout << stuArray[i].name << stuArray[i].age << stuArray[i].score << endl;
	}

	cout << "=========3.�ṹ��ָ��=======================" << endl;
	Student s5 = { "Jack07", 18,300 };
	//ͨ��ָ��ָ��ṹ�����
	struct Student* p = &s5; //����ʡ��Struct
	//ͨ��ָ����ʽṹ�����������,��Ҫʹ��->����
	cout << "����" << p->name << " ����" << p->age << "����" << p->score << endl;

	cout << "=========4.�ṹ��Ƕ��=======================" << endl;
	Teacher t;
	t.id = 1000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 79;
	cout << "��ʦ������  "<<t.name << "��ʦ�ı��  "<<t.id<<" ��ʦ�����䣺"<<t.age<<
		"��ʦ������ѧ������  "<<t.stu.name <<" ѧ��������: "<<t.stu.age<<" ѧ���ķ����� "<<t.stu.score << endl;

	cout << "=========5.�ṹ����Ϊ�����Ĳ���=======================" << endl;
	struct Student s51 = { "Tom",20,690 };
	printStudent1601(s51);
	cout << "main ������" << endl;
	cout << s51.name << s51.age << s51.score << endl;
	cout << "main ������" << endl;
	printStudent1602(&s51);
	cout << s51.name << s51.age << s51.score << endl;


	cout << "=========6.�ṹ����constʹ�ó���=======================" << endl;
	struct Student s61 = { "Tom",20,690 };

	cout << "=========7.�ṹ���а���01=======================" << endl;




	system("pause");
	return 0;
}