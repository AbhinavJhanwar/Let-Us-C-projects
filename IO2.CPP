#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char int nol=0,not=0,nob=0,noc=0;
	clrscr();
	fp = fopen("PR1.c","r");
	while(1)
	{
		ch= fgetc(fp);
		if(ch==EOF)
		break;
		noc++;
		if(ch==' ')
		nob++;
		if(ch=='\n')
		nol++;
		if(ch=='\t')
		not++;
		printf("%c",ch);
	}
	if(fp==NULL)
	{
		puts("cannot open file");
		exit(1);
	}
	fclose(fp);
	printf("\nNumber of characters = %d",noc);
	printf("\nNumber of blanks = %d",nob);
	printf("\nNumber of tabs = %d",not);
	printf("\nNumber of lines = %d",nol);
	getch();
}