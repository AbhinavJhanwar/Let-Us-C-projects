#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char s[80];
	clrscr();
	fp = fopen("POEM.TXT","r");
	if(fp==NULL)
	{
		puts("cannot open file");
		exit(1);
	}
	while(fgets(s,79,fp)!=NULL)
	printf("%s",s);
	fclose(fp);
	getch();
}