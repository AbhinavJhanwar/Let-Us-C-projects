#include<stdio.h>
#include<conio.h>
#define ISDIGIT(y) (y)=48&&y<=57
void main()
{
	char ch;
	clrscr();
	printf("\nEnter any digit");
	scanf("%c",&ch);
	if(ISDIGIT(ch))
	printf("\n You entered a digit");
	else
	printf("\n illegal input");
	getch();
}