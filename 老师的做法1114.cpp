#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	int max(int a, int b, int c);
	int min(int a, int b, int c);
	cout << "�������" << max(x, y, z) << endl;
	cout << "��С����" << min(x, y, z) << endl;
	system("pause");
	return 0;
}
int max(int a, int b, int c)
{
	int m;
	if (a > b)
		m = a;
	else m = b;
	if (c > m)
		m = c;
	return m;
}
int min(int a, int b, int c)
{
	int m;
	m = a;
	if (m > b) m = b;
	if (m > c) m = c;
	return m;
}