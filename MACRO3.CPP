#include<stdio.h>
#include<conio.h>
#define FOUND printf("The Yankee Doodle Virus");
void main()
{
	char signature;
	clrscr();
	if(signature=='Y')
	FOUND
	else
	printf("Safe....as yet!");
	getch();
}