#include <iostream>
using namespace std;
int main()
{
	char ch1 = 'I', ch2 = 'Q';
	int n1 = 1, n2 = 6;
	double d1 = 1.25, d2 = 20.5;
	//��������ָ�����pch_1��pch_2�ֱ�ָ��ch1��ch2
	char *pch_1, *pch_2;
	
	pch_1 = &ch1;
	pch_2 = &ch2;

		//��������ָ�����pn_1��pn_2�ֱ�ָ��n1��n2
	int *pn_1, *pn_2;
	
	pn_1 = &n1;
	pn_2 = &n2;
		//��������ָ�����pd_1��pd_2�ֱ�ָ��d1��d2
	double *pd_1, *pd_2;
	
	pd_1 = &d1;
	pd_2 = &d2;

		//�ֱ��������ch1��ch2��n1��n2��d1��d2���������ĵ�ַ(������ָ�������ֵ)
	cout <<static_cast<void*>(pch_1) << " " << static_cast<void*>(pch_2) << endl;
	cout << *pn_1<<" "<< *pn_2 << endl;
	cout << *pd_1 << " " << *pd_2 << endl;
		//�ü�Ӵ�ȡ��ʽ���ch1��ch2��n1��n2��d1��d2����������ֵ
	cout << *pch_1 << " " << *pch_2 << endl;
	cout << *pn_1 << " " << *pn_2 << endl;
	cout << *pd_1 << " " << *pd_2 << endl;
		//�ü�Ӵ�ȡ��ʽ�޸�����������ֵ��char�ʹ�д��Сд��int�ͼ�5��double�ͼ�10.0
	
	*pch_1 += 32; *pch_2 += 32; *pn_1 -= 5; *pn_2 -= 5; *pd_1 += 10.0; *pd_2 += 10.0;
		//�ٴ��ü�Ӵ�ȡ��ʽ���ch1��ch2��n1��n2��d1��d2������������ֵ
	cout << *pch_1 << " " << *pch_2 << endl;
	cout << *pn_1 << " " << *pn_2 << endl;
	cout << *pd_1 << " " << *pd_2 << endl;
	system("pause");
		return 0;
}
