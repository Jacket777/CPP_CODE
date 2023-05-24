#include <list>
#include<iostream>
#include<string>
using namespace std;

void printList(const list<int>& L) {

	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}


/*
* STL�е�������һ��˫��ѭ������
* �ܽ᣺STL��**List��vector���������ʹ�õ�����**��������ȱ��
**����������**
* ����list����
**����ԭ�ͣ�**
* list<T> lst;                             //list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
* list(beg,end);                          //���캯����[beg, end)�����е�Ԫ�ؿ���������
* list(n,elem);                          //���캯����n��elem����������
* list(const list &lst);                //�������캯����
*/

void test11()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);
	list<int>L2(L1.begin(), L1.end());
	printList(L2);
	list<int>L3(L2);
	printList(L3);
	list<int>L4(10, 1000);
	printList(L4);
}


//��ֵ�ͽ���
/*
#### 3.7.3 list ��ֵ�ͽ���
**����������**
* ��list�������и�ֵ���Լ�����list����
**����ԭ�ͣ�**
* assign(beg, end);                    //��[beg, end)�����е����ݿ�����ֵ������
* assign(n, elem);                    //��n��elem������ֵ������
* list& operator=(const list &lst);  //���صȺŲ�����
* swap(lst);                        //��lst�뱾���Ԫ�ػ�����
*/
void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	//��ֵ
	list<int>L2;
	L2 = L1;
	printList(L2);

	list<int>L3;
	L3.assign(L2.begin(), L2.end());
	printList(L3);

	list<int>L4;
	L4.assign(10, 100);
	printList(L4);

}

//����
void test03()
{

	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int>L2;
	L2.assign(10, 100);

	cout << "����ǰ�� " << endl;
	printList(L1);
	printList(L2);

	cout << endl;

	L1.swap(L2);

	cout << "������ " << endl;
	printList(L1);
	printList(L2);
}


//�����ɾ��
void test04()
{
	list<int> L;
	//β��
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	//ͷ��
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);

	printList(L);

	//βɾ
	L.pop_back();
	printList(L);

	//ͷɾ
	L.pop_front();
	printList(L);

	//����
	list<int>::iterator it = L.begin();
	L.insert(++it, 1000);
	printList(L);

	//ɾ��
	it = L.begin();
	L.erase(++it);
	printList(L);

	//�Ƴ�
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	printList(L);
	L.remove(10000);
	printList(L);

	//���
	L.clear();
	printList(L);
}

//���ݴ�ȡ
void test05()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);


	//cout << L1.at(0) << endl;//���� ��֧��at��������
	//cout << L1[0] << endl; //����  ��֧��[]��ʽ��������
	cout << "��һ��Ԫ��Ϊ�� " << L1.front() << endl;
	cout << "���һ��Ԫ��Ϊ�� " << L1.back() << endl;

	//list�����ĵ�������˫�����������֧���������
	list<int>::iterator it = L1.begin();
	//it = it + 1;//���󣬲�������Ծ���ʣ���ʹ��+1
}



//��С����
void test040()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	if (L1.empty())
	{
		cout << "L1Ϊ��" << endl;
	}
	else
	{
		cout << "L1��Ϊ��" << endl;
		cout << "L1�Ĵ�СΪ�� " << L1.size() << endl;
	}

	//����ָ����С
	L1.resize(10);
	printList(L1);

	L1.resize(2);
	printList(L1);
}


bool myCompare(int val1, int val2)
{
	return val1 > val2;
}

//��ת������
void test050()
{
	list<int> L;
	L.push_back(90);
	L.push_back(30);
	L.push_back(20);
	L.push_back(70);
	printList(L);

	//��ת������Ԫ��
	L.reverse();
	printList(L);

	//����
	L.sort(); //Ĭ�ϵ�������� ��С����
	printList(L);

	L.sort(myCompare); //ָ�����򣬴Ӵ�С
	printList(L);
}



int main() {
	test01();
	system("pause");
	return 0;
}