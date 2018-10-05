#include <iostream>
using namespace std;
float average(float array[10])
{
	int i;
	float aver, sum = array[0];
	for (i = 1; i<10; i++)
		sum = sum + array[i]; aver = sum / 10;
	return(aver);
}
int main()
{
	float score[10], aver;
	int i;
	cout << "input 10 scores:\n";
	for (i = 0; i<10; i++)
		cin >> score[i];
	cout << "\n";
	aver = average(score);  // µ÷ÓÃaverageº¯Êı
	cout << "average score is " << aver << endl;
	system("pause");
	return 0;
}
