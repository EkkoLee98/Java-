#include <iostream>
using namespace std;
void arr(int *a, int n);
void insert(int *a, int num);
int n = 4;
void main()
{
	int *a, num, j, k, b[4] = { 5,10,15,30 };
	a = &b[0];
	cout << "����õ�����Ϊ��\n";
	for (j = 0; j<n; ++j)
		cout<< *(a + j)<<" ";
	cout << "\n������Ҫ���������";
	cin >> num;
	cout << "����num�������Ϊ��\n";
	insert(a, num);
	system("pause");
}
void arr(int *a, int n)
{
	int k, j, h;
	for (k = 0; k<4; ++k)
		for (j = 0; j<n - k - 1; ++j)
			if (*(a + 1 + j)<*(a + j)) {
				h = *(a + 1 + j);
				*(a + 1 + j) = *(a + j);
				*(a + j) = h;
			}
}
void insert(int *a, int num)
{
	void arr(int *a, int n);
	int j, k;
	*(a + n) = num;
	arr(a, n + 1);
	for (j = 0; j < (n + 1); ++j)
		cout << *(a + j)<<" ";
}