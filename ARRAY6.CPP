#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[]={1,23,4,4,4,4,4}
	int *i,*j;
	i = &arr[1];
	j=&arr[5];
	printf("%d%d",j-i,*j-*i);
	getch();
}