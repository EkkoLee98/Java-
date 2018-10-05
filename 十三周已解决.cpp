#include <iostream>
using namespace std;
int func1(int a, int b);
int c, a = 4;
int main()
{
	int b = 2, p = 0;
	c = 1;
	p = func1(b,a);
	cout << "a = " << a << ", b = " << b << ", c = " << c << ", p = " << p;
	system("pause");
	return 0;
}
int func1(int a, int b)
{
	c = a*b;
	a = b - 3;
	b++;
	return (a + b + 1);
}