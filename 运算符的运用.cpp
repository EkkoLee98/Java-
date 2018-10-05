#include <iostream>
using  namespace std;
int main()
{
	int x = 15, y = 5, z = 50;
	cout << "x=" << x << ",y=" << y << ",z=" << z << "\n";
	cout << "x>y? " << (x>y) << "\n";
	cout << "x<=y?" << (x <= y) << "\n";
	cout << "x+y<z?" << (x + y<z) << "\n";
	cout << "z-30>=x+y? " << (z - 30 >= x + y) << "\n";
	cout << "y==z-30>x?" << (y == z - 30>x) << "\n";
	system("pause");
	return 0;
}

