#include<stdio.h>
#include<conio.h>
struct book
{
	char name[25];
	char author[25];
	int callno;
};
void main()
{
	clrscr();
	struct book b1={"jeru","nagpur",10};
	printf("%u %u %u",&b1.name,&b1.author,&b1.callno);
	getch();
}
