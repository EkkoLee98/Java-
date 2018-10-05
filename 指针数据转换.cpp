#include <iostream>
using namespace std;
int main()
{
	char ch1 = 'I', ch2 = 'Q';
	int n1 = 1, n2 = 6;
	double d1 = 1.25, d2 = 20.5;
	//定义两个指针变量pch_1、pch_2分别指向ch1、ch2
	char *pch_1, *pch_2;
	
	pch_1 = &ch1;
	pch_2 = &ch2;

		//定义两个指针变量pn_1、pn_2分别指向n1、n2
	int *pn_1, *pn_2;
	
	pn_1 = &n1;
	pn_2 = &n2;
		//定义两个指针变量pd_1、pd_2分别指向d1、d2
	double *pd_1, *pd_2;
	
	pd_1 = &d1;
	pd_2 = &d2;

		//分别输出上述ch1、ch2、n1、n2、d1、d2六个变量的地址(即六个指针变量的值)
	cout <<static_cast<void*>(pch_1) << " " << static_cast<void*>(pch_2) << endl;
	cout << *pn_1<<" "<< *pn_2 << endl;
	cout << *pd_1 << " " << *pd_2 << endl;
		//用间接存取方式输出ch1、ch2、n1、n2、d1、d2六个变量的值
	cout << *pch_1 << " " << *pch_2 << endl;
	cout << *pn_1 << " " << *pn_2 << endl;
	cout << *pd_1 << " " << *pd_2 << endl;
		//用间接存取方式修改六个变量的值：char型大写变小写，int型减5，double型加10.0
	
	*pch_1 += 32; *pch_2 += 32; *pn_1 -= 5; *pn_2 -= 5; *pd_1 += 10.0; *pd_2 += 10.0;
		//再次用间接存取方式输出ch1、ch2、n1、n2、d1、d2六个变量的新值
	cout << *pch_1 << " " << *pch_2 << endl;
	cout << *pn_1 << " " << *pn_2 << endl;
	cout << *pd_1 << " " << *pd_2 << endl;
	system("pause");
		return 0;
}
