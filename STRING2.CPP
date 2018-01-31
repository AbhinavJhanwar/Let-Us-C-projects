#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char name[25];
	/*char name[]="HAESLER";*/
	printf("Enter your name");
	scanf("%s",name);
	printf("Hello %s",name);
	getch();
}