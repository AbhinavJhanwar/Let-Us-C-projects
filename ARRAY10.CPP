#include<stdio.h>
#include<conio.h>
void main()
{
	int num[]={1,23,4,4,4,4,4};
	int i;
	for(i=0;i<=6;i++)
	{
		printf("\naddress =%u,%u",&num[i],(num+i));
		printf("\telement= %d,%d,%d,%d",num[i],*&num[i],*(num+i),i[num]);
	}
	getch();
}
