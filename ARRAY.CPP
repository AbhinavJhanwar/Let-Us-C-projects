#include<conio.h>
#include<stdio.h>
void main()
{
	int avg,sum=0;
	int i;
	int marks[5];
	clrscr();
	for(i=0;i<=4;i++)
	{
		printf("\nEnter marks");
		scanf("\n%d",&marks[i]);
	}
	for(i=0;i<=4;i++)
	sum=sum+marks[i];
	avg = sum/5;
	printf("\nAverge marks = %d",avg);
	getch();
}