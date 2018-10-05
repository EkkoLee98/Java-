#include <iostream>
#include <string>
using  namespace std;
int main()
{
	char str1[31], str2[31];
	cout << "请输入str1<长度不超过30>:" << endl;
	gets_s(str1);
	cout << "请输入str2<长度不超过30>:" << endl;
	gets_s(str2);
	cout << "strl的长度:" << strlen(str1) <<" "<< "str2的长度:" << strlen(str2) << endl;
	if (strcmp(str1, str2) > 0)
		cout << "两个字符串的较大值为:" << str1 << endl;
	else
		cout << "两个字符串的较大值为:" << str2 << endl;
	strcat_s(str1, str2);
	cout << "连接后的字符串: " << str1 << endl;
	system("pause");
	return 0;
}