#include <iostream>
using namespace std;
int n = 3;
struct  Student
{
	char name[10];
	int A;
	int B;
	int C;
	double aver;
};
int main()
{
	Student stud[3];
	void input(Student s[], int n);
	void average(Student s[], int n);
	void print(Student s[], int n);
	input(stud, 3);
	average(stud, 3);
	print(stud, 3);
	system("pause");
	return 0;
}
void input(Student s[], int n)
{
	for (int i = 0; i <n; i++)
	{
		cout << "�������<<i<<��ѧ�����ݣ�" << endl;
		cout << "������";
		cin >> s[i].name;
		cout << "A��Ŀ�ɼ���";
		cin >> s[i].A;
		cout << "B��Ŀ�ɼ���";
		cin >> s[i].B;
		cout << "C��Ŀ�ɼ���";
		cin >> s[i].C;
	}
}
void average(Student s[], int n)
{
	for (int j = 0; j <n; j++)
	{
		s[j].aver = (double)(s[j].A + s[j].B + s[j].C) / 3;
	}
}
void print(Student s[], int n)
{
	cout << "ѧ���ɼ��б�" << endl;
	for (int k = 0; k <n; k++)
	{
		cout << "������" << s[k].name << "," << "A�γ̳ɼ���" << s[k].A << "," << "B�γ̳ɼ���" << s[k].B << "," << "C�γ̳ɼ���" << s[k].C << "," << fixed << "ƽ������" << s[k].aver << endl;
	}
}