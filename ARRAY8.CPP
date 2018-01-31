#include<stdio.h>
#include<conio.h>
void main()
{
	int i,*j;
	int num[]={1,23,4,4,4,4,4};
	j=(num);
	for(i=0;i<=6;i++)
	{
		printf("\naddress=%u",j);
		printf("\telement=%d",*j);
		j++;
	}
	getch();
}