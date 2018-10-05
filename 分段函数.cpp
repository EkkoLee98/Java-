#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "ÇëÊäÈëx" << endl;
	cin >> x;
	if (x > -5 && x < 0)
		cout << "y=x" << endl;
	if (x == 0)
		cout << "y=x-1" << endl;
	if (x > 0 && x < 10)
		cout << "y=x+1" << endl;
	system("pause");
	return 0;
}