#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	clrscr();
	char another = 'Y';
	struct emp
	{
		char name[40];
		int age;
		float bs;
	};
	struct emp e;
	fp = fopen("EMP.DAT","wb");
	if(fp==NULL)
	{
		puts("cannot open file");
		exit(1);
	}
	while(another == 'Y')
	{
		printf("\n Enter name, age & basic salary:");
		scanf("%s %d %f",e.name,&e.age,&e.bs);
		fwrite(&e,sizeof(e),1,fp);
		printf("Add another record(Y/N)");
		fflush(stdin);
		another=getche();
	}
	fclose(fp);
	getch();
}