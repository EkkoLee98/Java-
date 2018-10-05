#include <iostream>
using namespace std;
int main(void)
{
	void printstar(void);
	void print_message(void);
	printstar();
	print_message();
	printstar();
	system("pause");
	return 0;
}
void printstar(void)
{
	cout << "**********************" << endl;
}
void print_message(void)
{
	cout << "   Welcome to C++" << endl;
}