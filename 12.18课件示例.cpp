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
	}a = { 10101,"Li Lin",'M',"123 Beijing Road" };//����a��ʼ��
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
	cout << "����������ѧ��������(ѧ�š��������ɼ�):\n";
	cin >> student1.num >> student1.name >> student1.score;
	cin >> student2.num >> student2.name >> student2.score;
	cout << "\n���߳ɼ���:\n";
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
struct person  // �����ṹ������struct person
{
	char name[20];// ��ѡ������
	int count;       // ��ѡ�˵�Ʊ�� 
}leader[3] = { "Li",0,"Zhang",0,"Fun",0 };// ����ṹ�����鲢��ʼ��
int main()
{
	int i, j;
	char leader_name[20]; // �����ַ����� 
	for (i = 1; i <= 5; i++)
	{
		cin >> leader_name;// ������ѡ�ĺ�ѡ������  
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
	struct Student *next;//nextָ��Student�ṹ�����
};
int main()
{
	Student a, b, c, *head, *p;
	a.num = 31001; a.score = 89.5; //�Խ��a��num��score��Ա��ֵ           
	b.num = 31003; b.score = 90; //�Խ��b��num��score��Ա��ֵ              
	c.num = 31007; c.score = 85; //�Խ��c��num��score��Ա��ֵ           
	head = &a; //�����a����ʼ��ַ����ͷָ��head                             
	a.next = &b; //�����b����ʼ��ַ����a����next��Ա                             
	b.next = &c; //�����c����ʼ��ַ����a����next��Ա 
	c.next = NULL; //����next��Ա�������������ַ                          
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
	//��������
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
	//�������
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
typedef float  Real;int i, j;          Integer i, j��
float a, b;      Real a, b; ���ȼ�
typedef struct
{
	int month; int day; int year;
}Date;
Date birthday;
Date *p;
typedef int Num[100];
Num a;
