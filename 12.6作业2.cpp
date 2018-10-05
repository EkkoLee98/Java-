#include <iostream>
using namespace std;
void array_input(int array[], int n); int square_sum(int array[], int n);
int main()
{
	int y, a[6];
	array_input(a, 6);
	y = square_sum(a, 6);
	cout << "数组中各元素的平方和:" <<y<< endl;
	system("pause");
	return 0;
}

void array_input(int array[], int n)
{
	cout << "请输入int型数组的6个元素："<< endl;
	for (int i = 0; i<n; i++)
	{
		cin >> array[i];
	}
}
int square_sum(int array[], int n)
{
	int sum = 0;
	int b;
	for (int i = 0; i<n; i++)
	{
		b = array[i] * array[i];
		sum += b;
	}

	return sum;
}