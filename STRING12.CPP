#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char *p = "HELLO";
	puts(p);
	printf("\n%c\n",*p);
	*p = 'M';
	puts(p);
	printf("\n%c\ n",*p);
	p="Bye";
	puts(p);
	printf("%c",*p);
	getch();
}
