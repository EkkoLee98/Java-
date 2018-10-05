#include <iostream>
using namespace std;
int main()
{
	int year ,a=0;
	for (year = 2000; year <= 3000; ++year)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			if (a%10==0) cout << endl;
			cout << year << "  ";
			a++;
		}
	}
	
	system("pause");
	return 0;
}
