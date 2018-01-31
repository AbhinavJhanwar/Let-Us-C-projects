#include<stdio.h>
#include<conio.h>
#include<string.h>
void xstrcat(char*,char*);
void main()
{
	clrscr();
	char source[]= " Folks!";
	char target[]= "Hello";
	xstrcat(target,source);
	printf("\nsource string = %s",source);
	printf("\ntarget string = %s",target);
	getch();
}
void xstrcat(char *t,char *s)
{

	strcpy(t+5,s);
}
