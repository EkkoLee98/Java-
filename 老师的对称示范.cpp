#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i, j;
	for (i = 1; i <=5; i++)
	{
		for (j = 1; j <= i; j++)
			cout << setw(2) << "*";
		cout << endl;
	}
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 5-i; j++)
			cout << setw(2) << "*";
		cout << endl;
	}
	system("pause");
	return 0;
}
	