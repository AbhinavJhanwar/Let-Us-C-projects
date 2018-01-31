#include<stdio.h>
#include<conio.h>
void fun1();
void fun2();
#pragma startup fun1
#pragma exit fun2
void main()
{
	clrscr();
	printf("inside main");
	getch();
}
void fun1()
{
printf("\ninside 1");
)
void fun2()
{
printf("\ninside 2");
}