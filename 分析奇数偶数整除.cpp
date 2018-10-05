#include <iostream>
using namespace std;
int main()
{
	int n, b, c;
	cin >> n;
	cout << "Enter n:" << n << '\n';
	b = n % 2;
	c = n % 3;
	if (b == 0)
	{
		if (c == 0)
			cout << "整数" << n << "是偶数," << "能被3整除" << endl;
		else
			cout << "整数" << n << "是偶数," << "不能被3整除" << endl;
	}
	else
	{
		if (c == 0)
			cout << "整数" << n << "是奇数," << "能被3整除" << endl;
		else
			cout << "整数" << n << "是奇数," << "不能被3整除" << endl;
	}
	system("pause");
	return 0;
}

