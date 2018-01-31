#include<stdio.h>
#include<conio.h>
#include<string.h>
void xstrcpy(char *,char *);
void main()
{
	clrscr();
	char source[]="Sayonara";
	char target[20];
	xstrcpy(target,source);
	printf("\nsource string = %s",source);
	printf("\ntarget string = %s",target);
	getch();
}
void xstrlen(char *t,char *s)
{
	while(*s!='\0')
	{
		*s=*t;
		t++;
		s++;
	}

}