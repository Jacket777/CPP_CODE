//#include<iostream>
//#include<string>
//using namespace std;
//
///// <summary>
///// 继承中的对象模型
///// </summary>
//class Base{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C; //私有成员只是被隐藏了，但是还是会继承下去
//};
//
////公共继承
//class Son :public Base
//{
//public:
//	int m_D;
//};
//
////利用开发人员命令提示工具查看对象模型
////到具体目录中查看 cl /d1 reportSingleClassLayout类名 文件名
//
//void test01(){
//	//在父类中所有非静态成员属性都会被子类继承下去，
//	//父类中私有成员属性是被编译器给隐藏了，因此访问不到，但是还是会继承下去
//	//输出16---一个整型4个字节  一共4个元素，所以是16个字节
//	cout << "sizeof Son = " << sizeof(Son) << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}