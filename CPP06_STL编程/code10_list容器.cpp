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
* STL中的链表是一个双向循环链表
* 总结：STL中**List和vector是两个最常被使用的容器**，各有优缺点
**功能描述：**
* 创建list容器
**函数原型：**
* list<T> lst;                             //list采用采用模板类实现,对象的默认构造形式：
* list(beg,end);                          //构造函数将[beg, end)区间中的元素拷贝给本身。
* list(n,elem);                          //构造函数将n个elem拷贝给本身。
* list(const list &lst);                //拷贝构造函数。
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


//赋值和交换
/*
#### 3.7.3 list 赋值和交换
**功能描述：**
* 给list容器进行赋值，以及交换list容器
**函数原型：**
* assign(beg, end);                    //将[beg, end)区间中的数据拷贝赋值给本身。
* assign(n, elem);                    //将n个elem拷贝赋值给本身。
* list& operator=(const list &lst);  //重载等号操作符
* swap(lst);                        //将lst与本身的元素互换。
*/
void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	//赋值
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

//交换
void test03()
{

	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int>L2;
	L2.assign(10, 100);

	cout << "交换前： " << endl;
	printList(L1);
	printList(L2);

	cout << endl;

	L1.swap(L2);

	cout << "交换后： " << endl;
	printList(L1);
	printList(L2);
}


//插入和删除
void test04()
{
	list<int> L;
	//尾插
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	//头插
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);

	printList(L);

	//尾删
	L.pop_back();
	printList(L);

	//头删
	L.pop_front();
	printList(L);

	//插入
	list<int>::iterator it = L.begin();
	L.insert(++it, 1000);
	printList(L);

	//删除
	it = L.begin();
	L.erase(++it);
	printList(L);

	//移除
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	printList(L);
	L.remove(10000);
	printList(L);

	//清空
	L.clear();
	printList(L);
}

//数据存取
void test05()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);


	//cout << L1.at(0) << endl;//错误 不支持at访问数据
	//cout << L1[0] << endl; //错误  不支持[]方式访问数据
	cout << "第一个元素为： " << L1.front() << endl;
	cout << "最后一个元素为： " << L1.back() << endl;

	//list容器的迭代器是双向迭代器，不支持随机访问
	list<int>::iterator it = L1.begin();
	//it = it + 1;//错误，不可以跳跃访问，即使是+1
}



//大小操作
void test040()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	if (L1.empty())
	{
		cout << "L1为空" << endl;
	}
	else
	{
		cout << "L1不为空" << endl;
		cout << "L1的大小为： " << L1.size() << endl;
	}

	//重新指定大小
	L1.resize(10);
	printList(L1);

	L1.resize(2);
	printList(L1);
}


bool myCompare(int val1, int val2)
{
	return val1 > val2;
}

//反转和排序
void test050()
{
	list<int> L;
	L.push_back(90);
	L.push_back(30);
	L.push_back(20);
	L.push_back(70);
	printList(L);

	//反转容器的元素
	L.reverse();
	printList(L);

	//排序
	L.sort(); //默认的排序规则 从小到大
	printList(L);

	L.sort(myCompare); //指定规则，从大到小
	printList(L);
}



int main() {
	test01();
	system("pause");
	return 0;
}