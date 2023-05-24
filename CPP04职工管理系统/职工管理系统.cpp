#include<iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"



void test() {
	Worker* worker = NULL;
	worker = new Employee(1, "jack", 1);
	worker->showInfo();
	delete worker;

	worker = new Manager(2, "tom", 2);
	worker->showInfo();
	delete worker;

	worker = new Boss(3, "marray", 3);
	worker->showInfo();
	delete worker;
}



int main() {
	WorkerManager wm;
	wm.Show_Menu();
	int choice = 0;
	//test();
	cout << "���������ѡ��:" << endl;
	cin >> choice;
	switch (choice) {
	case 0: //�˳�ϵͳ
		wm.exitSystem();
		break;
	case 1://���ְ��
		wm.Add_Emp();
		break;
	case 2://��ʾְ��
		break;
	case 3://ɾ��ְ��
		break;
	case 4://�޸�ְ��
		break;
	case 5://����ְ��
		break;
	case 6://����ְ��
		break;
	case 7://����ļ�
		break;
	default:
		system("cls");
		break;
	}



	
	system("pause");
	return 0;
}