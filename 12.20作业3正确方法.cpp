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
		cout << "请输入第<<i<<名学生数据：" << endl;
		cout << "姓名：";
		cin >> s[i].name;
		cout << "A科目成绩：";
		cin >> s[i].A;
		cout << "B科目成绩：";
		cin >> s[i].B;
		cout << "C科目成绩：";
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
	cout << "学生成绩列表：" << endl;
	for (int k = 0; k <n; k++)
	{
		cout << "姓名：" << s[k].name << "," << "A课程成绩：" << s[k].A << "," << "B课程成绩：" << s[k].B << "," << "C课程成绩：" << s[k].C << "," << fixed << "平均数：" << s[k].aver << endl;
	}
}