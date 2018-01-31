#include<stdio.h>
#include<conio.h>
#pragma warn +rvl
#pragma warn +par
#pragma warn +rch
int fun1();
void fun2(int);
int fun3();

int fun1()
{
int a =5;
}

void main()
{
	clrscr();
	fun1();
	fun2(7);
	fun3();
	getch();
}
void fun2(intx)
{
printf("\ninside 2");
}
int fun3()
{
int x=6;
return x;
x++;
}