#include <iostream>
using namespace std;
struct  Student
{
	char name[10];
	int A;
	int B;
	int C;
	float aver;
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
	cout << "�������1��ѧ�����ݣ�" << endl;
	cout << "������";
	cin >> s[0].name;
	cout << "A��Ŀ�ɼ���";
	cin >> s[0].A;
	cout << "B��Ŀ�ɼ���";
	cin >> s[0].B;
	cout << "C��Ŀ�ɼ���";
	cin >> s[0].C;
	cout << "�������2��ѧ�����ݣ�" << endl;
	cout << "������";
	cin >> s[1].name;
	cout << "A��Ŀ�ɼ���";
	cin >> s[1].A;
	cout << "B��Ŀ�ɼ���";
	cin >> s[1].B;
	cout << "C��Ŀ�ɼ���";
	cin >> s[1].C;
	cout << "�������3��ѧ�����ݣ�" << endl;
	cout << "������";
	cin >> s[2].name;
	cout << "A��Ŀ�ɼ���";
	cin >> s[2].A;
	cout << "B��Ŀ�ɼ���";
	cin >> s[2].B;
	cout << "C��Ŀ�ɼ���";
	cin >> s[2].C;
	cout << "\n";
}
void average(Student s[], int n)
{

	float sum1, sum2, sum3;
	sum1 = (float)(s[0].A + s[0].B + s[0].C) / 3;
	sum2 = (float)(s[1].A + s[1].B + s[1].C) / 3;
	sum3 = (float)(s[2].A + s[2].B + s[2].C) / 3;
	s[0].aver = sum1;
	s[1].aver = sum2;
	s[2].aver = sum3;
}
void print(Student s[], int n)
{
	cout << "ѧ���ɼ��б�" << endl;
	cout << "������" << s[0].name << "," << "A�γ̳ɼ���" << s[0].A << "," << "B�γ̳ɼ���" << s[0].B << "," << "C�γ̳ɼ���" << s[0].C << "," << fixed << "ƽ������" << s[0].aver << endl;
	cout << "������" << s[1].name << "," << "A�γ̳ɼ���" << s[1].A << "," << "B�γ̳ɼ���" << s[1].B << "," << "C�γ̳ɼ���" << s[1].C << "," << fixed << "ƽ������" << s[1].aver << endl;
	cout << "������" << s[2].name << "," << "A�γ̳ɼ���" << s[2].A << "," << "B�γ̳ɼ���" << s[2].B << "," << "C�γ̳ɼ���" << s[2].C << "," << fixed << "ƽ������" << s[2].aver;
	cout << "\n";
}
