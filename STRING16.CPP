#include<stdio.h>
#include<conio.h>
#include<string.h>
void xstrcmp(char *,char *);
void main()
{
	clrscr();
	char string1[]="Jerry";
	char string2[]="Ferry";
	int i,j,k;
	i = xstrcmp(string1,"Jerry");
	j = xstrcmp(string1,string2);
	k = xstrcmp(string1,"Jerry boy");
	printf("\n%d %d %d",i,j,k);
	getch();
}
void xstrcmp(char *s,char *t)
{
	while(*s!='\0'||*t!='\0')
	if(*s!=*t)
	return();
}