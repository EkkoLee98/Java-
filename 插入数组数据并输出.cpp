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
		if (n<a[i]) //�ҵ�����λ��
			break;
	}
	for (int j = 4; j>i; j--) //iλ��������ݺ���һλ
		a[j] = a[j - 1];
	a[i] = n; //�������
	for (i = 0; i<5; i++) //�������
		cout << a[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}