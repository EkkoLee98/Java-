#include <iostream>
using namespace std;
int main()
{
	void swap(int *, int *);//这里的p1 p2可有可无
	int *pointer_1, *pointer_2, a, b;
	cin >> a >> b;
	pointer_1 = &a;
	pointer_2 = &b;
	if (a < b)swap(pointer_1, pointer_2);
	cout << "max=" << a <<" "<< "min" << b << endl;
	system("pause");
	return 0;
}
void swap(int *p1, int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
//一下是三种不能实现的例子
void swap(int *p1, int *p2)
{
	int *temp;
	*temp = *p1;
	*p1 = *p2;
	*p2 = *temp;
}
void swap(int x, int y)
{
	int temp;
	temp = x;  x = y;   y = temp;
}
(4)
void swap(int *p1, int *p2)
{
	int *p;
	p = p1;
	p1 = p2;
	p2 = p;
}



