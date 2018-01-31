#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fs,*ft;
	char ch;
	clrscr();
	fs = fopen("PR1.c","r");
	if(fs==NULL)
	{
		puts("cannot open source file");
		exit(1);
	}
	ft=fopen("pr2.c","w");
	if(ft == NULL)
	{
		puts("cannot open target file");
		fclose(fs);
		exit(2);
	}
	while(1)
	{
		ch=fgetc(fs);
		if(ch==EOF)
		break;
		else
		fputc(ch,ft);
	}
	fclose(fs);
	fclose(ft);
	getch();
}