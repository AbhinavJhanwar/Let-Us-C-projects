#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char name[25];
	/*char name[]="HAESLER";*/
	printf("Enter your full name");
	gets(name);
	puts("Hello!");
	puts(name);
	getch();
}