#include <iostream>                
using namespace std;
int main()
{
	int a[5] = { 5,10,15,30 };
	cout << "int型数组各元素的地址:\n";
	for (int i = 0; i<4; i++)
		cout << &a[i]<<" ";
	cout << "\n";
	for (int i = 0; i<4; i++)
		cout << a + i<<" ";
	cout << "\n";
	int * pa = a;
	for (int i = 0; i<4; i++)
		cout << pa++<<" ";//也可以是pa+i
	cout << "\n\n";
	cout << "反序输出数组元素:\n";
	for (pa = a + 3; pa >= a; pa--)
		cout << *pa;
	cout << "\n\n";
	system("pause");
	return 0;
}