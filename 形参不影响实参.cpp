#include <iostream>
#include <iomanip>
using  namespace std;
int main()
{
	void swap(int p1, int p2);//��������
	int a, b;
	cout << "����������a��b��ֵ(�ÿո�ֿ�):";
	cin >> a >> b;
	cout << "����swap����ǰ��a=" << a << ",b=" << b << endl;
	swap(a, b); //��������
	cout << "����swap������a=" << a << ",b=" << b;
	system("pause");
	return 0;
}
void swap(int p1, int p2)  //��������
{
	int temp;
	temp = p1;
	p1 = p2;
	p2 = temp;
}