#include <iostream>
#include <string>
using  namespace std;
int main()
{
	char str1[31], str2[31], str[61];
	cout << "������str1<���Ȳ�����30>:" << endl;
	gets_s(str1);
	cout << "������str2<���Ȳ�����30>:" << endl;
	gets_s(str2);
	cout << "strl�ĳ���:" << strlen(str1) << "str2�ĳ���:" << strlen(str2) << endl;
	cout << "�����ַ����Ľϴ�ֵΪ��" << strcmp(str1, str2) >= 0 ? str1 : str2);
	strcpy(str, str1);
	strcat(str, str2);
	cout << "���Ӻ���ַ���" <<
		system("pause");
	return 0;
}