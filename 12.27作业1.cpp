#include <stdlib.h>
#include <stdio.h>
int main()
{
	FILE *fp;

	char ch, filename[100];
	printf("������Ŀ���ļ�����");
	scanf_s("%s", &filename, 100);
	if ((fp = fopen_s(filename, "w")) == NULL)
	{
		printf("�޷��򿪴��ļ�\n");
		exit(0);
	}
	ch = getchar();
	printf("������һ��׼���洢�����̵��ַ���(��@����)��");
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
	printf("������Ŀ���ļ�����");
	scanf("%s", filename);
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("�޷��򿪴��ļ�\n");
		exit(0);
	}
	ch = getchar();
	printf("������һ��׼���洢�����̵��ַ���(��@����)��");
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


