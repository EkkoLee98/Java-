#include <iostream>
#include <iomanip>
using  namespace std;
int main()
{
	double max(float x, float y);  //��������
	float a, b;

	cout << "please enter two float numbers:";
	cin >> a >> b;

	cout << "max is " << max(a, b) << endl;
	system("pause");
}
double max(float x, float y) // ��������Ϊint,�뷵��ֵ���Ͳ�һ��
{
	float z;    // ������ʱ����
	z = x>y ? x : y;// ��x��y�д��߸���z
	return z;// ����ֵ����Ϊfloat
}

#include <iostream>
#include <iomanip>
using  namespace std;
int main()
{
	int max(float x, float y);  //��������
	float a, b;

	cout << "please enter two float numbers:";
	cin >> a >> b;

	cout << "max is " << max(a, b) << endl;
	system("pause");
}
int max(float x, float y) // ��������Ϊint,�뷵��ֵ���Ͳ�һ��                  Ĭ��Ϊ����
{
	float z;    // ������ʱ����
	z = x>y ? x : y;// ��x��y�д��߸���z
	return z;// ����ֵ����Ϊfloat
}

#include <iostream>
#include <iomanip>
using  namespace std;
int main()
{
	int max(float x, float y);  //��������
	float a, b;
	int c;
	cout << "please enter two float numbers:";
	cin >> a >> b;
	c = max(a, b);
	cout << "max is " << c << endl;
	system("pause");
	int	max(float x, float y) // ��������Ϊint,�뷵��ֵ���Ͳ�һ��                �μ�ԭ��
{
	float z;    // ������ʱ����
	z = x>y ? x : y;// ��x��y�д��߸���z
	return z;// ����ֵ����Ϊfloat
}