#include<iostream>
#include<conio.h>
using namespace std;
int max(int a, int b, int c);
int min(int a, int b, int c);
int main()
{
	int a, b, c;
	cout << "��������������a,b,c������֮���Կո������" << endl;
	cin >> a >> b >> c;
	cout << "���������������Ϊ��" << max(a, b, c) << endl;
	cout << "������������С��Ϊ��" << min(a, b, c) << endl;
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