#include <iostream>
using namespace std;
int main()
{
	int gcd(int m, int n);
	int m, n;
	cin >> m >> n;
	cout << m << "��" << n << "�����Լ��Ϊ:" << gcd(m,n)<< endl;
		system("pause");
	return 0;
}
int gcd(int m, int n)//���Լ��
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