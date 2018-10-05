#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	a = 10;
	b = 10;
	c = (a, b);
	cout << "a+b=" << c << endl;
	return 0;
}
int add(int x, int y)
{
	int z;
	z = x + y;
	system("pause");
	return(z);
}