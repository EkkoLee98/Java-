#include <iostream>
using namespace std;
int main()
{
	float x, y,z;
	x = 3.5;
	y = 2.5;
	int a, b,c;
	a = 2;
	b = 3;
	c = 2 - (int)x % (int)y;
	z = (float)(a + b) / c;
	cout << "2 - (int)x % (int)y=" << c << endl;
	cout << " (float)(a + b) / c=" << z << endl;
	system("pause");
	return 0;
}


