#include <iostream>
#include <iomanip>
using  namespace std;
int main()
{
	int a[2][3] = { { 1,2,3 },{ 4,5,6 } };
	int b[3][2], i, j;
	cout << "array a:\n";
	for (i = 0; i <= 1; i++)//行号循环
	{
		for (j = 0; j <= 2; j++)//行内列循环
		{
			cout << setw(5) << a[i][j];
			b[j][i] = a[i][j];//两个数组的行号与列号互换
		}
		cout << "\n";
	}
	cout << "array b:\n";
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 1; j++)
			cout << setw(5) << b[i][j];
		cout << "\n";
	}
	system("pause");
	return 0;
}
