#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, area;
	double triangle_area(double a, double b, double c);
	cout << "�����������ε����߳���" << endl;
	cin >> a >> b >> c;
	area = triangle_area(a, b, c);
	if ((a + b <= c) || (a + c <= b) || (b + c <= a))
		cout << "�ⲻ��������";
	else
		cout << "�����ε����Ϊ" << area << endl;

	system("pause");
	return 0;
}
double triangle_area(double a, double b, double c)
{

	double s, p;
	p = (a + b + c) / 2.0;
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	return s;
}