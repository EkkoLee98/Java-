/*#include <stdio.h>
#include <iostream>
#include <iomanip>
using  namespace std;
int main()
{
	int age(int n);
	cout << "NO.5,age:" << age(5) << endl; //输出第5人的年龄
	system("pause");
	return 0;
}
int age(int n)  //定义递归函数    
{
	int c;
	if (n == 1)      // 如果n等于1
		c = 10;     // 年龄为10
	else          // 如果n不等于1     
		c = age(n - 1) + 2;// 年龄是前一人的年龄加2
	return(c);     // 返回年龄
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