#include<stdio.h>
#include<conio.h>
void main()
{
	static int a[]={0,1,2,3,5};
	int *p[]={a,a+1,a+2,a+3,a+4};
	clrscr();
	printf("\t%u\t%d\t%d",p,*p[0],*(*p+0));
	getch();
}