//#include<deque>
//#include<iostream>
//#include<string>
//#include <algorithm>
//using namespace std;
//
//
//void printDeque(const deque<int>& d)
//{
//	//迭代器是不可以修改的
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";  //容器中数据不可以被修改
//
//	}
//	cout << endl;
//}
//
//
///*
//#### 3.3.2 deque构造函数
//**功能描述：**
//* deque容器构造
//**函数原型：**
//* `deque<T>` deqT;                       //默认构造形式
//* `deque(beg, end);`                    //构造函数将[beg, end)区间中的元素拷贝给本身。
//* `deque(n, elem);`                    //构造函数将n个elem拷贝给本身。
//* `deque(const deque &deq);`          //拷贝构造函数
//* **总结：**deque容器和vector容器的构造方式几乎一致，灵活使用即可
//*/
//
//
////deque构造
//void test01() {
//
//	deque<int> d1; //无参构造函数
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	cout << "------3--------" << endl;
//	deque<int> d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	cout << "------3--------" << endl;
//	deque<int>d3(10, 100);
//	printDeque(d3);
//
//	cout << "------4--------" << endl;
//	deque<int>d4 = d3;
//	printDeque(d4);
//}
//
//
////赋值操作
///*
//**功能描述：**
//* 给deque容器进行赋值
//**函数原型：**
//* `deque& operator=(const deque &deq); `                         //重载等号操作符
//* `assign(beg, end);`                                           //将[beg, end)区间中的数据拷贝赋值给本身。
//* `assign(n, elem);`                                           //将n个elem拷贝赋值给本身。
//*/
//void test02()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	cout << "------------" << endl;
//	deque<int>d2;
//	cout << "-----1.-/重载等号操作符------" << endl;
//	d2 = d1;
//	printDeque(d2);
//	cout << "----2.-assign(beg, end)-------" << endl;
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//	cout << "----3.---assign(n, elem)-----" << endl;
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//}
//
//
//
///*
//#### 3.3.4 deque大小操作
//
//**功能描述：**
//
//* 对deque容器的大小进行操作
//**函数原型：**
//* deque.empty();                     //判断容器是否为空
//* deque.size();                     //返回容器中元素的个数
//* deque.resize(num);               //重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
//  ​			                      //如果容器变短，则末尾超出容器长度的元素被删除。
//* deque.resize(num, elem);       //重新指定容器的长度为num,若容器变长，则以elem值填充新位置。
//  ​                              //如果容器变短，则末尾超出容器长度的元素被删除。
//  它没有容量的概念，因为可以无限放入数据
//*/
////大小操作
//void test03(){
//	deque<int> d1;
//	for (int i = 0; i < 10; i++){
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	//判断容器是否为空
//	if (d1.empty()) {
//		cout << "d1为空!" << endl;
//	}else {
//		cout << "d1不为空!" << endl;
//		//统计大小
//		cout << "d1的大小为：" << d1.size() << endl;
//	}
//
//	//重新指定大小
//	d1.resize(15, 1);
//	cout << "-----指定大小比原来的大---------" << endl;
//	printDeque(d1);
//	cout << "-----指定大小比原来的小---------" << endl;
//	d1.resize(5);
//	printDeque(d1);
//}
//
//
//
////两端操作
///*
//两端插入操作：
//- push_back(elem);           //在容器尾部添加一个数据
//- push_front(elem);`        //在容器头部插入一个数据
//- pop_back();              //删除容器最后一个数据
//- pop_front();            //删除容器第一个数据
//*/
//void test04(){
//	deque<int> d;
//	//尾插
//	d.push_back(10);
//	d.push_back(20);
//	//头插
//	d.push_front(100);
//	d.push_front(200);
//
//	printDeque(d);
//
//	//尾删
//	d.pop_back();
//	//头删
//	d.pop_front();
//	printDeque(d);
//}
//
//
//
///*
//指定位置操作：
//* insert(pos,elem);        //在pos位置插入一个elem元素的拷贝，返回新数据的位置。
//* insert(pos,n,elem);   //在pos位置插入n个elem数据，无返回值。
//* insert(pos,beg,end);   //在pos位置插入[beg,end)区间的数据，无返回值。
//* clear();                        //清空容器的所有数据
//* erase(beg,end);            //删除[beg,end)区间的数据，返回下一个数据的位置。
//* erase(pos);                    //删除pos位置的数据，返回下一个数据的位置。
//*/
////插入
//void test05()
//{
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//	printDeque(d);
//
//	d.insert(d.begin(), 1000);
//	printDeque(d);
//
//	d.insert(d.begin(), 2, 10000);
//	printDeque(d);
//
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d.insert(d.begin(), d2.begin(), d2.end());
//	printDeque(d);
//
//}
//
////删除
///*
//总结：
//
//* 插入和删除提供的位置是迭代器！
//* 尾插   ---  push_back
//* 尾删   ---  pop_back
//* 头插   ---  push_front
//* 头删   ---  pop_front
//*/
//void test06()
//{
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//	printDeque(d);
//	//删除
//	deque<int>::iterator it = d.begin();
//	it++;
//	d.erase(it);
//	printDeque(d);
//
//
//	d.erase(d.begin());
//	printDeque(d);
//
//	d.erase(d.begin(), d.end());
//	d.clear();
//	printDeque(d);
//}
//
//
////数据存取
///*
//* #### 3.3.6 deque 数据存取
//**功能描述：*
//* 对deque 中的数据的存取操作
//**函数原型：**
//- at(int idx);       //返回索引idx所指的数据
//- operator[];       //返回索引idx所指的数据
//- front();         //返回容器中第一个数据元素
//- back();         //返回容器中最后一个数据元素
//*/
//void test07(){
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//
//	for (int i = 0; i < d.size(); i++) {
//		cout << d[i] << " ";}
//	cout << endl;
//
//
//	for (int i = 0; i < d.size(); i++) {
//		cout << d.at(i) << " ";}
//	cout << endl;
//	cout << "front:" << d.front() << endl;
//	cout << "back:" << d.back() << endl;
//
//}
//
//
////deque 排序
///*
//* **功能描述：**
//* 利用算法实现对deque容器进行排序
//**算法：**
//* sort(iterator beg, iterator end)  //对beg和end区间内元素进行排序
//*/
//void test08()
//{
//
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//
//	printDeque(d);
//	//排序 默认排序规则，从小到大 升序
//	//对于支持随机访问的迭代器容器，都可以利用sort算法直接对其进行排序
//	//vetctor容器也可以利用sort进行排序
//	sort(d.begin(), d.end());
//	printDeque(d);
//
//}
//
//int main() {
//	test08();
//	system("pause");
//	return 0;
//}