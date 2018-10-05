#include <iostream>
using namespace std;
int main()
{
	int gcd(int x, int y);
		int a, b, t;
		cin >> a >> b;
		if (a < b)
		{
			t = a;
			a = b;
			b = t;
		}
		cout << "最大公约数" << gcd(a, b) << endl;
		system("pause");
		return 0;
}
int gcd(int x, int y)
{
	int i;
	i = x%y;
	while (i != 0)
	{
		x = y;
		y = i;
		i = x%y;
	}
	return y;
}
