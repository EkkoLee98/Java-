/*#include <stdio.h>
#include <iostream>
#include <iomanip>
using  namespace std;
int main()
{
	int age(int n);
	cout << "NO.5,age:" << age(5) << endl; //�����5�˵�����
	system("pause");
	return 0;
}
int age(int n)  //����ݹ麯��    
{
	int c;
	if (n == 1)      // ���n����1
		c = 10;     // ����Ϊ10
	else          // ���n������1     
		c = age(n - 1) + 2;// ������ǰһ�˵������2
	return(c);     // ��������
}*/




#include <stdio.h>
#include <iostream>
#include <iomanip>
using  namespace std;
int main()
{
	int sum_1(int n);
	int sum_2(int n);
	int x, sum1, sum2;
	cin >> x;

	cout << "sum1=" << sum_1(x);

	cout << "sum2=" << sum_2(x);

}
int sum_1(int n)
{
	int n, i, sum = 0;
	for (i = 1; i <= n; i++)
		sum += i*i;
	return sum;
}
int sum_2(int n)  
{
	int value;
	if (n == 0)      
		value = 0;     
	else             
		value = sum_2(n - 1) + n*n;
	return(value);     
}