#include<stdio.h>
#include<conio.h>
void display(int*,int);
void main()
{
	int num[]={1,23,4,4,4,4,4};
	display(&num[0],7);
	getch();
}
void display(int*j,int m)
{
	int i;
	for(i=0;i<=m-1;i++)
	{
		printf("\nelement= %d",*j);
		j++;
	}
}