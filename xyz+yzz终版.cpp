#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	for (x = 1; x <= 9; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			for (z = 1; z <= 9; z++)
			{
				if ((x * 100 + y * 10 + z) + (y * 100 + z * 10 + z) == 532)
					cout << "x=" << x <<" "<< "y=" << y<<" " << "z=" << z << endl;
			}
		}
	}
	system("pause");
	return 0;
}