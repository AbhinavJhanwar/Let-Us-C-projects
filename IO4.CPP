#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	FILE *fp;
	char s[80];
	clrscr();
	fp = fopen("POEM.TXT","w");
	if(fp==NULL)
	{
		puts("cannot open file");
		exit(1);
	}
	printf("\n Enter a few lines of text: \n");
	while(strlen(gets(s)>0)
	{
		fputs(s,fp);
		fputs("\n",fp);
	}
	fclose(fp);
	getch();
}