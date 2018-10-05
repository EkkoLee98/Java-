#include <iostream>
using namespace std;
int getMin(int m, int n)//最小公倍数
{
	int i, j;
	i = m;
	if (n>i)
		i = n;
	for (j = i;; j++)
	{
		if (j%m == 0 && j%n == 0)
			break;
	}
	return j;
}
int getMax(int m, int n)//最大公约数
{
	int i, j;
	i = m;
	if (n<i)
		i = n;
	for (j = i;; j--)
	{
		if (m%j == 0 && n%j == 0)
			break;
	}
	return j;
}

int main()
{
	int m, n;
	cin >> m >> n;
	cout << m << "和" << n << "的最大公约数为:" << getMax(m, n) << endl;
	cout << m << "和" << n << "的最小公倍数为:" << getMin(m, n) << endl;
	system("pause");
	

}