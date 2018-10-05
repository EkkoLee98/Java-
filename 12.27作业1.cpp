#include <stdlib.h>
#include <stdio.h>
int main()
{
	FILE *fp;

	char ch, filename[100];
	printf("请输入目标文件名：");
	scanf_s("%s", &filename, 100);
	if ((fp = fopen_s(filename, "w")) == NULL)
	{
		printf("无法打开此文件\n");
		exit(0);
	}
	ch = getchar();
	printf("请输入一个准备存储到磁盘的字符串(以@结束)：");
	ch = getchar();
	while (ch != '@')
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();

	}
	fclose(fp);
	putchar(10);

	return 0;
}
#include <stdlib.h>
#include <stdio.h>
int main()
{
	FILE *fp;

	char ch, filename[100];
	printf("请输入目标文件名：");
	scanf("%s", filename);
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("无法打开此文件\n");
		exit(0);
	}
	ch = getchar();
	printf("请输入一个准备存储到磁盘的字符串(以@结束)：");
	ch = getchar();
	while (ch != '@')
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();

	}
	fclose(fp);
	putchar(10);

	return 0;
}


