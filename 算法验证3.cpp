#include <iostream>
using namespace std;
int main()
{
	int x, y;
	x = 8;
	y = 'a' + x % 3 + 5 / 2 - '\24';
	cout << "'a'+x%3+5/2-'/24'=" << y << endl;
	system("pause");
	return 0;
}
