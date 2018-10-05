#include <iostream>
using namespace std;
int main()
{
	float x, y, z, v; 
	x = 2.5;
    y = 4.7;
    int a,c;
    a = 7;
	c = (int)(x + y);
	z = a%3*c % 2 / 4;
	v = z + x;
	cout << "(int)(x+y)=" << c << endl;
	cout << "a%3*c % 2 / 4=" << z << endl;
	cout << "z + x=" << v << endl;
	system("pause");
	return 0;
}