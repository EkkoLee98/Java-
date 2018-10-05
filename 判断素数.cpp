#include <iostream>
using namespace std;
int main()
{
	int i, j;
	cin >> i;

	for (j = 2; j < i; j++)
	{
		if (i%j == 0)

			break;
	}
	if (j >= i)

		cout << i << "是素数" << endl;
	else
		cout << i << "不是素数" << endl;


	system("pause");
	return 0;
}