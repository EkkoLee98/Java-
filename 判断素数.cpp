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

		cout << i << "������" << endl;
	else
		cout << i << "��������" << endl;


	system("pause");
	return 0;
}