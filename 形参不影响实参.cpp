#include <iostream>
#include <iomanip>
using  namespace std;
int main()
{
	void swap(int p1, int p2);//函数声明
	int a, b;
	cout << "请输入整数a、b的值(用空格分开):";
	cin >> a >> b;
	cout << "调用swap函数前：a=" << a << ",b=" << b << endl;
	swap(a, b); //函数调用
	cout << "调用swap函数后：a=" << a << ",b=" << b;
	system("pause");
	return 0;
}
void swap(int p1, int p2)  //函数定义
{
	int temp;
	temp = p1;
	p1 = p2;
	p2 = temp;
}