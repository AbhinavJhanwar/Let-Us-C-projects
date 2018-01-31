#include<stdio.h>
#include<conio.h>
#define MACRO macro
void main()
{
	clrscr();
	#ifdef MACRO
	printf("\tMACRO");
	#endif
	getch();
}