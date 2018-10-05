#include <iostream>
using namespace std;
int main()
{
	for (int i = 0; i <= 532; i++)
	{
		for (int j = 0; j <= 532; j++)
		{
			for (int k = 0; k <= 532; k++)
			{
				if (i*j*k + j*k*k == 532)
					cout << "x=" << i << " " << "y=" << j << " " << "z=" << k << endl;
			}
		}
	}
	system("pause");
	return 0;
}