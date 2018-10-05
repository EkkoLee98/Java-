#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *in, *out;
	char  ch, infile[60], outfile[60];
	printf("输入源文件的名字:");
	scanf("%s", infile);
	printf("输入目标文件的名字:");
	scanf("%s", outfile);
	if ((in = fopen(infile, "r")) == NULL)
	{
		printf("无法打开源文件\n");
		exit(0);
	}
	if ((out = fopen(outfile, "w")) == NULL)
	{
		printf("无法打开目标文件\n");
		exit(0);
	}
	printf("\n文件内容:\n");
	ch = fgetc(in);
	while (!feof(in))
	{
		ch = fgetc(in);
		fputc(ch, out);
		putchar(ch);
	}
	printf("\n\n文件复制完毕\n\n");
	fclose(in);
	fclose(out);
	system("pause");
	return 0;}