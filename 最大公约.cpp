#include <iostream>
using namespace std;
int main()
{
	int m, n, k, i;
	cout << "��������������:";
	cin >> m >> n;
	if (m > n)
		k = n;
	else
		k = m;
	for ( i = k; ; i++)
	{
		if (i%m == 0 && i%n == 0)
			break;
	}
	
	

	cout << m << "��" << n << "��С��������:" << i << " " << m << "��" << n << "���Լ����:" << m*n / i << endl;
	system("pause");
	return 0;
}