#include <iostream>               
using namespace std;
int main()
{
	int a[5] = { 5,10,15,30 };

	cout << "input n: ";
	int n = 0;
	cin >> n;
	int i;
	for (i = 0; i<4; i++)
	{
		if (n<a[i]) //找到插入位置
			break;
	}
	for (int j = 4; j>i; j--) //i位后面的数据后移一位
		a[j] = a[j - 1];
	a[i] = n; //插入该数
	for (i = 0; i<5; i++) //输出数组
		cout << a[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}