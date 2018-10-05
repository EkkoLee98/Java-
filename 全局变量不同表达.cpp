#include <iostream>
using namespace std;
int main()
{
	int max(int x, int y);
	extern int a, b;
	cout << max(a, b) << endl;
	system("pause");
	return 0;
}
int a = 15, b = 7;
int max(int x, int y)
{
	int z;
	z = x > y ? x : y;
	return z;
}



#include <iostream>
using namespace std;
int a = 15, b = 7;
int main()
{
	int max(int x, int y);
	cout << max(a, b) << endl;
	system("pause");
	return 0;
}
int max(int x, int y)
{
	int z;
	z = x > y ? x : y;
	return z;
}

