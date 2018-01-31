#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch = 'z';
	int i = 125;
	float a = 12.55;
	char s[] = "hello there!";
	printf("\n %c\n %d\n %f",ch,i,a);
	sprintf(str,"%d %c %f",i,ch,a);
	printf("\n %s",str);
	getch();
}
