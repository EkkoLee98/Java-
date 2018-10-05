#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int f[20] = { 1,2,3 };
	for (int i = 3; i < 20; i++)
		f[i] = f[i - 1] + f[i - 2] + f[i - 3];
	for (int i = 19; i >= 0; i--)
	{

		if ((i+1) % 5 == 0)
			cout << endl;
		cout <<setw(12)<< f[i];
		
			
		
	}
	system("pause");
	return 0;

}