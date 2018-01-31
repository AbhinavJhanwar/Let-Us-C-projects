#include<stdio.h>
#include<conio.h>
#define AREA(x) (3.14*x*x)
void main()
{
	float r1 = 6.25,r2 = 2.5,a;
	clrscr();
	a=AREA(r1);
	printf("\nArea of circle = %f",a);
	a = AREA(r2);
	printf("\nArea of circle = %f",a);
	getch();
}