/*#include <iostream> 
using namespace std;
struct Book
{
	char title[100];
	char authors[30];
	char ISBN[20];
	int pages;
	float price;
};
int main()
{
	void print(Book);
	Book book1 = { "c程序设计（第四版）","谭浩强","978-7-302-22446-4",390,29.000000 }, book2;
	cout << "请输入实验指导书的信息：书名、作者、ISBN、页数、价格:";
	cin >> book2.title >> book2.authors >> book2.ISBN >> book2.pages >> book2.price;
	cout << "教材、实验书信息如下:" << endl;
	cout << "书名:" << book1.title << "," << "作者:" << book1.authors << "," << "ISBN:" << book1.ISBN << "," << endl;
	cout << "总页数:" << book1.pages << "," << fixed << "价格:" << book1.price << endl;
	cout << "书名:" << book2.title << "," << "作者:" << book2.authors << "," << "ISBN:" << book2.ISBN << "," << endl;
	cout << "总页数:" << book2.pages << "," << fixed << "价格:" << book2.price;
	system("pause");
	return 0;
}*/
#include <iostream>
using namespace std;
struct Book
{
	char title[100];
	char authors[30];
	char ISBN[20];
	int pages;
	float price;
}book1 = { "c程序设计（第四版）","谭浩强","978-7-302-22446-4",390,29.000000 };
int main()
{
	void print(Book);
	Book book2;
	cout << "请输入实验指导书的信息：书名、作者、ISBN、页数、价格:";
	cin >> book2.title >> book2.authors >> book2.ISBN >> book2.pages >> book2.price;
	cout << "教材、实验书信息如下:" << endl;
	cout << "书名:" << book1.title << "," << "作者:" << book1.authors << "," << "ISBN:" << book1.ISBN << "," << endl;
	cout << "总页数:" << book1.pages << "," << fixed << "价格:" << book1.price << endl;
	cout << "书名:" << book2.title << "," << "作者:" << book2.authors << "," << "ISBN:" << book2.ISBN << "," << endl;
	cout << "总页数:" << book2.pages << "," << fixed << "价格:" << book2.price;
	system("pause");
	return 0;
}
