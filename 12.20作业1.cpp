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
	Book book1 = { "c������ƣ����İ棩","̷��ǿ","978-7-302-22446-4",390,29.000000 }, book2;
	cout << "������ʵ��ָ�������Ϣ�����������ߡ�ISBN��ҳ�����۸�:";
	cin >> book2.title >> book2.authors >> book2.ISBN >> book2.pages >> book2.price;
	cout << "�̲ġ�ʵ������Ϣ����:" << endl;
	cout << "����:" << book1.title << "," << "����:" << book1.authors << "," << "ISBN:" << book1.ISBN << "," << endl;
	cout << "��ҳ��:" << book1.pages << "," << fixed << "�۸�:" << book1.price << endl;
	cout << "����:" << book2.title << "," << "����:" << book2.authors << "," << "ISBN:" << book2.ISBN << "," << endl;
	cout << "��ҳ��:" << book2.pages << "," << fixed << "�۸�:" << book2.price;
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
}book1 = { "c������ƣ����İ棩","̷��ǿ","978-7-302-22446-4",390,29.000000 };
int main()
{
	void print(Book);
	Book book2;
	cout << "������ʵ��ָ�������Ϣ�����������ߡ�ISBN��ҳ�����۸�:";
	cin >> book2.title >> book2.authors >> book2.ISBN >> book2.pages >> book2.price;
	cout << "�̲ġ�ʵ������Ϣ����:" << endl;
	cout << "����:" << book1.title << "," << "����:" << book1.authors << "," << "ISBN:" << book1.ISBN << "," << endl;
	cout << "��ҳ��:" << book1.pages << "," << fixed << "�۸�:" << book1.price << endl;
	cout << "����:" << book2.title << "," << "����:" << book2.authors << "," << "ISBN:" << book2.ISBN << "," << endl;
	cout << "��ҳ��:" << book2.pages << "," << fixed << "�۸�:" << book2.price;
	system("pause");
	return 0;
}
