#include <iostream>
using namespace std;
int main()
{
	int m, n, k, i;
	cout << "请输入两个整数:";
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
	
	

	cout << m << "和" << n << "最小公倍数是:" << i << " " << m << "和" << n << "最大公约数是:" << m*n / i << endl;
	system("pause");
	return 0;
}