#include <iostream>
#include <iomanip>
using namespace std;
struct Date
{
	int year;
	int month;
	int day;
};
typedef struct
{
	char name[10];
	char sex;
	struct Date brithday;
	char ID[19];
	char email[60];
}Person;
int main()
{
	Person me;
	cout << "请输入个人信息(姓名、性别('m'或'f')、出生年月日、身份证号、电子邮件)" << endl;
	cin >> me.name >> me.sex >> me.brithday.year >> me.brithday.month >> me.brithday.day >> me.ID >> me.email;
	cout << "姓名：" << me.name << "," << "性别：" << me.sex << "," << "出生日期：" << me.brithday.year << "年" << me.brithday.month << "月" << me.brithday.day << "日,"
	<< "身份证号：" << me.ID << "," << endl;
	cout << "电子邮箱:" << me.email << endl;
	system("pause");
	return 0;
}