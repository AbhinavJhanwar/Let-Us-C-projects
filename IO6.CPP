#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char another='Y';
	clrscr();
	struct emp
	{
		char name[40];
		int age;
		float bs;
	};
	struct emp e;
	fp = fopen("EMPLOYEE.DAT","w");
	if(fp==NULL)
	{
		puts("cannot open file");
		exit(1);
	}
	while(another=='Y')
	{
		printf("\nEnter name,age & basic salary:");
		scanf("%s %d %f",e.name,&e.age,&e.bs);
		fprintf(fp,"%s %d %f\n",e.name,e.age,e.bs);
		printf("Add another record (Y/N)");
		fflush(stdin);
		another=getche();
	}
	fclose(fp);
	getch();
}