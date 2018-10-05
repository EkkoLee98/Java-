#include <iostream>
#include <iomanip>
using  namespace std;
int main()
{
	double max(float x, float y);  //函数声明
	float a, b;

	cout << "please enter two float numbers:";
	cin >> a >> b;

	cout << "max is " << max(a, b) << endl;
	system("pause");
}
double max(float x, float y) // 函数类型为int,与返回值类型不一致
{
	float z;    // 定义临时变量
	z = x>y ? x : y;// 把x和y中大者赋给z
	return z;// 返回值类型为float
}

#include <iostream>
#include <iomanip>
using  namespace std;
int main()
{
	int max(float x, float y);  //函数声明
	float a, b;

	cout << "please enter two float numbers:";
	cin >> a >> b;

	cout << "max is " << max(a, b) << endl;
	system("pause");
}
int max(float x, float y) // 函数类型为int,与返回值类型不一致                  默认为整形
{
	float z;    // 定义临时变量
	z = x>y ? x : y;// 把x和y中大者赋给z
	return z;// 返回值类型为float
}

#include <iostream>
#include <iomanip>
using  namespace std;
int main()
{
	int max(float x, float y);  //函数声明
	float a, b;
	int c;
	cout << "please enter two float numbers:";
	cin >> a >> b;
	c = max(a, b);
	cout << "max is " << c << endl;
	system("pause");
	int	max(float x, float y) // 函数类型为int,与返回值类型不一致                课件原版
{
	float z;    // 定义临时变量
	z = x>y ? x : y;// 把x和y中大者赋给z
	return z;// 返回值类型为float
}