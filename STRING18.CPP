#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	clrscr();
	char *names[6];
	char n[50];
	int len, i;
	char *p;
	for(i=0;i<=5;i++)
	{
		printf("\nEnter name");
		scanf("%s",n);
		len=strlen(n);
		p=(char*)malloc(len+1);
		strcpy(p,n);
		names[i]=p;
	}
	for(i=0;i<=5;i++)
		printf("\n%s",names[i]);
	getch();
}

