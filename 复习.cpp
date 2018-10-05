/*#include <iostream>
using namespace std;
int main()
{
	void sort(int array[], int n);
	int a[10], i;
	cout << "请输入10个整数:" << endl;
	for (i = 0; i<10; i++)
		cin >> a[i];
	cout << endl;
	sort(a, 10);
	cout << "排序后的数组是:" << endl;
	for (i = 0; i<10; i++)
		cout << a[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
void sort(int array[], int n) {
	int i, j, t;
	for (i = 0; i<n; i++)
	{
		for (j =i+1; j<n; j++)
			if (array[j]>array[i])

			{
				t = array[j]; array[j] = array[i]; array[i] = t;
			}
	}
}*/
/*#include <iostream>
using namespace std;
int main()
{
	void sort(int *p, int n);
	int a[10], i;
	cout << "请输入10个整数:" << endl;
	for (i = 0; i<10; i++)
		cin >> a[i];
	cout << endl;
	sort(a, 10);
	cout << "排序后的数组是:" << endl;
	for (i = 0; i<10; i++)
		cout << a[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
void sort(int *p, int n) {
	int i, j, k, t;
	for (i = 0; i<n; i++)
	{
		k = i;
		for (j = i + 1; j<n; j++)
			if (*(p + j)<*(p + k))
				k = j;
		t = *(p + k); *(p + k) = *(p + i); *(p + i) = t;
	}
}*/
/*#include <iostream>
using namespace std;
void arr(int *a, int n);
void insert(int *a, int num);
int n = 4;
int main()
{
	int *a, num, j, k, b[5] = { 5,10,15,30 };
	a = &b[0];
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
	for (i = 0; i<n; i++)
	{
		k = i;
		for (j = i + 1; j<n; j++)
			if (*(a + j) < *(a + k))
				k = j;
		t = *(a + k); *(a + k) = *(a + i); *(a + i) = t;
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
}*/
/*#include<iostream>
using namespace std;
int maxvalue(int* arr, int length);
int minvalue(int* arr, int length);
int main()
{
	int a[10], max, min;
	for (int i = 0; i<10; i++)
		cin >> a[i];
	max = maxvalue(a, 10);
	min = minvalue(a, 10);

	cout << max << endl;
	cout << min << endl;
	system("pause");
	return 0;
}
int maxvalue(int* arr, int length) {
	int max = arr[0];
	for (int i = 1; i<length; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int minvalue(int* arr, int length) {
	int min = arr[0];
	for (int i = 1; i<length; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}*/
/*#include <iostream>
using namespace std;
int main()
{
	int x, sum1, sum2;
	int sum_2(int n);
	int sum_1(int n);
	cin >> x;
	sum1 = sum_1(x);
	sum2 = sum_2(x);
	cout << sum1 << endl;
	cout << sum2 << endl;
	system("pause");
	return 0;
}

int sum_1(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i*i;
	}
	return sum;
}
int sum_2(int n)
{
	int value;
	if (n == 0)
		value = 0;
	else
	{
		value = sum_2(n - 1) + n*n;

		return value;
	}
}*/