#include <iostream>
using namespace std;
int main()
{
	int a[4] = { 1,3,5,7 },i,j,t,num;
	
	for(j=0;j<4;j++)
		for(i=j+1;i<4;i++)
			if (a[i]<a[j])
			{
				t = a[i]; a[i] = a[j]; a[j] = t;
			}
	for (i = 0; i < 4; i++)
		cout << a[i]<<" ";
	cout << "请输入要插入的数num" << endl;
	cin >> num;
	for (i = 0; i<4; i++)
	{
		if (num<a[i]) //找到插入位置
			break;
	}
	for (int j = 4; j>i; j--) //i位后面的数据后移一位
		a[j] = a[j - 1];
	a[i] = num; //插入该数
	for (i = 0; i<5; i++) //输出数组
		cout << a[i] << " ";
	system("pause");
	return 0;
}