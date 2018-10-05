#include <iostream>
#include <iomanip>
using  namespace std;
int  main()
{
	long fac(int n);
	int n;
	long y;
	cout << "input an integer number:";
	cin >> n;
	y = fac(n);
	cout << n << "!=" << y;
	system("pause");
	return 0;
}
long fac(int n)
{
	long f;
	if (n<0)
		cout << "n<0,data error!";
	else if (n == 0 || n == 1)
		f = 1;
	else  f = fac(n - 1)*n;
	return(f);
}
