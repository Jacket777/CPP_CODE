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
	cout << "请输入你的选择:" << endl;
	cin >> choice;
	switch (choice) {
	case 0: //退出系统
		wm.exitSystem();
		break;
	case 1://添加职工
		wm.Add_Emp();
		break;
	case 2://显示职工
		break;
	case 3://删除职工
		break;
	case 4://修改职工
		break;
	case 5://查找职工
		break;
	case 6://排序职工
		break;
	case 7://清空文件
		break;
	default:
		system("cls");
		break;
	}



	
	system("pause");
	return 0;
}