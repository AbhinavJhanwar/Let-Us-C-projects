#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch;
	printf("\n Press any key to continue");
	getch();
	printf("\n Type any character");
	ch= getche();
	printf("\n Type any character");
	getchar();
	printf("\n Continue Y/N\n");
	fflush(stdin);
	fgetchar();
	ch = 'A';
	putch(ch);
	putchar(ch);
	fputchar(ch);
	putch('Z');
	putchar('Z');
	fputchar('Z');
	getch();
}
