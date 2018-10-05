#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int s = 1;
	float n = 1, pi = 0, t = 1;
	while (fabs(t) > 1 / 1.999*1e-3)
	{
		pi = pi + t;
		n = n + 2;
		s = -s;
		t = s / n;
	}
	pi = pi * 4;
	cout << "pi=" << pi << endl;
	system("pause");
	return 0;
}