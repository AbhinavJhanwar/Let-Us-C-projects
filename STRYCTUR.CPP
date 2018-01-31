#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	struct book
	{
		char name;
		float price;
		int pages;
	};
	struct book b[100];
	int i;
	for(i=0;i<=2;i++)
	{
		printf("\nEnter name, price and pages");
		scanf("%c %f %d",&b[i].name,&b[i].price,&b[i].pages);
	}
	for(i=0;i<=2;i++)
	printf("%c %f %d",b[i].name,b[i].price,b[i].pages);
	getch();
}

linkfloat()
{
	float a=0,*b;
	b=&a;
	a=*b;
}
