#include<iostream>
#include<conio.h>
using namespace std;
int max(int a, int b, int c);
int min(int a, int b, int c);
int main()
{
	int a, b, c;
	cout << "请输入三个整数a,b,c，它们之间以空格隔开：" << endl;
	cin >> a >> b >> c;
	cout << "三个整数中最大数为：" << max(a, b, c) << endl;
	cout << "三个整数中最小数为：" << min(a, b, c) << endl;
	system("pause");
	return 0;
}
int max(int a, int b, int c)
{
	if (b>a)a = b;
	if (c>a)a = c;
	return a;
}
int min(int a, int b, int c)
{
	if (b<a)a = b;
	if (c<a)a = c;
	return a;
}