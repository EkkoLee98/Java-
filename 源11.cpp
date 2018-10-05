#include <iostream>
using namespace std;
int main()
{   int add(int x, int y);
	int a, b, c;
	a = 10;
	b = 110;
	c=a+b;
	cout << "a+b=" << c << endl;
	system("pause");
	return 0;
}
int add(int x,int y)
{
	int z;
	z = x + y;
	return (z);
}

