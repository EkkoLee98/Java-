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
	cout << "请输入第1名学生数据：" << endl;
	cout << "姓名：";
	cin >> s[0].name;
	cout << "A科目成绩：";
	cin >> s[0].A;
	cout << "B科目成绩：";
	cin >> s[0].B;
	cout << "C科目成绩：";
	cin >> s[0].C;
	cout << "请输入第2名学生数据：" << endl;
	cout << "姓名：";
	cin >> s[1].name;
	cout << "A科目成绩：";
	cin >> s[1].A;
	cout << "B科目成绩：";
	cin >> s[1].B;
	cout << "C科目成绩：";
	cin >> s[1].C;
	cout << "请输入第3名学生数据：" << endl;
	cout << "姓名：";
	cin >> s[2].name;
	cout << "A科目成绩：";
	cin >> s[2].A;
	cout << "B科目成绩：";
	cin >> s[2].B;
	cout << "C科目成绩：";
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
	cout << "学生成绩列表：" << endl;
	cout << "姓名：" << s[0].name << "," << "A课程成绩：" << s[0].A << "," << "B课程成绩：" << s[0].B << "," << "C课程成绩：" << s[0].C << "," << fixed << "平均数：" << s[0].aver << endl;
	cout << "姓名：" << s[1].name << "," << "A课程成绩：" << s[1].A << "," << "B课程成绩：" << s[1].B << "," << "C课程成绩：" << s[1].C << "," << fixed << "平均数：" << s[1].aver << endl;
	cout << "姓名：" << s[2].name << "," << "A课程成绩：" << s[2].A << "," << "B课程成绩：" << s[2].B << "," << "C课程成绩：" << s[2].C << "," << fixed << "平均数：" << s[2].aver;
	cout << "\n";
}
