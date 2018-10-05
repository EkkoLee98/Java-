#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "ÇëÊäÈëx" << endl;
	cin >> x;
	if (x > -5 && x < 0)
		y = x;
	if (x == 0)
		y = x - 1;
	if (x > 0 && x < 10)
		y = x + 1;

	cout << y;
	system("pause");
	return 0;
}