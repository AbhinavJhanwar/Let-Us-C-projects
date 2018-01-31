#include<stdio.h>
#include<conio.h>
#define HLINE for(i=0;i<70;i++)\
	printf("%c",196);
#define VLINE(x,y){\
	gotoxy(x,y);\
	printf("%c",179);\
	}
void main()
{
	int i,y;
	clrscr();
	gotoxy(1,12);
	HLINE
	for(y=1;y<25;y++)
	VLINE(39,y);
	getch();
}