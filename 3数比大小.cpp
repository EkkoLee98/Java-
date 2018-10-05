#include <iostream>
using namespace std;
int main()
{
	int x, y, z, m;
	cin >> x >> y >> z;
	if (x > y)
		m = x;
	else
		m = y;
	if (m > z)
		cout << m << endl;
	else
		cout << z << endl;
	system("pause");
	return 0;
}