#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *in, *out;
	char  ch, infile[60], outfile[60];
	printf("����Դ�ļ�������:");
	scanf("%s", infile);
	printf("����Ŀ���ļ�������:");
	scanf("%s", outfile);
	if ((in = fopen(infile, "r")) == NULL)
	{
		printf("�޷���Դ�ļ�\n");
		exit(0);
	}
	if ((out = fopen(outfile, "w")) == NULL)
	{
		printf("�޷���Ŀ���ļ�\n");
		exit(0);
	}
	printf("\n�ļ�����:\n");
	ch = fgetc(in);
	while (!feof(in))
	{
		ch = fgetc(in);
		fputc(ch, out);
		putchar(ch);
	}
	printf("\n\n�ļ��������\n\n");
	fclose(in);
	fclose(out);
	system("pause");
	return 0;}