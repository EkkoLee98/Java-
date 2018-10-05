#include <iostream>
using namespace std;
int main()
{
	int m, i;
	for (m = 100; m <= 200; m++)
	{
		bool prime = true;
		for (i = 2; i < m; i++)
		{
			if (m%i == 0)
				prime = false;
			break;
		}
		if (prime == true)

			cout << m << "是素数" << " ";
		else
			cout << m << "不是素数" << " ";
	

	}
	system("pause");
	return 0;
}