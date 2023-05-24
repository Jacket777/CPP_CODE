#include "workerManager.h"
#include"boss.h"
#include"employee.h"
#include"worker.h"
#include"manager.h"

WorkerManager::WorkerManager() {
	//��ʼ������
	this->m_EmpNum = 0;
	//��ʼ������ָ��
	this->m_EmpArray = NULL;

}


void WorkerManager::Show_Menu() {
	cout << "********************************************" << endl;
	cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
	cout << "*************  0.�˳��������  *************" << endl;
	cout << "*************  1.����ְ����Ϣ  *************" << endl;
	cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "*************  3.ɾ����ְְ��  *************" << endl;
	cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5.����ְ����Ϣ  *************" << endl;
	cout << "*************  6.���ձ������  *************" << endl;
	cout << "*************  7.��������ĵ�  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;

}






//����ְ��
void WorkerManager::Add_Emp() {
	cout << "����������ְ��������: " << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0) {
		//�����¿ռ��С
		int newSize = this->m_EmpNum + addNum;
		//�����¿ռ�
		Worker** newSpace = new Worker * [newSize];
		//��ԭ�ռ������ݴ�ŵ��¿ռ���
		if (this->m_EmpArray != NULL) {
			for (int i = 0; i < this->m_EmpNum; i++) {
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//����������
		for (int i = 0; i < addNum; i++) {
			int id;
			string name;
			int dSelect;

			cout << "������� " << i + 1 << " ����ְ�����: " << endl;
			cin >> id;

			cout << "������� " << i + 1 << " ����ְ������: " << endl;
			cin >> name;

			cout << "��ѡ���ְ���ĸ�λ: " << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dSelect;
			Worker* worker = NULL;
			switch (dSelect) {
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			newSpace[this->m_EmpNum + i] = worker;
		}
		//�ͷ�ԭ�пռ�
		delete[]this->m_EmpArray;
		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;
		//�����µĸ���
		this->m_EmpNum = newSize;
		//��ʾ��Ϣ
		cout << "�ɹ���� " << addNum << "����ְ����" << endl;
		//���浽�ļ���
		this->save();
	}
	else {
		cout << "��������" << endl;
	}

	system("pause");
	system("cls");
}




void WorkerManager::exitSystem() {
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}



void WorkerManager::save() {
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->m_EmpNum; i++) {
		/*ofs << this->m_EmpArray[i]->m_Id << " " << this->m_EmpArray[i]->m_Name<<" "<<this->m_EmpArray[i]->m_DeptId<< endl;*/
		
		ofs << this->m_EmpArray[i]->m_Id << endl;
		ofs << this->m_EmpArray[i]->m_Name << endl;
		ofs << this->m_EmpArray[i]->m_DeptId << endl;
		ofs << "AAAAAAAA" << endl;
	}
	ofs.close(); //һ��Ҫ���ϣ�����д�����ݻ����쳣

}



WorkerManager::~WorkerManager() {
	//�ͷŶ����ռ�
	if (this->m_EmpArray != NULL) {
		delete[]this->m_EmpArray;
	}

}


