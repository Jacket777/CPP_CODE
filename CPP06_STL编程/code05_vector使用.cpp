//#include <vector>
//#include<iostream>
//using namespace std;
//
//
////打印---v
//void printVector(vector<int>& v) {
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//
///*
//#### 3.2.2 vector构造函数
//**功能描述：**
//* 创建vector容器
//**函数原型：**
//* `vector<T> v; `               		     //采用模板实现类实现，默认构造函数
//* `vector(v.begin(), v.end());   `          //将v[begin(), end())区间中的元素拷贝给本身。
//* `vector(n, elem);`                       //构造函数将n个elem拷贝给本身。
//* `vector(const vector &vec);`            //拷贝构造函数。
//*/
//
////构造函数
//void test01()
//{
//	vector<int> v1; //无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	cout << "constructor 2" << endl;
//	vector<int> v2(v1.begin(), v1.end()); //将v[begin(), end())区间中的元素拷贝给本身。
//	printVector(v2);
//	cout << "constructor 3" << endl;
//	vector<int> v3(10, 100);  //构造函数将n个elem拷贝给本身。 10个100
//	printVector(v3);
//	cout << "constructor 4 拷贝构造函数" << endl;
//	vector<int> v4(v3);//拷贝构造函数。
//	printVector(v4);
//}
//
//
//
//
//
///*
//#### 3.2.3 vector赋值操作
//**功能描述：**
//* 给vector容器进行赋值
//**函数原型：**
//* `vector& operator=(const vector &vec);`//重载等号操作符
//* `assign(beg, end);`                   //将[beg, end)区间中的数据拷贝赋值给本身。
//* `assign(n, elem);`                   //将n个elem拷贝赋值给本身。
//*/
//
////赋值操作
//void test02()
//{
//	vector<int> v1; //无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	vector<int>v2;
//	cout << "------重载等号操作符----" << endl;
//	v2 = v1;
//	printVector(v2);
//	cout << "------将[beg, end)区间中的数据拷贝赋值给本身。----" << endl;
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//	cout << "------将n个elem拷贝赋值给本身----" << endl;
//	vector<int>v4;
//	v4.assign(10, 100);
//	printVector(v4);
//}
//
//
///*
//#### 3.2.4  vector容量和大小
//**功能描述：**
//* 对vector容器的容量和大小操作
//**函数原型：**
//* `empty(); `                            //判断容器是否为空
//* `capacity();`                      //容器的容量
//* `size();`                              //返回容器中元素的个数
//* `resize(int num);`             //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//  ​					      //如果容器变短，则末尾超出容器长度的元素被删除。
//* `resize(int num, elem);`  //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//  ​				              //如果容器变短，则末尾超出容器长度的元素被删除
//
//  总结：
//* 判断是否为空  --- empty
//* 返回元素个数  --- size
//* 返回容器容量  --- capacity
//* 重新指定大小  ---  resize
//*/
////容量和大小
//void test03(){
//	vector<int> v1;
//	for (int i = 0; i < 10; i++){
//		v1.push_back(i);
//	}
//	printVector(v1);
//	if (v1.empty()){
//		cout << "v1为空" << endl;
//	}else{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量 = " << v1.capacity() << endl;  //输出为13
//		cout << "v1的大小 = " << v1.size() << endl; //输出为10
//	}
//
//	//resize 重新指定大小 ，若指定的更大，默认用0填充新位置，可以利用重载版本替换默认填充
//	v1.resize(15, 1000);
//	printVector(v1);
//	//resize 重新指定大小 ，若指定的更小，超出部分元素被删除
//	v1.resize(5);
//	printVector(v1);
//}
//
//
//
///*
//#### 5 vector插入和删除
//**功能描述：**
//* 对vector容器进行插入、删除操作
//**函数原型：**
//* `push_back(ele);`                                                       //尾部插入元素ele
//* `pop_back();`                                                          //删除最后一个元素
//* `insert(const_iterator pos, ele);`                                    //迭代器指向位置pos插入元素ele
//* `insert(const_iterator pos, int count,ele);`                         //迭代器指向位置pos插入count个元素ele
//* `erase(const_iterator pos);`                                        //删除迭代器指向的元素
//* `erase(const_iterator start, const_iterator end);`                 //删除迭代器从start到end之间的元素
//* `clear();`                                                        //删除容器中所有元素
//*/
////vector插入和删除
//void test04()
//{
//	vector<int> v1;
//	//尾插
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	cout << "====尾插=====" << endl;
//	printVector(v1);
//	//尾删
//	v1.pop_back();
//	cout << "====尾删=====" << endl;
//	printVector(v1);
//	//插入--第一个参数是迭代器
//	cout << "====插入====" << endl;
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//	//插入--第一个参数是迭代器 插入2个100
//	v1.insert(v1.begin(), 2, 1000);
//	printVector(v1);
//
//	//删除---删除第一个数
//	cout << "====删除---删除第一个数====" << endl;
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	//清空
//	cout << "====清空====" << endl;
//	v1.erase(v1.begin(), v1.end());
//	v1.clear();
//	printVector(v1);
//}
//
//
////vector数据存取
///*
//**功能描述：**
//* 对vector中的数据的存取操作
//**函数原型：**
//* `at(int idx); `     //返回索引idx所指的数据
//* `operator[]; `       //返回索引idx所指的数据
//* `front(); `            //返回容器中第一个数据元素
//* `back();`              //返回容器中最后一个数据元素
//*/
//void test05()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++){
//		v1.push_back(i);}
//
//	for (int i = 0; i < v1.size(); i++){
//		cout << v1[i] << " ";} //利用[]访问
//	cout << endl;
//
//	for (int i = 0; i < v1.size(); i++){
//		cout << v1.at(i) << " ";}//利用[]访问
//	cout << endl;
//
//	cout << "v1的第一个元素为： " << v1.front() << endl;
//	cout << "v1的最后一个元素为： " << v1.back() << endl;
//}
//
//
///*
//#### 3.2.7 vector互换容器
//**功能描述：**
//* 实现两个容器内元素进行互换
//**函数原型：**
//* `swap(vec);`  // 将vec与本身的元素互换
//*/
////vector互换容器---基本使用
//void test06(){
//	vector<int>v1;
//	for (int i = 0; i < 10; i++){
//		v1.push_back(i);}
//	cout << "v1 content" << endl;
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--){
//		v2.push_back(i);}
//	cout << "v2 content" << endl;
//	printVector(v2);
//
//	//互换容器
//	cout << "互换后" << endl;
//	v1.swap(v2);
//	cout << "v1 content" << endl;
//	printVector(v1);
//	cout << "v2 content" << endl;
//	printVector(v2);
//}
//
////vector互换容器---实际用途
//void test07(){
//	vector<int> v;
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);}
//
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	cout << "=重新制定大小==" << endl;
//	v.resize(3);//重新制定大小
//	cout << "v的容量为：" << v.capacity() << endl; //容量没有改变
//	cout << "v的大小为：" << v.size() << endl;
//
//	cout << "==收缩内存==" << endl;
//	//收缩内存
//	//匿名对象 vector<int>(v) 利用拷贝函数  容量和大小为3   
//	vector<int>(v).swap(v); //匿名对象---特点，当前行执行完，编译器回收
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//}
//
//
///*
//#### 3.2.8 vector预留空间
//**功能描述：**
//* 减少vector在动态扩展容量时的扩展次数
//**函数原型：**
//* `reserve(int len);`//容器预留len个元素长度，预留位置不初始化，元素不可访问。
//*/
////vector预留空间
//void test08()
//{
//	vector<int> v;
//	//预留空间
//	//v.reserve(100000);
//	int num = 0;//统计开辟次数
//	int* p = NULL;
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);
//		if (p != &v[0]) {  //检查是否开辟内存
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << "num:" << num << endl;
//}
//
//
//
//
//int main() {
//	test08();
//	system("pause");
//	return 0;
//}