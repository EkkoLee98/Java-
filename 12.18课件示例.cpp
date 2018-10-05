struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
} student1, student2

struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	struct Date birthday;
	char addr[30];
};
struct Date
{
	int month;
	int day;
	int year;
};


#include <iostream>
using namespace std;
int main()
{
	struct student
	{
		long int num;
		char name[20];
		char sex;
		char addr[20];
	}a = { 10101,"Li Lin",'M',"123 Beijing Road" };//变量a初始化
	cout << "NO.:" << a.num << "\nname:" << a.name << "\nsex:" << a.sex << "\naddress:" << a.addr;
	return 0;
}


#include <iostream>
using namespace std;
int main()
{
	struct student
	{
		int num;
		char name[20];
		float score;
	}student1, student2;
	cout << "请输入两个学生的资料(学号、姓名、成绩):\n";
	cin >> student1.num >> student1.name >> student1.score;
	cin >> student2.num >> student2.name >> student2.score;
	cout << "\n更高成绩是:\n";
	if (student1.score>student2.score)
		cout << student1.num << student1.name << student1.score;
	else if (student1.score<student2.score)
		cout << student2.num << student2.name << student2.score;
	else
	{
		cout << student1.num << student1.name << student1.score;
		cout << student2.num << student2.name << student2.score;
	}
	system("pause");
	return 0;
}
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
}sty[3] = {
	{ 10101,"Li Lin",'M',18,87.5,"103 Beijing Road" },
	{ 10102,"Zhang Fun",'M',19,99,"130 Shanghai Road" },
	{ 10104,"Wang Min",'F',20,78.5,"1010,Zhongshan Road" }
};


#include <iostream>
using namespace std;
struct person  // 声明结构体类型struct person
{
	char name[20];// 候选人姓名
	int count;       // 候选人得票数 
}leader[3] = { "Li",0,"Zhang",0,"Fun",0 };// 定义结构体数组并初始化
int main()
{
	int i, j;
	char leader_name[20]; // 定义字符数组 
	for (i = 1; i <= 5; i++)
	{
		cin >> leader_name;// 输入所选的候选人姓名  
		for (j = 0; j<3; j++)
			if (strcmp(leader_name, leader[j].name) == 0)
				leader[j].count++;
	}
	cout << "\nResoult:\n";
	for (i = 0; i<3; i++)
		cout << leader[i].name << leader[i].count << endl;
	system("pause");

	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
	struct Student
	{
		int num;
		string name;
		char sex;
		float score;
	};
	Student stu;
	Student *p = &stu;
	stu.num = 10301;
	stu.name = "Wang Fun";
	stu.sex = 'f';
	stu.score = 89.5;
	cout << stu.num << "" << stu.name << "" << stu.sex << "" << stu.score << endl;
	cout << (*p).num << "" << (*p).name << "" << (*p).sex << (*p).score << endl;
	return 0;
}

#define NULL 0   
#include <iostream> 
using namespace std;
struct Student
{
	long num;
	float score;
	struct Student *next;//next指向Student结构体变量
};
int main()
{
	Student a, b, c, *head, *p;
	a.num = 31001; a.score = 89.5; //对结点a的num和score成员赋值           
	b.num = 31003; b.score = 90; //对结点b的num和score成员赋值              
	c.num = 31007; c.score = 85; //对结点c的num和score成员赋值           
	head = &a; //将结点a的起始地址赋予头指针head                             
	a.next = &b; //将结点b的起始地址赋予a结点的next成员                             
	b.next = &c; //将结点c的起始地址赋予a结点的next成员 
	c.next = NULL; //结点的next成员不存放其他结点地址                          
	p = head;
	do
	{
		cout << p->num << " " << p->score << endl;
		p = p->next;
	} while (p != NULL);
	return 0;
}

struct
{
	int num;
	char name[10];
	char sex;
	char job;
	union
	{
		int class;
		char position[10];
	}category;
}person[2];


#include <iostream> 
#include <iomanip>  
using namespace std;
struct
{
	int num;
	char name[10];
	char sex;
	char job;
	union
	{
		int clas;
		char position[10];
	}category;
}person[2];
int main()
{
	int i;
	//数据输入
	for (i = 0; i<2; i++)
	{
		cout << "please enter the data of person:\n";
		cin >> person[i].num >> person[i].name >> person[i].sex >> person[i].job;
		if (person[i].job == 's')
			cin >> person[i].category.clas;
		else if (person[i].job == 't')
			cin >> person[i].category.position;
		else
			cout << "Input error!";
	}
	cout << "\n";
	cout << "No.  name      sex job class/position\n";
	//数据输出
	for (i = 0; i<2; i++)
	{
		if (person[i].job == 's')
			cout << person[i].num << " " << person[i].name << " " << person[i].sex
			<< "  " << person[i].job << " " << person[i].category.clas;
		else
			cout << person[i].num << " " << person[i].name << " " << person[i].sex
			<< " " << person[i].job << " " << person[i].category.position;

	}
	return 0;
}


#include <iostream>                
using namespace std;
enum game_result { WIN, LOST, TIE };
int main()
{
	game_result res;
	int count;
	for (count = WIN; count <= TIE; count++)
	{
		res = (game_result)count;
		if (res == WIN)
			cout << "WIN\n";
		else
			if (res == LOST) cout << "LOST\n";
			else cout << "TIE\n";
	}
	return 0;
}

typedef int Integer;
typedef float  Real;int i, j;          Integer i, j；
float a, b;      Real a, b; 等价
typedef struct
{
	int month; int day; int year;
}Date;
Date birthday;
Date *p;
typedef int Num[100];
Num a;
