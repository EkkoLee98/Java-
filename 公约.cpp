#include <iostream>
using namespace std;
int getMin(int m, int n)//��С������
{
	int i, j;
	i = m;
	if (n>i)
		i = n;
	for (j = i;; j++)
	{
		if (j%m == 0 && j%n == 0)
			break;
	}
	return j;
}
int getMax(int m, int n)//���Լ��
{
	int i, j;
	i = m;
	if (n<i)
		i = n;
	for (j = i;; j--)
	{
		if (m%j == 0 && n%j == 0)
			break;
	}
	return j;
}

int main()
{
	int m, n;
	cin >> m >> n;
	cout << m << "��" << n << "�����Լ��Ϊ:" << getMax(m, n) << endl;
	cout << m << "��" << n << "����С������Ϊ:" << getMin(m, n) << endl;
	system("pause");
	

}