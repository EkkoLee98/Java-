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
	cout << "�����������Ϣ(�������Ա�('m'��'f')�����������ա����֤�š������ʼ�)" << endl;
	cin >> me.name >> me.sex >> me.brithday.year >> me.brithday.month >> me.brithday.day >> me.ID >> me.email;
	cout << "������" << me.name << "," << "�Ա�" << me.sex << "," << "�������ڣ�" << me.brithday.year << "��" << me.brithday.month << "��" << me.brithday.day << "��,"
	<< "���֤�ţ�" << me.ID << "," << endl;
	cout << "��������:" << me.email << endl;
	system("pause");
	return 0;
}