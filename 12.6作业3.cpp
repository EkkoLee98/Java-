#include <iostream>
#include <string>
using  namespace std;
int main()
{
	char str1[31], str2[31];
	cout << "������str1<���Ȳ�����30>:" << endl;
	gets_s(str1);
	cout << "������str2<���Ȳ�����30>:" << endl;
	gets_s(str2);
	cout << "strl�ĳ���:" << strlen(str1) <<" "<< "str2�ĳ���:" << strlen(str2) << endl;
	if (strcmp(str1, str2) > 0)
		cout << "�����ַ����Ľϴ�ֵΪ:" << str1 << endl;
	else
		cout << "�����ַ����Ľϴ�ֵΪ:" << str2 << endl;
	strcat_s(str1, str2);
	cout << "���Ӻ���ַ���: " << str1 << endl;
	system("pause");
	return 0;
}