#include <iostream>
using namespace std;
int main()
{
	int n, b, c;
	cin >> n;
	cout << "Enter n:" << n << '\n';
	b = n % 2;
	c = n % 3;
	if (b == 0)
	{
		if (c == 0)
			cout << "����" << n << "��ż��," << "�ܱ�3����" << endl;
		else
			cout << "����" << n << "��ż��," << "���ܱ�3����" << endl;
	}
	else
	{
		if (c == 0)
			cout << "����" << n << "������," << "�ܱ�3����" << endl;
		else
			cout << "����" << n << "������," << "���ܱ�3����" << endl;
	}
	system("pause");
	return 0;
}

