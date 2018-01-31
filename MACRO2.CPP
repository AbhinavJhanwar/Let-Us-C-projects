#include<stdio.h>
#include<conio.h>
#define AND &&
#define ARANGE (a>25 AND a<50)
void main()
{
	int a=30;
	clrscr();
	if(ARANGE)
	printf("within range");
	else
	printf("out of range");
	getch();
}