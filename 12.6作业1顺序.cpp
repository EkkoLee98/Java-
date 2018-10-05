#include <iostream>
using namespace std;
int main()
{
	int f[20] = { 1,2,3 }, a = 0;
	for (int i = 3; i < 20; i++)
		f[i] = f[i - 1] + f[i - 2] + f[i - 3];
	for (int i = 0; i<=19; i++)
	{
		if (a % 5 == 0)
			cout << endl;
		cout << " " << f[i];
		a++;
	}
	system("pause");
	return 0;

}