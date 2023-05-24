//#include<vector>
//#include<algorithm>  //标准算法的头文件
//#include<iostream>
//using namespace std;
//
//void MyPrint(int val) {
//	cout << val << endl;
//}
//
//void test01() {
//	vector<int>v;
//	v.push_back(10);    
//	v.push_back(20);    
//	v.push_back(30);    
//	v.push_back(40);
//
//	//每一个容器都有自己的迭代器，迭代器是用来遍历容器中的元素    
//	//v.begin()返回迭代器，这个迭代器指向容器中第一个数据    
//	//v.end()返回迭代器，这个迭代器指向容器元素的后一个元素的下一个位置    
//	//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
//	//vector<int>::iterator pBegin = v.begin();
//	//vector<int>::iterator pEnd = v.end();
//	//第一种遍历方式
//	//while (pBegin != pEnd) {
//	//	cout << *pBegin << endl;
//	//	pBegin++;
//	//}
//
//
//	//第二种遍历方式
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//	//	cout << *it << endl;
//	//}
//
//	//第三种遍历方式----利用STL中提供的遍历算法for_each--必须先包含算法的头文件
//	//利用回调技术
//	for_each(v.begin(), v.end(), MyPrint);
//}
//
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}