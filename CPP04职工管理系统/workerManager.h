#pragma once
#include<iostream>
#include<fstream>
using namespace std;
#include "worker.h"
#define FILENAME "empFile.txt"

class WorkerManager {
public:
	//���캯��
	WorkerManager();
	//չʾ�˵�
	void Show_Menu();
	//�˳�ϵͳ
	void exitSystem();
	//��������
	~WorkerManager();
	//����ְ��
	void Add_Emp();
	//�����ļ�
	void save();



	//��¼�ļ��������ĸ���
	int m_EmpNum;
	//Ա�������ָ��
	Worker** m_EmpArray; ///????
};