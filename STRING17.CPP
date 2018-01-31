#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char *names[]={
			"akshay",
			"parag",
			"raman",
			"srinivas",
			"gopal",
			"rajesh"
			};
	char *temp;
	printf("Original: %s %s",names[2],names[3]);
	temp = names[2];
	names[2] = names[3];
	names[3] = temp;
	printf("\New: %s %s",names[2],names[3]);
	getch();
}