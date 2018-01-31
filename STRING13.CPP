#include<stdio.h>
#include<conio.h>
#include<string.h>
void xstrcpy(char *,char *);
void main()
{
	clrscr();
	char source[]= "Folks!";
	char target[]= "Hello";
	strcat(target,source);
	printf("\nsource string = %s",source);
	printf("\ntarget string = %s",target);
	getch();
}
