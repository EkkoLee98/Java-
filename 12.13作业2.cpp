#include <iostream>
using namespace std;
int main()
{
	double d[8] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8 };
	double a = 0;
	int i;
	double *p;
	p = &d[0];
	for (i = 7; i >= 4; i--)
		a += *(p + i);
	cout << a << endl;
	system("pause");
	return 0;
}
