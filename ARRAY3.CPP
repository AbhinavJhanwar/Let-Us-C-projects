#include<conio.h>
#include<stdio.h>
void display(int*);
void main()
{
	int i;
	int marks[]={55,65,75,56,78,78,90};
	clrscr();
	for(i=0;i<=6;i++)
	display(&marks[i]);
	getch();
}
void display(int* m)
{
	printf("\t%d",*m);
}