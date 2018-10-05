//file1.cpp
#include <iostream>
using namespace std;
int a;
int main()
{
	int power(int n);
	int b = 3, c, d, m;
	cout << "enter the number a and its power m:\n";
	cin >> a >> m;
	c = a*b;
	cout << "a*b = " << c << endl;
	d = power(m);
	cout << "a**m = " << d << endl;
	system("pause");
	return 0;
}
