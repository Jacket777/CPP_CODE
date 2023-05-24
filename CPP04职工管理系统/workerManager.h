#pragma once
#include<iostream>
#include<fstream>
using namespace std;
#include "worker.h"
#define FILENAME "empFile.txt"

class WorkerManager {
public:
	//构造函数
	WorkerManager();
	//展示菜单
	void Show_Menu();
	//退出系统
	void exitSystem();
	//析构函数
	~WorkerManager();
	//增加职工
	void Add_Emp();
	//保存文件
	void save();



	//记录文件中人数的个数
	int m_EmpNum;
	//员工数组的指针
	Worker** m_EmpArray; ///????
};