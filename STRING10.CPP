#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	clrscr();
	char source[]="Sayonara";
	char target[20];
	strcpy(target,source);
	printf("\nsource string = %s",source);
	printf("\ntarget string = %s",target);
	getch();
}
/*int xstrlen(char *s)
{
	int length=0;
	while(*s!='\0')
	{
		length++;
		s++;
	}
	return(length);
} */