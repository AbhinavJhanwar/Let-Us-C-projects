#include<stdio.h>
#include<conio.h>
void main()
{
	int stud[4][2]={
			{1234,56}
			{1212,33}
			{1434,80}
			{1312,78}
			};
	int i;
	clrscr();
	for(i=0;i<=3;i++)
	{

		printf("\naddress of %d 1-D array = %u",i,stud[i]);
	}
	for(i=0;i<=3;i++)
	printf("\n%d\t%d",stud[i][0],stud[i][1]);
	getch();
}
