#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	FILE *fp,*ft;
	clrscr();
	char another,choice;
	struct emp
	{
		char name[40];
		int age;
		float bs;
	};
	struct emp e;
	char empname[40];
	long int recsize;
	fp = fopen("EMP.DAT","rb+");
	if(fp==NULL)
	{
		fp=fopen("EMP.DAT","wb+");
		if(fp==NULL)
		{
			puts("cannot open file");
			exit(1);
		}
	}
	recsize = sizeof(e);
	while(1)
	{
		clrscr();
		gotoxy(30,10);
		printf("1.Add Records");
		gotoxy(30,12);
		printf("2.List Records");
		gotosy(30,14);
		printf("3.Modify Records");
		gotoxy(30,16);
		printf("4.Delete Records");
		gotoxy(30,18);
		printf("0.Exit");
		gotoxy(30,20);
		printf("Your Choice");

		fflush(stdin);
		choice=getche();
		switch(choice)
		{
			case'1':
				fseek(fp,0,SEEK_END);
				another='Y';
				while(another=='Y')
				{
					printf("\n Enter name,age & basic sal.");
					scanf("%s %d %f",e.name,&e.age,&e.bs);
					fwrite(&e,recsize,1,fp);
					printf("\n Add another record(Y/N)");
					fflush(stdin);
					another=getche();
				}
				break;
			case'2':
				rewind(fp);
				while(fread(&e,recsize,1,fp)==1)
					printf("\n%s %d %f",e.name,e.age,e.bs);
				break;
			case'3':

	{
		printf("\n Enter name, age & basic salary:");
		scanf("%s %d %f",e.name,&e.age,&e.bs);
		fwrite(&e,sizeof(e),2,fp);
		printf("Add another record(Y/N)");
		fflush(stdin);
		another=getche();
	}
	fclose(fp);
	getch();
}