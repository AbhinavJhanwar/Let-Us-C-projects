#include<stdio.h>
#include<conio.h>
void main()
{
	int stud[4][2];
	int i,j;
	for(i=0;i<=3;i++)
	{
		printf("\nEnter roll no. & marks");
		scanf("\n%d\t%d",&stud[i][0],&stud[i][1]);
	}
	for(i=0;i<=3;i++)
	printf("\n%d\t%d",stud[i][0],stud[i][1]);
	getch();
}
