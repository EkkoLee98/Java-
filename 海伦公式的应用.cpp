#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double triangle_area(double a, double b, double c);
	double x, y, z, area;
	cout << "�����������ε����߳���" << endl;
	cin >> x >> y >> z;
	area = triangle_area(x, y, z);
	cout << "�����ε����Ϊ" <<area<< endl;
	system("pause");
	return 0;
}
double triangle_area(double a, double b, double c)
 {
	if ((a + b <= c) || (a + c <= b) || (b + c <= a))
	{
		cout << "�ⲻ��������";
	}
		double s, p;
		p = (a + b + c) / 2.0;
		s = sqrt(p*(p - a)*(p - b)*(p - c));
		return s;
	}