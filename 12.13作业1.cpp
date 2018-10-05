#include <iostream>
using namespace std;
void arr(int *a, int n);
void insert(int *a, int num);
int n = 4;
int main()
{
	int *a, num, j, k, b[5] = {5,10,15,30};
	a=&b[0];
	cout << "排序好的数据为：\n";
	for (j = 0; j<n; ++j)
		cout << *(a + j) << " ";
	cout << "\n请输入要插入的数：";
	cin >> num;
	cout << "插入num后的数据为：\n";
	insert(a, num);
	system("pause");
	return 0;
}
void arr(int *a, int n)
{
	int i, j, k, t;
	for (i=0; i<n; i++)
	{
		k = i;
		for (j =i+1; j<n; j++)
			if (*(a + j) < *(a + k))
				k = j;
t = *(a+k); *(a+k) = *(a+i); *(a+i) = t;
	}
}
void insert(int *a, int num)
{
	void arr(int *a, int n);
	int j, k;
	*(a + n) = num;
	arr(a, n + 1);
	for (j = 0; j < (n + 1); ++j)
		cout << *(a + j) << " ";
}
